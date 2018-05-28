#include <stdio.h>
#include <stdlib.h>
#define COLUMN 20
#define ROW 20


double matrix[ROW+1][COLUMN+1];
double matrixdel[ROW+1][COLUMN+1];
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
        scanf("%lf",&matrix[i][j]);

        printf("\n");
    }

    //print the matrix
    printf("\n\n\n");

    for (i=1;i<=R;i++)
    {
        for (j=1;j<=C;j++)
        printf("%10.3f ",matrix[i][j]);

        printf("\n");
    }
    //delete row and column
     printf("\nEnter del row:  ");
     scanf("%d",&dR);
     printf("\nEnter del column:  ");
     scanf("%d",&dC);

     /*for (j=1;j<=C;j++)
        matrix[dR][j]=0;

     for (i=1;i<=R;i++)
        matrix[i][dC]=0;*/



    for (int i=dR;i<R-1;i++)
    {
        for (int j=1;j<C;j++)
            matrix[i][j]=matrix[i+1][j];
        R--;
    }

    //print the matrix
    printf("\n\n\n");

    for (i=1;i<=R;i++)
    {
        for (j=1;j<=C;j++)
        printf("%10.3f ",matrix[i][j]);

        printf("\n");
    }

return 0;
}
