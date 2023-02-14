#pragma once
#include <curses.h>
#include "Board.h"
#include "WrawS.h"
#include <stdlib.h>
#include <time.h>
#include"Food.h"
class Snake//санина для самой змеи 
{
public:
	Snake(int height, int width) { //запуск полупокерского поля на этом классе 
		board = Board(height, width);
		board.create();
		game_over = false;
		srand(time(NULL));
		

	}

	void pInpud() {//chtype тип символов, с которыми 
		//работает ncurses (он включает в себя код символа, цвет и дополнительные атрибуты)
		chtype input = board.getInpute();
	
	}
	void uState() {
		int y, x;
		board.getEmCrdiinat(y, x);
		board.addd(Food(y, x));
		board.addd(WrawS(3, 3, '#'));
	}

	void redraw() {//отрисовка
		board.refresh();
	}

	bool isover() {//концовочка санины
		return game_over;
	}
private:
	Board board;
	
	bool game_over;
};

