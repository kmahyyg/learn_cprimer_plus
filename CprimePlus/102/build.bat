@set path=%path%;D:\MinGW\bin
@echo Please Input Your Target Under the Line
@echo ----------------------------------------
@set /p targetm=
@echo ----------------------------------------
@"C:\Users\Yyg\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\172.4343.16\bin\cmake\bin\cmake.exe" --build D:\CLionProject\CprimePlus\102\cmake-build-debug --target %tagertm% -- -j 4
@pause
@exit 0