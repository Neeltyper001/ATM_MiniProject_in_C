#ifndef GOTOXY_H_INCLUDED
#define GOTOXY_H_INCLUDED
#include<windows.h>
void gotoxy(int x, int y)
 {
     COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
 }
#endif // GOTOXY_H_INCLUDED