#include <stdio.h>
#include <stdlib.h>
void enterIndex_DOUBLE(double matrix[30][30],int R, int C);
void print_DOUBLE(double matrix[30][30],int R, int C);


int main()
{

   int R1,R2,C1,C2;
   double m1[30][30],m2[30][30],m3[30][30];

    printf("Enter row 1: ");
    scanf("%d",&R1);
    printf("Enter column 1: ");
    scanf("%d",&C1);
    printf("Enter index of the matrix 1: \n");

    enterIndex_DOUBLE(m1,R1,C1);

    //print the matrix


    print_DOUBLE(m1,R1,C1);

    printf("Enter row 2: ");
    scanf("%d",&R2);
    printf("Enter column 2: ");
    scanf("%d",&C2);
    printf("Enter index of the matrix 2: \n");

    //printf
    enterIndex_DOUBLE(m2,R2,C2);

    //print the matrix
    print_DOUBLE(m2,R2,C2);

    return 0;
}
