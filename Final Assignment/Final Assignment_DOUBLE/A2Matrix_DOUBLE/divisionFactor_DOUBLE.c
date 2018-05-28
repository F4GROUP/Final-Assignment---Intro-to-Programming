#include "A2Matrix_DOUBLE.h"
double divisionFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2)
{
    int i,j;
    double f;




        f=m1[1][1]/m2[1][1];
        if (f<1&&f>-1) return 0; //if f<1&&f>-1, move to function multiplicationFactor_DOUBLE
        for (i=1;i<=R1;i++)
            for (j=1;j<=C1;j++)
                {
                    if( Neql((m1[i][j]/m2[i][j]),f)
                       || eql(m1[i][j],0)
                       ||eql(m2[i][j],0)) return 0;
                }
        return f;
}

