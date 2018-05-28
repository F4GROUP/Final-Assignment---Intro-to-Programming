#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
void selection(int X1,int Y1,char *select)
{
    void gotoxy(int x,int y);
    gotoxy(X1,Y1+7);
    gotoxy(X1,Y1+1); printf("Select function");
    gotoxy(X1,Y1+2); printf("1. Matrix Processing");
    gotoxy(X1,Y1+3); printf("2. User Guide");
    gotoxy(X1,Y1+4); printf("3. About this Project");

    gotoxy(X1,Y1+6); printf("0. Return to main page");
    gotoxy(X1,Y1+8); printf("_");scanf("%c",&select);
}
