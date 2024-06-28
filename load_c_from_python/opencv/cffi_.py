from cffi import FFI

ffi = FFI()

# 定义函数原型
ffi.cdef(
    """
    int main();
"""
)

# 加载动态库
lib = ffi.dlopen(
    "/home/Eric/temp_try/try_c_python/try/c++/build/libgenerate_random_image.so"
)
