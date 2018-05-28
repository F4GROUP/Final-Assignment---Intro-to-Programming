#include <stdio.h>
#include <stdlib.h>
#define COLUMN 20
#define ROW 20
void DelColumn(int** matrix, int col);
void DelRow(int** matrix, int row);
void InputMatrix(double a[][20], int m, int n);

int matrix[ROW+1][COLUMN+1];
int matrixdel[ROW+1][COLUMN+1];
int i,j,R,C,dC,dR;

int main()
{
    printf("Enter row: ");
    scanf("%d",&R);
    printf("Enter column: ");
    scanf("%d",&C);
    printf("Enter index of the matrix: \n");
    //create a matrix 0

	for(i=1; i<R; i++)
	   for(j=1; j<C; j++)
	   {
   		  matrix[i][j]=' ';
   	   }

    //create a matrix

    for (i=1;i<=R;i++)
    {
        for (j=1;j<=C;j++)
        scanf("%d",&matrix[i][j]);

        printf("\n");
    }

    //print the matrix
    printf("\n\n\n");

    for (i=1;i<=R;i++)
    {
        for (j=1;j<=C;j++)
        printf("%d ",matrix[i][j]);

        printf("\n");
    }
    //delete row and column
     printf("\nEnter del row:  ");
     scanf("%d",&dR);
     printf("\nEnter del column:  ");
     scanf("%d",&dC);
   //delete row and column

for(i=1;i<R;i++)
      {for(j=dC;j<C-1;j++)
         matrix[i][j]=matrix[i][j+1];
   }


    //print the matrix
    printf("\n\n\n");

    for (i=1;i<=R;i++)
    {
        for (j=1;j<=C;j++)
        printf("%d ",matrix[i][j]);

        printf("\n");
    }


return 0;
}

