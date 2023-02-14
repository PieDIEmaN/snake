#include <curses.h>
#include "Board.h"
#include "Snake.h"
#include "WrawS.h"
#include <time.h>


#define BOARD_DIIM 17 //предзагрузка,как констата только лучше
#define BOARD_ROWS BOARD_DIIM 
#define BOARD_COLS BOARD_DIIM * 2.5
int main()
{
    srand(time(NULL));
    initscr();//балда переводящая терминал под курсед
    refresh();//хуита отправляющая проверку изменившихся зон(писать не обязательно
    //но важно)
    noecho();//Выключаем отображение вводимых символов

    Snake game = Snake(BOARD_ROWS, BOARD_COLS);

    while (!game.isover()) {

        game.pInpud();

        game.uState();

        game.redraw();
    }

    getch();//ловит нажатия кнопок
    endwin();//выход из режима курседа, иначе хуйня сломается 

    return 0;
}