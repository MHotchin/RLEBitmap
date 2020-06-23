@echo off
setlocal ENABLEDELAYEDEXPANSION

set INCLUDE_DIR=..\..\..\src\Weather
if not exist "%INCLUDE_DIR%" mkdir "%INCLUDE_DIR%"

rem	Location of BMP to code tool
set BMPER=..\bmper.exe
if exist %BMPER% goto got_bmper
echo Error: Unable to locate 'bmper.exe' from the RLE Bitmap Arduino library
goto :eof

:got_bmper

for %%i in (*.bmp) do call :generate_header %%i

goto :eof

:generate_header
echo Processing "%1"

%BMPER% "%1" > "%INCLUDE_DIR%\%~n1.h"
goto :eof