
#include "A2Matrix_DOUBLE.h"
void print_DOUBLE(double matrix[30][30],int R, int C)
{
    int i,j;
    printf("\n\n");
    for (i=1;i<=R;i++)

    {
        for (j=1;j<=C;j++)
        printf("%10.10f\t\t",matrix[i][j]);

        printf("\n\n");
    }

    printf("\n\n");
}


void enterIndex_DOUBLE(double matrix[30][30],int R, int C)

{
    //initialize the matrix
    int i,j;
	for(i=0; i<=R; i++)
	   for(j=0; j<=C; j++)
	   {
   		  matrix[i][j]=' ';
   	   }
    //enter index of matrix
    printf("\n\n");
    for (i=1;i<=R;i++)

    {
        for (j=1;j<=C;j++)
        {
            printf("Enter a[%d][%d]:  ",i,j);
            scanf("%lf",&matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}

void enterRC_DOUBLE(int matrix[30][30],int *R, int *C)
{
    int r,c;
    printf("Enter row of %s: ",matrix[0][0]);

    printf("Enter column of %s: ",matrix[0][0]);
    scanf("%d",&c);

    *R=r;
    *C=c;

}