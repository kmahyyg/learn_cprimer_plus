@set path=%path%;D:\MinGW\bin
@"C:\Program Files\JetBrains\CLion 2017.2.2\bin\cmake\bin\cmake.exe" --build D:\CLionProject\CprimePlus\102\cmake-build-debug --target example102 -- -j 4
@"C:\Program Files\JetBrains\CLion 2017.2.2\bin\cmake\bin\cmake.exe" --build D:\CLionProject\CprimePlus\102\cmake-build-debug --target example205 -- -j 4
@"C:\Program Files\JetBrains\CLion 2017.2.2\bin\cmake\bin\cmake.exe" --build D:\CLionProject\CprimePlus\102\cmake-build-debug --target example201 -- -j 4
@pause
@exit 0