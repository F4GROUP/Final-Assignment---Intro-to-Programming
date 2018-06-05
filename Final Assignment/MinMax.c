#include "A2Matrix.h"
//max of matrix
int MaxOfMatrix_INT(int a[30][30], int R, int C)
{
   int max = a[1][1];
   for(int i = 1; i <= R; i++)
      for(int j = 1; j <= C; j++)
         if(a[i][j]>max)
            max = a[i][j];
   return max;
}

//min of matrix
int MinOfMatrix_INT(int a[30][30], int R, int C)
{
   int min = a[1][1];
   for(int i = 1; i <= R; i++)
      for(int j = 1; j <= C; j++)
         if(a[i][j]<min)
            min = a[i][j];
   return min;
}

//max of matrix
double MaxOfMatrix_DOUBLE(double a[30][30], int R, int C)
{
   double max = a[1][1];
   for(int i = 1; i <= R; i++)
      for(int j = 1; j <= C; j++)
         if(a[i][j]>max)
            max = a[i][j];
   return max;
}

//min of matrix
double MinOfMatrix_DOUBLE(double a[30][30], int R, int C)
{
   double min = a[1][1];
   for(int i = 1; i <= R; i++)
      for(int j = 1; j <= C; j++)
         if(a[i][j]<min)
            min = a[i][j];
   return min;
}
