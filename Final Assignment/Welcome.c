#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "A2Matrix.h"

void main_logo(int X1, int Y1)
{
    void gotoxy(int x,int y);
    //welcome logo
    system("cls");
    gotoxy(X1,Y1+1); printf("##     ##    ###    ######## ########  #### ##     ##");
    gotoxy(X1,Y1+2); printf("###   ###   ## ##      ##    ##     ##  ##   ##   ##");
    gotoxy(X1,Y1+3); printf("#### ####  ##   ##     ##    ##     ##  ##    ## ##");
    gotoxy(X1,Y1+4); printf("## ### ## ##     ##    ##    ########   ##     ###");
    gotoxy(X1,Y1+5); printf("##     ## #########    ##    ##   ##    ##    ## ##");
    gotoxy(X1,Y1+6); printf("##     ## ##     ##    ##    ##    ##   ##   ##   ##");
    gotoxy(X1,Y1+7); printf("##     ## ##     ##    ##    ##     ## #### ##     ## ");
    gotoxy(X1,Y1+8); printf("A project from Master C");
    gotoxy(X1,Y1+10);printf("Press any key to begin. ");
    getch();

}
