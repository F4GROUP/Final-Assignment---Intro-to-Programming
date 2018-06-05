#include <math.h>
#include "A2Matrix.h"
int eql(double A, double B)
{
    double E=0.0000001; // E is the precision

    if(fabs(A-B)<=E) return 1;
    else return 0;

    //If the difference between A and B is less than the precision E, assume that A=B
}

int Neql(double A, double B)
{
    double E=0.0000001; // E is the precision

    if(fabs(A-B)<=E) return 0;
    else return 1;
    //If the difference between A and B is less than the precision E, assume that A=B
}
