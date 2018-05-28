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
void DeleteRow(double a[][20], int m, int n, int indexRow)
{
   for(int i=indexRow;i<m-1;i++)
      for(int j=0;j<n;j++)
         a[i][j]=a[i+1][j];
   m--;
}

void DeleteColumn(int a[][20], int m, int n, int indexColumn)
{
   for(int i=0;i<m;i++)
      for(int j=indexColumn;j<n-1;j++)
         a[i][j]=a[i][j+1];
   n--;
}

