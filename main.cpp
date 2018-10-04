#include "BPTerminalGraphics.h"
#include <Windows.h>

int main() {
	terminalSetup();
	//Beep(523, 200);  // 523 hertz (C5) for 500 milliseconds
	//Beep(587, 200);
	//Beep(659, 200);
	//Beep(698, 200);
	//Beep(784, 200);

	/*Beep(329, 300); //E
	Beep(493, 300); //B
	Beep(698, 300); //F^
	Beep(659, 600); //E^

	Beep(783, 300); //G^
	Beep(698, 300); //F^
	Beep(659, 600); //E^

	Beep(329, 100);
	Beep(493, 300);
	Beep(698, 300);
	Beep(659, 600);

	Beep(392, 250);
	Beep(440, 200);
	Beep(587, 300);

	Beep(349, 250);
	Beep(587, 500);

	Beep(329, 300);
	Beep(493, 300);
	Beep(698, 300);
	Beep(659, 600);

	Beep(783, 300);
	Beep(698, 300);
	Beep(659, 600);

	Beep(329, 100);
	Beep(493, 300);
	Beep(698, 300);
	Beep(659, 600);

	Beep(392, 250);
	Beep(440, 200);
	Beep(587, 300);

	Beep(349, 250);
	Beep(587, 400);*/

	int x = 10;
	while (true) {
		Sleep(1000/15);
		terminalClear();
		terminalRect(x, 10, 6, 6, 'O');
		terminalDisplay();
		x++;
	}
	return 0;
}