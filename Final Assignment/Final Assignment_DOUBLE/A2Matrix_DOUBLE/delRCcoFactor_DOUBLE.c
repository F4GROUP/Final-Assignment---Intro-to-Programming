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
