#include<windows.h>
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<conio.h>

COORD coord={0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}




void process_1(int X1, int Y1)
{
    char select;
    void gotoxy(int x,int y);
    system("cls");
    gotoxy(X1,Y1+7);
    gotoxy(X1,Y1+1); printf("Select function");
    gotoxy(X1,Y1+2); printf("1. Matrix Processing");
    gotoxy(X1,Y1+3); printf("2. User Guide");
    gotoxy(X1,Y1+4); printf("3. About this Project");

    gotoxy(X1,Y1+6); printf("0. Return to main page");
    gotoxy(X1,Y1+8); printf("_");scanf("%c",&select);
    switch(select)
    {
        case '1': process_2(X1,Y1); break;
        case '2': userguide(); process_1(X1,Y1); break;
        case '3': about(); process_1(X1,Y1); break;
        case '0': main_logo(X1,Y1); process_1(X1,Y1); break;
        default: process_1(X1,Y1); break;
    }
}

void process_2(int X1, int Y1)
{
    void gotoxy(int x,int y);
    char select;
    system("cls");
    gotoxy(X1,Y1+7);
    gotoxy(X1,Y1+1); printf("Select type of matrices");
    gotoxy(X1,Y1+2); printf("1. Integer number (int)");
    gotoxy(X1,Y1+3); printf("2. Character (char)");
    gotoxy(X1,Y1+4); printf("3. Real number (double)");

    gotoxy(X1,Y1+6); printf("0. Return to main page");
    gotoxy(X1,Y1+8); printf("_");scanf("%c",&select);
    switch(select)
    {
        case '1': break;
        case '2': break;
        case '3': break;
        case '0': process_1(X1,Y1); break;
        default:  process_2(X1,Y1); break;

    }
}
