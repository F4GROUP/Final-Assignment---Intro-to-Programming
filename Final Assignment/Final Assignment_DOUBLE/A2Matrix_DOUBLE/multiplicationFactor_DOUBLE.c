#include <stdio.h>
#include <stdlib.h>
#include "A2Matrix_DOUBLE.h"
double multiplicationFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2)
{
    int i,j;
    double f;

        f=m2[1][1]/m1[1][1];
        if (f<1&&f>-1) return 0; //if f<1&&f>-1, move to function divisionFactor_DOUBLE
        for (i=1;i<=R1;i++)
            for (j=1;j<=C1;j++)
                {
                    if(Neql((m2[i][j]/m1[i][j]),f)
                       || eql(m1[i][j],0)
                       || eql(m2[i][j],0)) return 0;
                }
        return f;
}
