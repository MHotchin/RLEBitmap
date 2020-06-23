@echo off
setlocal ENABLEDELAYEDEXPANSION


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

rem
rem The full moon image is from NASA, and HAS NO COPYRIGHT.
rem https://www.nasa.gov/feature/goddard/2016/novembers-spectacular-supermoon
rem https://www.nasa.gov/sites/default/files/thumbnails/image/full-moon-2016-lro_0.jpg
rem 
set FILENAME=images\full-moon-2016-lro_0.jpg
set INCLUDE_DIR=..\..\..\src\Moon
if not exist "%INCLUDE_DIR%" mkdir "%INCLUDE_DIR%"

rem If first argument is given, then images that size will be created
if "%1." == "." goto :generate_all

call :generate_size %1
goto :eof

:generate_all
rem the list of sizes (width x height)
set SIZE_LIST=32 48 64 96 128 160 200 240 256 320

for %%i in (%SIZE_LIST%) do call :generate_size %%i

goto :eof

rem
rem Generate all the images for a particular size
rem 
:generate_size

echo Generating %1-pixel images.
set MASTER_INCLUDE=%INCLUDE_DIR%\MoonPhases_%1.h

if not exist "%INCLUDE_DIR%\%1" mkdir "%INCLUDE_DIR%\%1"
del /q "%INCLUDE_DIR%\%1\*.h" >nul: 2>&1 
del /q "%MASTER_INCLUDE%" >nul: 2>&1 

rem All the images for a particular size go into their own directory
if not exist "images\%1" mkdir images\%1
del /q "images\%1\*.bmp" >nul: 2>&1 

rem Create the moon image of the right size.
rem

%MAGICK% convert "%FILENAME%" -background black -fuzz 5%% -trim +repage -gamma 0.7 +antialias -filter box -resize %1x%1 -sharpen 0x1.0 -colorspace Gray -posterize 16  -black-threshold 2%% -compress none "images\%1\moon_%1.bmp"
%BMPER% "images\%1\moon_%1.bmp" > "%INCLUDE_DIR%\%1\moon_%1.h"
echo #include ^<Moon\%1\moon_%1.h^> > %MASTER_INCLUDE%

rem Create the masks for the moon phases.  There are 32 masks.
set SIZE=%1
set /A END=%SIZE%-1
set /A HALF_SIZE1=(%SIZE%-1)/2
set /A HALF_SIZE2=(%SIZE%-1)/2
set /A CENTER=(%SIZE%+1)/2

rem  Create a blank mask for the new moon.
set MASK_NUM=0
%MAGICK% convert -size %SIZE%x%SIZE% xc:black "images\%SIZE%\mask_%MASK_NUM%_%SIZE%.bmp"
%BMPER% "images\%SIZE%\mask_%MASK_NUM%_%SIZE%.bmp" > "%INCLUDE_DIR%\%SIZE%\mask_%MASK_NUM%_%SIZE%.h
echo #include ^<Moon\%1\mask_%MASK_NUM%_%SIZE%.h^> >> %MASTER_INCLUDE%

rem Masks for each quarter
set COS=490,462,416,354,278,191,98,0
for %%j in (%COS%) do set /A MASK_NUM=!MASK_NUM!+1&&call :generate_mask 500 %%j 1 0

set COS=98,191,278,354,416,462,490,500
for %%j in (%COS%) do set /A MASK_NUM=!MASK_NUM!+1&&call :generate_mask 500 %%j 1 1

set COS=490,462,416,354,278,191,98
for %%j in (%COS%) do set /A MASK_NUM=!MASK_NUM!+1&&call :generate_mask %%j 500 1 1

set COS=0,98,191,278,354,416,462,490
for %%j in (%COS%) do set /A MASK_NUM=!MASK_NUM!+1&&call :generate_mask %%j 500 0 1

goto :eof


:generate_mask

rem Generate a single mask
rem
rem figure out the radius of the elliptical arc that makes up the mask.  Adjust based on
rem the quarter we are drawing, since number of pixels on each side of center can be
rem different
rem
set /A radius1=(%SIZE%-1)*%1/500/2+1-2*%3
set /A radius2=(%SIZE%-1)*%2/500/2

%MAGICK% convert -size %SIZE%x%SIZE% xc:black -fill white -stroke white +antialias  -draw ^
"path '^
M %CENTER%,0 ^
A %radius1%,%HALF_SIZE1% 0 0,%3 %CENTER%,%END% ^
A %radius2%,%HALF_SIZE2% 0 0,%4 %CENTER%,0'" "images\%SIZE%\mask_!MASK_NUM!_%SIZE%.bmp"

%BMPER% "images\%SIZE%\mask_%MASK_NUM%_%SIZE%.bmp" > "%INCLUDE_DIR%\%SIZE%\mask_%MASK_NUM%_%SIZE%.h
echo #include ^<Moon\%SIZE%\mask_%MASK_NUM%_%SIZE%.h^> >> %MASTER_INCLUDE%

rem pause 
goto :eof

