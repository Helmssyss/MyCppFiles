#include <iostream>
#include <Windows.h>
#include <WinUser.h>

extern "C" {
	void detected() {
		enum KEYS {
			ctrl_key = 0x11,
			s_key = 0x53,
			ESC = 0x1B
		};
		while (true) {
			if (GetAsyncKeyState(ctrl_key) & 0x8000 && GetAsyncKeyState(s_key) & 0x8000) { //CTRL+S'ye basılırsa
				std::cout << "CTRL+S" << std::endl;
			}
			else if (GetAsyncKeyState(ESC) & 0x8000) { // ESC'ye basılırsa
				std::cout << "Cikis Yapildi" << std::endl;
				break;
			}
			Sleep(150);
		}
	}
}
