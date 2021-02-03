#include<iostream>
#include<string>
#include <windows.h>


class GameRenderer {
	static void resetConsoleCursor() {
		static HANDLE h = NULL;
		if (!h)
			h = GetStdHandle(STD_OUTPUT_HANDLE);
		COORD c = { 0, 0 };
		SetConsoleCursorPosition(h, c);
	}

public:
	static void display(const std::string& output) {
		resetConsoleCursor();
		std::cout << output;
	}
};