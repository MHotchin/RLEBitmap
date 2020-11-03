echo off
setlocal ENABLEDELAYEDEXPANSION
cls

set SRC_DIR=SVG
cd %SRC_DIR%

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
set BMPER=..\..\bmper.exe
if exist %BMPER% goto got_bmper
echo Error: Unable to locate 'bmper.exe' from the RLE Bitmap Arduino library
goto :eof

:got_bmper


set INCLUDE_DIR_BASE=..\..\..\..\src\WeatherIcons
if not exist "%INCLUDE_DIR_BASE%" mkdir "%INCLUDE_DIR_BASE%"


set OUTPUT_DIR_BASE=..\Processed

if not exist "%OUTPUT_DIR_BASE%" mkdir "%OUTPUT_DIR_BASE%"  

set OUTPUT_DIR=%OUTPUT_DIR_BASE%
set INCLUDE_DIR=%INCLUDE_DIR_BASE%

for %%i in (*.svg) do call :process_file %%i

for /D %%i  in (*) do call :process_dir %%i


goto :eof

:process_dir
set OUTPUT_DIR=%OUTPUT_DIR_BASE%\%1
if not exist "%OUTPUT_DIR%" mkdir "%OUTPUT_DIR%"  

set INCLUDE_DIR=%INCLUDE_DIR_BASE%\%1
if not exist "%INCLUDE_DIR%" mkdir "%INCLUDE_DIR%"

for %%k in (%1\*.svg) do call :process_file %%k

goto :eof

:process_file

set BMP_FILE=%OUTPUT_DIR%\%~n1.bmp
set INCLUDE_FILE=%INCLUDE_DIR%\%~n1.h

rem SVG comes out black on white.  For RLE bitmaps, we want black as the background.
rem size should be an integrap multiple of the original size, +1

%MAGICK% convert -size 125x125 +antialias "MSVG:%1" -negate -compress none -type truecolor "BMP3:%BMP_FILE%"
%BMPER% "%BMP_FILE%" > "%INCLUDE_FILE%"
goto :eof
