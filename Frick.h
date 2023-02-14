#pragma once

#include <curses.h>
#include "WrawS.h"
class Frick: public WrawS
{
public:
	Frick(int y, int x) {
		
		this->x = x;
		this->y = y;
		this->icon = 'A';
		
	}
};

