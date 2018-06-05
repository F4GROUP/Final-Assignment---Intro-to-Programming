#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<conio.h>
#include "A2Matrix.h"

const int X1=10;
const int Y1=10;
void gotoxy(int x,int y);
void process_1(int X1, int Y1);
void process_2(int X1, int Y1);

  int main()
{


    main_logo(X1,Y1);
    process_1(X1,Y1);
    return 0;
}

