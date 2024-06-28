import cv2
import numpy as np
import ctypes
from ctypes import string_at


def sendToC():
    lib = ctypes.cdll.LoadLibrary("./test.so")
    arr = np.array([[1, 2, 3], [4, 5, 6], [7, 8, 9], [10.32, 11, 12]], dtype=np.float32)
    print(arr)
    rows, cols = arr.shape
    # 下面三行代码等价，都是指定数据类型
    arr = arr.ctypes.data_as(ctypes.POINTER(ctypes.c_float))
    # arr = arr.ctypes.data_as(ctypes.c_char_p)
    # lib.show_matrix.argtypes = [np.ctypeslib.ndpointer(ctypes.c_int),ctypes.c_int,ctypes.c_int]
    lib.show_matrix(arr, rows, cols)


sendToC()
