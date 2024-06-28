import ctypes

import cv2

# 加载共享库
# lib = ctypes.CDLL("./c/build/libcall_generate_random_image.so")
# lib = ctypes.CDLL("./c/build/libcall_generate_random_image.so")

from ctypes import cdll, Structure, POINTER, c_int

lib = cdll.LoadLibrary("./build/libgenerate_random_image.so")
# import numpy as np
lib.gen()
