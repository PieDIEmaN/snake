#pragma once
#include <curses.h>
#include "Board.h"



class WrawS
{
public:
	WrawS() {
		y = x = 0;
		icon = ' ';

	}

	WrawS(int y, int x, chtype ch) {

		this->y = y;
		this->x = x;
		this->icon =  ch;

	}
	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	chtype getIcone() {
		return icon;
	}


	int y, x;

	chtype icon;
};

