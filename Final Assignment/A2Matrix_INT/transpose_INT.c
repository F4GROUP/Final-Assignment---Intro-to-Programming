#include <stdio.h>
#include <stdlib.h>
#include "A2Matrix_INT.h"
void transpose_INT(int matrix[30][30], int R, int C, int transpose[30][30])
{
    int i,j;
    for (i=1;i<=R;i++)
    for (j=1;j<=C;j++)
        {
            transpose[j][i]=matrix[i][j];
        }

}
