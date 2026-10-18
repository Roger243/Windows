# Windows 11 Cleaner Script
# Safer edition: does not delete Windows Prefetch.

Write-Host "=== Starting Windows 11 Cleanup ===" -ForegroundColor Cyan

function Clear-FolderContents {
    param([Parameter(Mandatory=$true)][string]$Path)

    if (-not (Test-Path -LiteralPath $Path)) {
        Write-Host "Skipping missing folder: $Path" -ForegroundColor DarkYellow
        return
    }

    Write-Host "Cleaning: $Path" -ForegroundColor Yellow
    Get-ChildItem -LiteralPath $Path -Force -ErrorAction SilentlyContinue |
        Remove-Item -Recurse -Force -ErrorAction SilentlyContinue
}

Clear-FolderContents -Path $env:TEMP
Clear-FolderContents -Path "$env:SystemRoot\Temp"

Write-Host "Emptying Recycle Bin..." -ForegroundColor Yellow
Clear-RecycleBin -Force -ErrorAction SilentlyContinue

Write-Host "Prefetch was left untouched for Windows to manage." -ForegroundColor DarkGray
Write-Host "=== Cleanup completed ===" -ForegroundColor Green
