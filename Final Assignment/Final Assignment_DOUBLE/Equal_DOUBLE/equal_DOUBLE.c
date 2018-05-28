#include <math.h>

int eql(double A, double B)
{
    int E=0.0000001; // E is the precision

    if(fabs(A-B)<=E) return 1;
    else return 0;

    //If the difference between A and B is less than the precision E, assume that A=B
}
