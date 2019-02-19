@echo off
set /p a=branch name?
git pull origin %a%
echo success.
pause