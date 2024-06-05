cmake_minimum_required(VERSION 3.10)
project(MyGame)

set(CMAKE_CXX_STANDARD 17)

# 添加Raylib
find_package(raylib REQUIRED)

# 源文件
file(GLOB_RECURSE SOURCES "src/*.cpp" "src/skills/*.cpp")

add_executable(MyGame ${SOURCES})

# 链接Raylib
target_link_libraries(MyGame raylib)
