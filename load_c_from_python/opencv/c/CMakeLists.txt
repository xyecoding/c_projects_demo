cmake_minimum_required(VERSION 3.10)
project(CallGenerateRandomImage)

# 设置C标准
set(CMAKE_C_STANDARD 99)

# 添加可执行文件
# add_executable(call_generate_random_image main.c)
# set(CMAKE_POSITION_INDEPENDENT_CODE ON)
add_library(call_generate_random_image SHARED main.c)

# 链接动态库
find_library(GENERATE_RANDOM_IMAGE_LIB generate_random_image PATHS /home/Eric/temp_try/try_c_python/try/c++/build)
# 添加静态库的搜索路径
# link_directories(/home/Eric/temp_try/try_c_python/try/c++/build) # 替换为静态库的实际路径S

# 链接静态库
# target_link_libraries(call_generate_random_image "/home/Eric/temp_try/try_c_python/try/c++/build/libgenerate_random_image.a")
target_link_libraries(call_generate_random_image ${GENERATE_RANDOM_IMAGE_LIB})
