@echo off

pushd vendor
call git clone --no-tags --depth 1 https://github.com/raysan5/raylib.git repo-raylib || exit /b 1
xcopy /S /y repo-raylib\src raylib\
rmdir repo-raylib\ /q /s
popd
