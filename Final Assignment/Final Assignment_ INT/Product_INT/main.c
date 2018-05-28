#include <stdio.h>
#include <stdlib.h>
int product_INT(int matrix1[30][30], int matrix2[30][30], int R1, int C1, int R2, int C2, int matrix3[30][30]);
void print_INT(int matrix[30][30],int R, int C);
void enterIndex_INT(int matrix[30][30],int R, int C);
int main()
{

   int R1=0,R2=0,C1=0,C2=0;
   int m1[30][30],m2[30][30],m3[30][30];
    printf("Enter row 1: ");
    scanf("%d",&R1);
    printf("Enter column 1: ");
    scanf("%d",&C1);
    printf("Enter index of the matrix 1: \n");

    enterIndex_INT(m1,R1,C1);
    print_INT(m1,R1,C1);

    printf("\n\n");
    printf("Enter row 2: ");
    scanf("%d",&R2);
    printf("Enter column 2: ");
    scanf("%d",&C2);
    printf("Enter index of the matrix 2: \n");

    enterIndex_INT(m2,R2,C2);
    print_INT(m2,R2,C2);




    //print the matrix
    printf("\n\n\n can be product?: %d\n\n",product_INT(m1,m2,R1,C1,R2,C2,m3));
    product_INT(m1,m2,R1,C1,R2,C2,m3);



    print_INT(m3,R1,C2);
    return 0;
}
