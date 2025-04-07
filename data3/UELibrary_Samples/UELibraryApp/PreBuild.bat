REM %1 - the directory to copy from
REM %2 - the directory to copy to
REM %3 - the filenames of the engine binaries to copy
@echo off

REM Copy files from the .target file
if not exist "%~1\%~3.target" (
	echo ERROR: Build receipt "%~1\%~3.target" not found
	exit /b 1
)
for /f "tokens=1,2 delims=:,	 " %%d in ('type "%~1\%~3.target"') do (
	if "%%~d"=="Path" (
		if exist "%~1\%%~nxe" (
			echo Copying %~1\%%~nxe
			copy /y "%~1\%%~nxe" "%~2" 1>nul
		)
	)
)

REM Copy the import library as well, as it's not part of the .target file
echo Copying %~1\%~3.lib
copy /Y "%~1\%~3.lib" "%~2" 1>nul

REM Copy Python DLLs as well, as they're part of the .target file but not in the location we expect
echo Copying %~1\..\..\..\..\..\Engine\Binaries\ThirdParty\Python3\Win64\python*.dll
copy /Y "%~1\..\..\..\..\..\Engine\Binaries\ThirdParty\Python3\Win64\python*.dll" "%~2" 1>nul
