@echo off
REM Usage: indexbuilder.bat <input_data_dir> [output_index_dir]
REM Example: indexbuilder.bat data/gutenberg_raw
REM Example: indexbuilder.bat data/gutenberg_raw custom_index

setlocal enabledelayedexpansion

REM Get the directory where this script is located
set PROJECT_ROOT=%~dp0
REM Remove trailing backslash
set PROJECT_ROOT=%PROJECT_ROOT:~0,-1%

REM Parse arguments
set INPUT_DIR=%1
set INDEX_DIR=%2

REM Set default index directory if not provided
if "%INDEX_DIR%"=="" set INDEX_DIR=index

REM Check if input directory was provided
if "%INPUT_DIR%"=="" (
    echo Error: Missing input directory.
    echo Usage: indexbuilder.bat ^<input_data_dir^> [output_index_dir]
    echo Example: indexbuilder.bat data/gutenberg_raw
    pause
    exit /b 1
)

echo ============================================================
echo Initializing Index Build
echo ============================================================
echo Source: %INPUT_DIR%
echo Target: %INDEX_DIR%
echo.

REM Set PyLucene path (Windows uses .pyd files, not .so)
set LUCENE_LIB=%PROJECT_ROOT%\reddit-ir-partA\pylucene-9.6.0\build\lib.win-amd64-cpython-312

REM Check if PyLucene build exists
if not exist "%LUCENE_LIB%" (
    echo ERROR: PyLucene build not found at:
    echo %LUCENE_LIB%
    echo.
    echo Please ensure PyLucene is built for Windows or use WSL.
    pause
    exit /b 1
)

REM Handle JAVA_HOME
if "%JAVA_HOME%"=="" (
    echo WARNING: JAVA_HOME not set. Attempting to find Java...
    
    REM Try common Java installation paths
    if exist "C:\Program Files\Eclipse Adoptium\jdk-11.0.30.7-hotspot" (
        set JAVA_HOME=C:\Program Files\Eclipse Adoptium\jdk-11.0.30.7-hotspot
        echo Found Java at: !JAVA_HOME!
    ) else if exist "C:\Program Files\Java\jdk-11*" (
        for /d %%i in ("C:\Program Files\Java\jdk-11*") do set JAVA_HOME=%%i
        echo Found Java at: !JAVA_HOME!
    ) else (
        echo ERROR: JAVA_HOME not set and Java not found in common locations.
        echo Please set JAVA_HOME environment variable or install JDK 11+
        pause
        exit /b 1
    )
)

REM Set JCC_JDK for PyLucene
set JCC_JDK=%JAVA_HOME%

REM Add PyLucene to Python path
set PYTHONPATH=%LUCENE_LIB%;%PYTHONPATH%

REM Add Java bin to PATH
set PATH=%JAVA_HOME%\bin;%PATH%

echo Configuration:
echo   Python Path: %LUCENE_LIB%
echo   Java Home: %JAVA_HOME%
echo.
echo Starting indexer...
echo ============================================================
echo.

REM Run the indexer
python "%PROJECT_ROOT%\indexer.py" --data_dir "%INPUT_DIR%" --index_dir "%INDEX_DIR%"

if errorlevel 1 (
    echo.
    echo ============================================================
    echo ERROR: Indexing failed
    echo ============================================================
    pause
    exit /b 1
)

echo.
echo ============================================================
echo SUCCESS: Index built in %INDEX_DIR%
echo ============================================================
pause