import ctypes
import threading
cpp = ctypes.CDLL(r"C:\Users\Helmsys\Desktop\py_and_cpp\test.dll",winmode=0)

threading.Thread(target=cpp.detected).start()