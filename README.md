  Raylib template

Download MSYS2:  https://www.msys2.org/#installation

Download GCC and Raylib via MSYS2

GCC: 
  pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
	C:\msys64\ucrt64\bin

Raylib: 
  pacman -S mingw-w64-x86_64-raylib

To use add following include path to your c++ extension:
    c:\msys64\mingw64\include

 Targegt: Code.exe + --extensions-dir "Changed Extension Path" 
