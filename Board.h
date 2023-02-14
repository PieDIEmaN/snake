#pragma once
#include <curses.h>
#include "WrawS.h"




class Board //создание класса под поле для игры 
{
public ://публичный режим где ппрограмма видит это везде 
    Board() {
        construct(0, 0);
    }
    Board(int height, int width) //под класс класса хуй его знает
    {
      
        construct(height, width);
        
	}   

    
    void create() {//санина для инициализации 

        clear();
        refresh();

    }

    void AddBorder() {//саннина для борьеро(квадрата сраного)
        box(board_win, 0, 0);//создает коробку по данным (борьер)

    }

    void addd(WrawS wrawS) {
        AddAt(wrawS.getX(), wrawS.getY(), wrawS.getIcone());
    }


    void AddAt(int y, int x, chtype ch)//chtype Указатель предоставляет доступ к описанию текущего терминала.
    {
        mvwaddch(board_win, y, x, ch);
    }

    chtype getInpute() 
    {
        return wgetch(board_win);
    }

    void getEmCrdiinat(int& y, int& x) {
        while ((mvwinch(board_win, y = rand() % height, x = rand() % width)) != ' ');
    }

    void clear() {//очищение 

        wclear(board_win);
        AddBorder();

    }

    void refresh() 
    {//санина для получиния инфы

        wrefresh(board_win);//хуйня для получения любых входных данных 
        //писать что бы создать блядинку        

    }


private:
    WINDOW* board_win;
    int height, width;

    void construct(int height ,int width) 
    {
        int xMax, yMax;
        getmaxyx(stdscr, yMax, xMax);
        this->height = height;
        this->width = width;
        board_win = newwin(height, width, (yMax / 2) - (height / 2), (xMax / 2) - (width / 2));
        //newwin - создает окно для всей этой пораши 

    }
    
};