#include <windows.h>

int y = 0;
int x = 0;

int main() {

	while(true) {
		SetCursorPos( x, y );
		Sleep(240000);
		y++;
	}

	return 0;
}