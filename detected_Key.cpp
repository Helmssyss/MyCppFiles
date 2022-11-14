#include <iostream>
#include <Windows.h>
#include <WinUser.h>

int main() {
	enum KEYS{
		ctrl_key = 0x11, s_key = 0x53 //CTRL ve S tuşlarının adresleri
	};
	bool quit = false;
	while (!quit) {
		if (GetAsyncKeyState(ctrl_key)&0x8000 && GetAsyncKeyState(s_key)&0x8000) {
			std::cout << "basildi" << std::endl;
			quit = true;
		}
	}
}
