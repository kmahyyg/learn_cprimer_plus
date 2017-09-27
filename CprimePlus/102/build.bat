@set path=%path%;D:\MinGW\bin
@echo Please Input Your Target Under the Line
@echo ----------------------------------------
@set /p targetm=
@echo ----------------------------------------
@"C:\Program Files\JetBrains\CLion 2017.2.2\bin\cmake\bin\cmake.exe" --build D:\CLionProject\CprimePlus\102\cmake-build-debug --target %tagertm% -- -j 4
@pause
@exit 0