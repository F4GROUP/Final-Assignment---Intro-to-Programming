#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<conio.h>

 const int X1=10;
 const int Y1=10;
 void gotoxy(int x,int y);
 void main_logo(int X1, int Y1);
 void selection(int X1,int Y1,char *select);


  int main()
{
    char select='0';
    while (select=='0')
    {

        main_logo(X1,Y1);
        selection(X1,Y1,&select);
        switch(select)
        {
            case '1': printf("1"); break;
            case '2': printf("2"); break;
            case '3': printf("3"); break;
            case '0': break;
        }
    }
    return 0;
}

