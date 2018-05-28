#include <stdio.h>
#include <stdlib.h>
#include "A2Matrix_INT.h"


int det_INT (int matrix[30][30],int R, int C );
void enterIndex_INT(int matrix[30][30],int R, int C);
void print_INT(int matrix[30][30],int R, int C);

int main()
{
    int m[30][30];
    int R, C;
    printf("Enter row: ");
    scanf("%d",&R);
    printf("Enter column: ");
    scanf("%d",&C);
    printf("Enter index of the matrix: \n");
    enterIndex_INT(m,R,C);
    //print the matrix
    print_INT(m,R,C);
    det_INT(m,R,C);
    printf(" \n\n Determinant of this matrix is: %d", det_INT(m,R,C));
    printf(" \n\n Determinant of this matrix is: %c", det_INT(m,R,C));

    return 0;
}
