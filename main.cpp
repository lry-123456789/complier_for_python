#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
int main(int agrc,char* agrv[])
{
  SetConsoleTitle(TEXT("complier for python based on pyinstaller.exe"));
  printf("usage: pyinstaller [-h] [-v] [-D] [-F] [--specpath DIR] [-n NAME] [--add-data <SRC;DEST or SRC:DEST>]\n
                   [--add-binary <SRC;DEST or SRC:DEST>] [-p DIR] [--hidden-import MODULENAME]\n
                   [--additional-hooks-dir HOOKSPATH] [--runtime-hook RUNTIME_HOOKS] [--exclude-module EXCLUDES]\n
                   [--key KEY] [-d {all,imports,bootloader,noarchive}] [-s] [--noupx] [--upx-exclude FILE] [-c] [-w]\n
                   [-i <FILE.ico or FILE.exe,ID or FILE.icns or "NONE">] [--version-file FILE] [-m <FILE or XML>]\n
                   [-r RESOURCE] [--uac-admin] [--uac-uiaccess] [--win-private-assemblies] [--win-no-prefer-redirects]\n
                   [--osx-bundle-identifier BUNDLE_IDENTIFIER] [--runtime-tmpdir PATH] [--bootloader-ignore-signals]\n
                   [--distpath DIR] [--workpath WORKPATH] [-y] [--upx-dir UPX_DIR] [-a] [--clean] [--log-level LEVEL]\n
                   scriptname [scriptname ...]\n");
  return 0;
}
