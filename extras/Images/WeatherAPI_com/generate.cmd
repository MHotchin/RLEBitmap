echo off
setlocal ENABLEDELAYEDEXPANSION
cls

rem  Location of the ImageMagick command line tool
set MAGICK=magick.exe

rem See if it is already in the path
where %MAGICK% >nul: 2>&1
if not errorlevel 1 goto :got_magick

rem Try a specific install location
set MAGICK="c:\Program Files\ImageMagick-7.0.10-Q16-HDRI\magick.exe"
if exist %MAGICK% goto got_magick
echo Error: Unable to locate 'magick.exe' from ImageMagick.
goto :eof

:got_magick

rem	Location of BMP to code tool
set BMPER=..\bmper.exe
if exist %BMPER% goto got_bmper
echo Error: Unable to locate 'bmper.exe' from the RLE Bitmap Arduino library
goto :eof

:got_bmper


set INCLUDE_DIR_BASE=..\..\..\src\WeatherAPI_com
if not exist "%INCLUDE_DIR_BASE%" mkdir "%INCLUDE_DIR_BASE%"

rem http://cdn.weatherapi.com/weather/64x64/night/113.png

set RESOLUTIONS=64x64 128x128
set ICON_SETS=day night
set URL_BASE=http://cdn.weatherapi.com/weather

rem Fetch all the images from WeatherAPI.com.  
rem for %%i in (%RESOLUTIONS%) do for %%j in (%ICON_SETS%) do (mkdir %%i\%%j && for /F %%k in (file_list.txt) do curl "%URL_BASE%\%%~i\%%~j\%%k" > ".\%%~i\%%~j\%%k")

echo off
for %%i in (%RESOLUTIONS%) do for %%j in (%ICON_SETS%) do call :processIconSet %%i %%j 

goto:eof


:processIconSet

set INCLUDE_DIR=%INCLUDE_DIR_BASE%\%1\%2

if not exist "%INCLUDE_DIR%" mkdir "%INCLUDE_DIR%"
set MASTER_INCLUDE=%INCLUDE_DIR%\WeatherAPI_com.h
set WORK_DIR=%1\%2
set OUT_DIR=%WORK_DIR%\Processed
if not exist "%OUT_DIR%" mkdir "%OUT_DIR%"

echo Processing %1 %2

rem  Create a limited set of colors for the icon set, so that all the icons have
rem  consistent colors
%MAGICK% "%WORK_DIR%\*.png" +append -background black -alpha remove -alpha off +repage -colors 16 -unique-colors "%OUT_DIR%\map.png"

for /F %%k in (file_list.txt) do call :process_file %%k

endlocal
goto :eof

:process_file

set BMP_FILE=%OUT_DIR%\%~n1.bmp
%MAGICK% convert "%WORK_DIR%\%1" -background black -alpha remove -alpha off +antialias -dither none -remap "%OUT_DIR%\map.png" -compress none -colors 10 -type truecolor "BMP3:%BMP_FILE%"
%BMPER% "%BMP_FILE%" > "%INCLUDE_DIR%\%~n1.h"

echo #include ^<Weather2\%WORK_DIR%\%~n1.h^> >> %MASTER_INCLUDE%

endlocal
goto :eof

