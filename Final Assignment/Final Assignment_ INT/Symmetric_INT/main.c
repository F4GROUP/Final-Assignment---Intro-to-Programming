#include <stdio.h>
#include <stdlib.h>

void enterIndex_INT(int matrix[30][30],int R, int C);
int symmetric_INT(int matrix[30][30], int R, int C);
void print_INT(int matrix[30][30],int R, int C);
int main()
{   int i,j,R,C;

    printf("Enter row: ");
    scanf("%d",&R);
    printf("Enter column: ");
    scanf("%d",&C);
    printf("Enter index of the matrix: \n");
    //create a matrix 0
    int matrix[30][30];

	enterIndex_INT(matrix,R,C);
	print_INT(matrix,R,C);
printf("\n\n\n symmetric?: %d", symmetric_INT(matrix,R,C));
return 0;
}
