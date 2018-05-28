//input matrix
void InputMatrix(double a[][20], int m, int n)
{
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
      {
         printf("A[%d][%d] = ", i, j);
         scanf("%d", &a[i][j]);
      }
}

//outputmatrix

void OutputMatrix(int a[][20], int m, int n)
{
   for(int i = 0; i < m; i++)
   {
      for(int j = 0; j < n; j++)
         printf("%d\t", a[i][j]);
      printf("\n");
   }
}
#include<windows.h>
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<conio.h>
//max in matrix
int MaxOfMatrix(double a[][20], int m, int n)
{
   int max = a[0][0];
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
         if(a[i][j]>max)
            max = a[i][j];
   return max;
}

//min of matrix
int MinOfMatrix(double a[][20], int m, int n)
{
   int min = a[0][0];
   for(int i = 0; i < m; i++)
      for(int j = 0; j < n; j++)
         if(a[i][j]<min)
            min = a[i][j];
   return min;
}

// delete


