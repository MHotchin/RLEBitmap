echo off
setlocal ENABLEDELAYEDEXPANSION
cls

set SRC_DIR=SVG
rem cd %SRC_DIR%

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

rem Each icon has a numeric leader, and a 'd' or 'n' for day/night
set ICON_LIST=01 02 03 04 09 10 11 13 50

rem for %%i in (%ICON_LIST%) do for %%j in (d n) do curl -o %%i%%j.png http://openweathermap.org/img/wn/%%i%%j@2x.png

set OUTPUT_DIR=Processed
set INCLUDE_DIR=..\..\..\src\OpenWeathermap

if not exist "%OUTPUT_DIR%" mkdir "%OUTPUT_DIR%"
if not exist "%INCLUDE_DIR%" mkdir "%INCLUDE_DIR%"

for %%i in (*.png) do call :process_file %%i

goto :eof

:process_file

set BMP_FILE=%OUTPUT_DIR%\%~n1.bmp
set INCLUDE_FILE=%INCLUDE_DIR%\%~n1.h

rem @echo on
%MAGICK% convert "%1" -background black -alpha remove +dither +antialias -colors 15 -compress none -type truecolor "BMP3:%BMP_FILE%"
%BMPER% "%BMP_FILE%" > "%INCLUDE_FILE%"
rem @echo off
goto :eof
