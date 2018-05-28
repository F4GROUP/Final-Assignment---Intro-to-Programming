#include <stdio.h>
#include <stdlib.h>

#define COLUMN 20
#define ROW 20


double matrix1[ROW+1][COLUMN+1];
double matrix2[ROW+1][COLUMN+1];
int i,j,R1,R2,C1,C2,check;

int main()
{
    printf("Enter row 1: ");
    scanf("%d",&R1);
    printf("Enter column 1: ");
    scanf("%d",&C1);
    printf("Enter index of the matrix 1: \n");
    //create a matrix 0 1

	for(i=0; i<R1; i++)
	   for(j=0; j<C1; j++)
	   {
   		  matrix1[i][j]=' ';
   	   }
    //create a matrix
    for (j=1;j<=C1;j++)
    {
        for (i=1;i<=R1;i++)
        scanf("%lf",&matrix1[i][j]);

        printf("\n");
    }

    //print the matrix
    printf("\n\n\n");
    for (j=1;j<=C1;j++)
    {
        for (i=1;i<=R1;i++)
        printf("%10.3f ",matrix1[i][j]);

        printf("\n");
    }

    printf("\n\n");

    printf("Enter row 2: ");
    scanf("%d",&R2);
    printf("Enter column 2: ");
    scanf("%d",&C2);
    printf("Enter index of the matrix 2: \n");
    //create a matrix 0 1

	for(i=0; i<R2; i++)
	   for(j=0; j<C2; j++)
	   {
   		  matrix2[i][j]=' ';
   	   }
    //create a matrix
    for (j=1;j<=C2;j++)
    {
        for (i=1;i<=R2;i++)
        scanf("%lf",&matrix2[i][j]);

        printf("\n");
    }

    //print the matrix
    printf("\n\n\n");
    for (j=1;j<=C2;j++)
    {
        for (i=1;i<=R2;i++)

        printf("%10.3f ",matrix2[i][j]);

        printf("\n");
    }

    //compare 2 matrices

     for (i=1,j=1;i<=R2,j<=C2;i++,j++)
    {
        if ( matrix1[i][j]==matrix2[i][j])
            check=1;
         else
            { check=0;
                break;

            }
    }
  if (check==1 && R1==R2&&C1==C2)  printf("The same");
  else printf("Not");

    return 0;
}
