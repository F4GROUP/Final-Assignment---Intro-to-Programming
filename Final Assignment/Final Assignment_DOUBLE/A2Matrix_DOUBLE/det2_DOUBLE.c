#include "A2Matrix_DOUBLE.h"
//determinant of a 2x2 matrix

double det2_DOUBLE(double matrix[30][30], int R, int C)
{
    if (R!=C||R!=2||C!=2)
        {
            printf("\n\n det2_DOUBLE gets some higher order of matrix\n\n");
            return 0;

        }
    else
    {
        double det2=0;
        det2=matrix[1][1]*matrix[2][2]-matrix[2][1]*matrix[1][2];
        return det2;
    }
}
