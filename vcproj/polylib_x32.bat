rem 64bit <=６４ビットは、正規表現のPOSIXライブラリが３２BIT版のDLLしかないのでやらない。
rem set MPIDIR=C:\Program Files\MPICH2

rem 32bit
set MPIDIR=C:\Program Files (x86)\MPICH2
set PATH=%MPIDIR%\bin;%PATH%

set TP_ROOT=Z:\projects\fxgen\github\Polylib_kawanabe\ext\TextParser
set RG_ROOT=Z:\projects\fxgen\github\Polylib_kawanabe\ext\regex-2.7-bin

polylib.sln

rem mpich2 のデーモン実行
"%MPIDIR%\bin\smpd.exe" -d 0
pause;