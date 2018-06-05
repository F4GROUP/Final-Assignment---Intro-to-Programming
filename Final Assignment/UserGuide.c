#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include "A2Matrix.h"


void userguide(void)
{
    system("cls");
    printf(">> USER GUIDE <<\n\n");
    printf("In the first screen <MATRIX>, press any key to continue. \n\n");

    printf("In Main Menu: \n\n\n");


    printf("I.   Press number 1 and Enter to select function that you need. \n\n");

    printf("Then, select the matrix operation: \n");
    printf("  1. Check symmetry \n");
    printf("  2. Find transpose matrix \n");
    printf("  3. Find determinant \n");
    printf("  4. Find product \n");
    printf("  5. Check identicality \n");
    printf("  6. Check contain \n");
    printf("  7. Find relation factor \n");
    printf("  8. Find Max of matrix \n");
    printf("  9. Find Min of matrix \n\n\n");


    printf("II.  Press number 2 and Enter to read User Guide that you are reading :') \n");
    printf("     Then, press any key to turn back the main menu. \n\n\n");


    printf("III. Press number 3 and Enter to read About Program \n");
    printf("     Then, press any key to turn back the main menu. ");

    getch();
}

void note1_CHAR(void)
{
    system("cls");
    printf(">> NOTE <<\n\n");
    printf("-------------------------\n");
    printf("Input matrix index as characters.\n");
    printf("The program processes data as integers, which are in ASCII standard\n");
    printf("The output will be as characters. However, if the result is out of ASCII standard, it will be printed as integers\n");
    printf("-------------------------\n\n\n");
}

void note1_INT(void)
{
    system("cls");
    printf(">> NOTE <<\n\n");
    printf("-------------------------\n");
    printf("This function will calculate matrices in integer type only\n");

    printf("-------------------------\n\n\n");
}

void note1_DOUBLE(void)
{
    system("cls");
    printf(">> NOTE <<\n\n");
    printf("-------------------------\n");
    printf("This function will calculate matrices in double type only\n");

    printf("-------------------------\n\n\n");
}
