#include <stdio.h>
#include <stdlib.h>

//int delRCcoFactor_DOUBLE(double matrix[30][30], int R, int C, int dR, int dC, double temp[30][30]);
void delCol_DOUBLE(double matrix[30][30],int R, int C, int dC, double temp[30][30]);
void delRow_DOUBLE(double matrix[30][30],int R, int C, int dR, double temp[30][30]);
void enterIndex_DOUBLE(double matrix[30][30],int R, int C);

void print_DOUBLE(int matrix[30][30],int R, int C);
int main()
{


    double m[30][30];
    double temp[30][30];
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

    enterIndex_DOUBLE(m,R,C);

    //print the matrix

    print_DOUBLE(m,R,C);

    delCol_DOUBLE(m,R,C,dC,temp);
    print_DOUBLE(temp,R,C-1);


    delRow_DOUBLE(m,R,C,dR,temp);
    print_DOUBLE(temp,R-1,C);


  //  delRCcoFactor_DOUBLE(m,R,C,dR,dC,temp);
    print_DOUBLE(temp,R-1,C-1);


    return 0;
}
