#include <iostream>
#include <Windows.h>
#include <WinUser.h>
#include <thread>
#include <locale.h>

void detected() {
	enum KEYS {
		ctrl_key = 0x11, 
		s_key = 0x53,
		ESC = 0x1B
	};
	while (true) {
		if (GetAsyncKeyState(ctrl_key) & 0x8000 && GetAsyncKeyState(s_key) & 0x8000) {
			std::cout << "CTRL+S" << std::endl;
		}
		else if (GetAsyncKeyState(ESC) & 0x8000) {
			std::cout << "Çıkış Yapıldı" << std::endl;
			break;
		}
		Sleep(150);
	}
}

int main() {
	setlocale(LC_ALL, "Turkish");
	std::thread t1(detected);
	t1.join();
}
