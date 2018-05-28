#include <math.h>
#include "A2Matrix_INT.h"
//determinant of a 2x2 matrix
int det2_INT(int matrix[30][30], int R, int C)
{
    if (R!=C||R!=2||C!=2)
        {
            printf("\n\n det2_INT gets some higher order of matrix\n\n");
            return 0;

        }
    else
    {
        int det2=0;
        det2=matrix[1][1]*matrix[2][2]-matrix[2][1]*matrix[1][2];
        return det2;
    }
}

//determinant of m x m matrix
int det_INT (int matrix[30][30],int R, int C )
{
   int delRCcoFactor_INT(int matrix[30][30], int R, int C, int dR, int dC, int temp[30][30]);
   int det2_INT(int matrix[30][30], int R, int C);
   int det=0;
   int i,j;
   int temp[30][30];
   if (R!=C) {printf("\n\n not square matrix\n\n"); return 0; }
   else
   {
       if (R==1) return matrix[1][1];
       else if (R==2) return det2_INT(matrix,R,C);
       else
       {
            for (j=1;j<=C;j++)
                {
                    int temp[30][30];
                    delRCcoFactor_INT(matrix,R,C,1,j,temp);
                    det+=matrix[1][j]*(pow(-1,1+j))*det_INT(temp,R-1,C-1);
                }
       }
   }
     return det;
}



