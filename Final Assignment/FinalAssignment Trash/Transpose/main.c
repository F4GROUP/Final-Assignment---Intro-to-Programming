#include <stdio.h>
#include <stdlib.h>

#define COLUMN 20
#define ROW 20


double matrix[ROW+1][COLUMN+1];
double transpose[ROW+1][COLUMN+1];
int i,j,R,C;

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
    for(i=1; i<C; i++)
    for(j=1; j<R; j++)
	   {
   		  transpose[j][i]=' ';
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
    //transpose
      printf("\n\n\n");
    for (i=1;i<=R;i++)
    for (j=1;j<=C;j++)
    {

        transpose[j][i]=matrix[i][j];
    }
     //print the matrix transpose
    printf("\n\n\n");

    for (i=1;i<=C;i++)
    {
        for (j=1;j<=R;j++)
        printf("%10.3f ",transpose[i][j]);

        printf("\n");

    }

  printf("\n\n######## ##     ##    ###    ##     ## ########  ##       ########\n##        ##   ##    ## ##   ###   ### ##     ## ##       ##\n##         ## ##    ##   ##  #### #### ##     ## ##       ##\n######      ###    ##     ## ## ### ## ########  ##       ######\n##         ## ##   ######### ##     ## ##        ##       ##\n##        ##   ##  ##     ## ##     ## ##        ##       ##\n######## ##     ## ##     ## ##     ## ##        ######## ########");
    return 0;
}
