#pragma once
#include <curses.h>
#include "Board.h"
#include "WrawS.h"
#include <stdlib.h>
#include <time.h>
#include"Food.h"
class Snake//������ ��� ����� ���� 
{
public:
	Snake(int height, int width) { //������ �������������� ���� �� ���� ������ 
		board = Board(height, width);
		board.create();
		game_over = false;
		srand(time(NULL));
		

	}

	void pInpud() {//chtype ��� ��������, � �������� 
		//�������� ncurses (�� �������� � ���� ��� �������, ���� � �������������� ��������)
		chtype input = board.getInpute();
	
	}
	void uState() {
		int y, x;
		board.getEmCrdiinat(y, x);
		board.addd(Food(y, x));
		board.addd(WrawS(3, 3, '#'));
	}

	void redraw() {//���������
		board.refresh();
	}

	bool isover() {//���������� ������
		return game_over;
	}
private:
	Board board;
	
	bool game_over;
};

