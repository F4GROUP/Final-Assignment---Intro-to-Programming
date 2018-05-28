#include<stdio.h>
#include "A2Matrix_INT.h"
void enterIndex_INT(int matrix[30][30],int R, int C)
{
    //initialize the matrix
    int i,j;
    fflush(stdin);
    //enter index of matrix
    printf("\n\n");
    for (i=1;i<=R;i++)
    {
        for (j=1;j<=C;j++)
        {
        {
            printf("Enter a[%d][%d]:  ",i,j);
            scanf("%c",&matrix[i][j]);
            fflush(stdin);
        }
        printf("\n");
    }
    printf("\n\n");
}

void enterRC_INT(int matrix[30][30],int *R, int *C)
{
    int r,c;
    printf("Enter row of %s: ",matrix[0][0]);
    printf("Enter column of %s: ",matrix[0][0]);
    scanf("%d",&c);
    *R=r;
    *C=c;
}

void print_INT(int matrix[30][30],int R, int C)
{
    int i,j;
    printf("\n\n");
    for (i=1;i<=R;i++)
    {
        for (j=1;j<=C;j++)
        printf("%c\t",matrix[i][j]);
        printf("\n");
    }
    printf("\n\n");
}

