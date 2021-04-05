del version
git symbolic-ref --short -q HEAD > version

rmdir "Project" /s /q
mkdir "Project/"
git clone https://github.com/OlenTV/my-trpo-core-cpp.git "Project/Core" --branch 1.0
git clone https://github.com/OlenTV/Magarov.git "Project/Magarov" --branch 1.0
move Source.cpp "./Project"

rmdir build /s /q
mkdir build
cd build

cmake -D CMAKE_BUILD_TYPE=Release ..
cmake --build .

move version "./build"

start ../build/Debug/MyProject.exe
exit