#include <stdio.h>
#include <stdlib.h>
#include "A2Matrix_DOUBLE.h"
void transpose_DOUBLE(double matrix[30][30], int R, int C, double transpose[30][30])
{
    int i,j;
    for (i=1;i<=R;i++)
    for (j=1;j<=C;j++)
        {
            transpose[j][i]=matrix[i][j];
        }

}
