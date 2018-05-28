#include "A2Matrix_DOUBLE.h"
//delete row and column of a square matrix to find cofactor
int delRCcoFactor_DOUBLE(double matrix[30][30], int R, int C, int dR, int dC, double temp[30][30])
{
    void delRow_DOUBLE(double matrix[30][30],int R, int C, int dR, double temp[30][30]);
    void delCol_DOUBLE(double matrix[30][30],int R, int C, int dC, double temp[30][30]);
    if (R!=C) return 0;
    else
    {
        delRow_DOUBLE(matrix,R,C,dR, temp);
        delCol_DOUBLE(temp,R-1,C,dC, temp);
        return 1;
    }

}

//delete row of a matrix to make new one
void delRow_DOUBLE(double matrix[30][30],int R, int C, int dR, double temp[30][30])
{
    int i,j;

    for(i=1;i<dR;i++)
        for(j=1;j<=C;j++)
            temp[i][j]=matrix[i][j];
    for(i=dR;i<=R;i++)
        for(j=1;j<=C;j++)
            temp[i][j]=matrix[i+1][j];

}

//delete column of a matrix to make new one
void delCol_DOUBLE(double matrix[30][30],int R, int C, int dC, double temp[30][30])
{
    int i,j;

    for(i=1;i<=R;i++)
        for(j=1;j<dC;j++)
            temp[i][j]=matrix[i][j];

    for(i=1;i<=R;i++)
        for(j=dC;j<=C;j++)
            temp[i][j]=matrix[i][j+1];

}

