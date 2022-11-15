import ctypes
cpp = ctypes.CDLL(r"C:\Users\Helmsys\Desktop\py_and_cpp\test.dll",winmode=0)

cpp.detected()
