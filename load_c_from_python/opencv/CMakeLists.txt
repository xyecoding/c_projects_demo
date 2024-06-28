cmake_minimum_required(VERSION 3.0)
project(GenerateRandomImage)

find_package(OpenCV REQUIRED)

# add_executable(generate_random_image generate_random_image.cpp)
# 将add_executable替换为add_library，将生成动态库而不是可执行文件
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
# add_library(generate_random_image STATIC generate_random_image.cpp)
add_library(generate_random_image SHARED generate_random_image.cpp)
target_link_libraries(generate_random_image ${OpenCV_LIBS})
message(STATUS "OpenCV_LIBS: ${OpenCV_LIBS}")
