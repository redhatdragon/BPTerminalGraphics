#include <iostream>
#include <string>

using namespace std;

#define T_BUFFER_WIDTH 40
#define T_BUFFER_HEIGHT 20
char terminalCharBuffer[T_BUFFER_WIDTH*T_BUFFER_HEIGHT];

void terminalClear() {
	system("cls");  //Need to ifdef for linux.
	for (unsigned int i = 0; i < T_BUFFER_HEIGHT; i++) {
		for (unsigned int j = 0; j < T_BUFFER_WIDTH; j++) {
			terminalCharBuffer[j + i * T_BUFFER_WIDTH] = 0;
		}
	}
}
void terminalSetup() {
	system("echo off");
	terminalClear();
}
void terminalDisplay() {
	/*for (unsigned int i = 0; i < T_BUFFER_HEIGHT; i++) {
		for (unsigned int j = 0; j < T_BUFFER_WIDTH; j++) {
			cout << terminalCharBuffer[j + i * T_BUFFER_WIDTH];
		} cout << endl;
	}*/
	/*for (unsigned int i = 0; i < T_BUFFER_HEIGHT; i++) {
		//char line[T_BUFFER_WIDTH];
		string line;
		for (unsigned int j = 0; j < T_BUFFER_WIDTH; j++) {
			line += terminalCharBuffer[j + i * T_BUFFER_WIDTH];
		}
		cout << line << endl;
	}*/
	string line;
	for (unsigned int i = 0; i < T_BUFFER_HEIGHT; i++) {
		//char line[T_BUFFER_WIDTH];
		for (unsigned int j = 0; j < T_BUFFER_WIDTH; j++) {
			line += terminalCharBuffer[j + i * T_BUFFER_WIDTH];
		}
		line += "\r\n";
	}
	cout << line;
}
void terminalPutChar(int x, int y, char c) {
	if (x >= T_BUFFER_WIDTH || x<0 || y >= T_BUFFER_HEIGHT || y<0) return;
	terminalCharBuffer[x + y * T_BUFFER_WIDTH] = c;
}
void terminalRect(int x, int y, int w, int h, char c) {
	for (uint32_t i = 0; i < h; i++) {
		for (uint32_t j = 0; j < w; j++) {
			terminalPutChar(j+x, i+y, c);
		}
	}

	/*for (unsigned int i = y - h / 2; i < y + h / 2; i++) {
		for (unsigned int j = x - w / 2; j < x + w / 2; j++) {
			terminalPutChar(j, i, c);
		}
	}*/
}