cmake_minimum_required(VERSION 3.10)

# 项目信息
project(MyGame)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 包含目录
include_directories(${CMAKE_SOURCE_DIR}/src)
include_directories(${CMAKE_SOURCE_DIR}/src/skills)

# 添加源文件
file(GLOB_RECURSE SOURCES "src/*.cpp")

# 添加可执行文件
add_executable(MyGame ${SOURCES})

# 链接库
find_package(raylib REQUIRED)
target_link_libraries(MyGame raylib)
