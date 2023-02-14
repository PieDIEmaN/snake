#include <curses.h>
#include "Board.h"
#include "Snake.h"
#include "WrawS.h"
#include <time.h>


#define BOARD_DIIM 17 //������������,��� �������� ������ �����
#define BOARD_ROWS BOARD_DIIM 
#define BOARD_COLS BOARD_DIIM * 2.5
int main()
{
    srand(time(NULL));
    initscr();//����� ����������� �������� ��� ������
    refresh();//����� ������������ �������� ������������ ���(������ �� �����������
    //�� �����)
    noecho();//��������� ����������� �������� ��������

    Snake game = Snake(BOARD_ROWS, BOARD_COLS);

    while (!game.isover()) {

        game.pInpud();

        game.uState();

        game.redraw();
    }

    getch();//����� ������� ������
    endwin();//����� �� ������ �������, ����� ����� ��������� 

    return 0;
}