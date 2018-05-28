#include <stdio.h>
#include <stdlib.h>

int delRCcoFactor_INT(int matrix[30][30], int R, int C, int dR, int dC, int temp[30][30]);
void delCol_INT(int matrix[30][30],int R, int C, int dC, int temp[30][30]);
void delRow_INT(int matrix[30][30],int R, int C, int dR, int temp[30][30]);
void enterIndex_INT(int matrix[30][30],int R, int C);

void print_INT(int matrix[30][30],int R, int C);
int main()
{


    int m[30][30];
    int temp[30][30];
    int R, C,dR,dC,i,j;
    printf("\nEnter row: ");
    scanf("%d",&R);
    printf("\nEnter column: ");
    scanf("%d",&C);
    printf("\nEnter del row: ");
    scanf("%d",&dR);
    printf("\nEnter del column: ");
    scanf("%d",&dC);
    printf("Enter index of the matrix: \n");

    enterIndex_INT(m,R,C);

    //print the matrix

    print_INT(m,R,C);

    delCol_INT(m,R,C,dC,temp);
    print_INT(temp,R,C-1);


    delRow_INT(m,R,C,dR,temp);
    print_INT(temp,R-1,C);


    delRCcoFactor_INT(m,R,C,dR,dC,temp);
    print_INT(temp,R-1,C-1);


    return 0;
}
