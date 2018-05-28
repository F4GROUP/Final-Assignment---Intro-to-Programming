
#include "A2Matrix_DOUBLE.h"
void print_DOUBLE(double matrix[30][30],int R, int C)
{
    int i,j;
    printf("\n\n");
    for (i=1;i<=R;i++)

    {
        for (j=1;j<=C;j++)
        printf("%10.10f\t\t",matrix[i][j]);

        printf("\n\n");
    }

    printf("\n\n");
}
