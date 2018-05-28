//max in matrix
double MaxOfMatrix(double a[30][30], int R, int C)
{
   double max = a[1][1];
   for(int i = 1; i <= R; i++)
      for(int j = 1; j <= C; j++)
         if(a[i][j]>max)
            max = a[i][j];
   return max;
}

//min of matrix
double MinOfMatrix(double a[30][30], int R, int C)
{
   double min = a[1][1];
   for(int i = 1; i <= R; i++)
      for(int j = 1; j <= C; j++)
         if(a[i][j]<min)
            min = a[i][j];
   return min;
}
