//determinant of m x m matrix
#include <math.h>
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
    //printf("%d\t", det);
   return det;
}



