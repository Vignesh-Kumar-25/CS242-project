@echo off
REM Project Gutenberg Crawler Script
REM Usage: crawler.bat [size_in_mb] [output_directory]
REM Example: crawler.bat 500 gutenberg_books
REM Example: crawler.bat 100 test_books

echo ============================================================
echo Project Gutenberg Book Crawler
echo ============================================================
echo.

REM Check if Python is installed
python --version >nul 2>&1
if errorlevel 1 (
    echo ERROR: Python is not installed or not in PATH
    echo Please install Python from https://www.python.org/
    pause
    exit /b 1
)

REM Check if Scrapy is installed
python -c "import scrapy" >nul 2>&1
if errorlevel 1 (
    echo Scrapy not found. Installing...
    pip install scrapy
    if errorlevel 1 (
        echo ERROR: Failed to install Scrapy
        pause
        exit /b 1
    )
)

REM Set default values
set SIZE=500
set OUTPUT=gutenberg_books

REM Override with command line arguments if provided
if not "%1"=="" set SIZE=%1
if not "%2"=="" set OUTPUT=%2

echo Configuration:
echo   Target Size: %SIZE% MB
echo   Output Directory: %OUTPUT%
echo   Delay: 1 second between requests
echo.
echo Starting crawler...
echo ============================================================
echo.


python gutenberg_configurable.py --size %SIZE% --output %OUTPUT%

if errorlevel 1 (
    echo.
    echo ============================================================
    echo ERROR: Crawler failed
    echo ============================================================
    pause
    exit /b 1
)

echo.
echo ============================================================
echo Crawling complete!
echo Books saved to: %OUTPUT%
echo ============================================================
pause