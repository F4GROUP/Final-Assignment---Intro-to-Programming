#include <stdio.h>
#include <stdlib.h>



void transpose_INT(int matrix[30][30], int ROW, int COL, int transpose[30][30]);
void enterIndex_INT(int matrix[30][30],int R, int C);
void print_INT(int matrix[30][30],int R, int C);


int main()
{   int m[30][30], t[30][30],R,C;

    printf("Enter row: ");
    scanf("%d",&R);
    printf("Enter column: ");
    scanf("%d",&C);
    printf("Enter index of the matrix: \n");

    enterIndex_INT(m,R,C);
    print_INT(m,R,C);


    transpose_INT(m,R,C,t);
     //print the matrix transpose
    printf("\n\n\n");

    print_INT(t,C,R);


  printf("\n\n######## ##     ##    ###    ##     ## ########  ##       ########\n##        ##   ##    ## ##   ###   ### ##     ## ##       ##\n##         ## ##    ##   ##  #### #### ##     ## ##       ##\n######      ###    ##     ## ## ### ## ########  ##       ######\n##         ## ##   ######### ##     ## ##        ##       ##\n##        ##   ##  ##     ## ##     ## ##        ##       ##\n######## ##     ## ##     ## ##     ## ##        ######## ########");
    return 0;
}
