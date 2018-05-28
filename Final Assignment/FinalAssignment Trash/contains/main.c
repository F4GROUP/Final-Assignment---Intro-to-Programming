#include <stdio.h>
#include <stdlib.h>

#define COLUMN 20
#define ROW 20


double matrix1[ROW+1][COLUMN+1];
double matrix2[ROW+1][COLUMN+1];
int i,j,R1,R2,C1,C2,r,c,check;

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

    for (i=1;i<=R1;i++)
    {
        for (j=1;j<=C1;j++)
        scanf("%lf",&matrix1[i][j]);

        printf("\n");
    }

    //print the matrix
    printf("\n\n\n");

    for (i=1;i<=R1;i++)
    {
        for (j=1;j<=C1;j++)
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

    for (i=1;i<=R2;i++)
    {
        for (j=1;j<=C2;j++)
        scanf("%lf",&matrix2[i][j]);

        printf("\n");
    }

    //print the matrix
    printf("\n\n\n");

    for (i=1;i<=R2;i++)
    {
       for (j=1;j<=C2;j++)
        printf("%10.3f ",matrix2[i][j]);

        printf("\n");
    }

    switch(R1+C1-R2-C2>=0)
    {
      case 1:
          {//check if 1 contains 2
              break;      }
      case 0:
          { //check if 2 contains 1

              break;}
    }



for(i=1;i<=1+R1-R2;i++)
    for(j=1;j<=1+C1-C2;j++)
    {
        if (matrix1[i][j]==matrix2[1][1])
        {   check=1;
            int I=i;
            int J=j;
            for(r=I,c=J;r<=I+R2-1,c<=J+C2-1;r++,c++)
            {
                if(matrix1[r][c]!=matrix2[r-I+1][c-J+1]&&matrix1[r][c]!=' '&&matrix2[r-I+1][c-J+1]!=' ')
                {check=0;
                 break;}
                else continue;
            }
        }
        else continue;

    }
printf("%d", check);


return 0;
}
