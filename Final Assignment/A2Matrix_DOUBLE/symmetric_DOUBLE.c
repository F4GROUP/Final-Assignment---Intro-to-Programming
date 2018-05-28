#include "A2Matrix_DOUBLE.h"
int symmetric_DOUBLE(double matrix[30][30], int R, int C)
{
    int transpose[30][30];
    void transpose_DOUBLE(double matrix[30][30], int ROW, int COL, double transpose[30][30]);
    int thesame_DOUBLE(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2);

 if (R==C)
 {
    transpose_DOUBLE(matrix,R,C,transpose);
    if (thesame_DOUBLE(matrix,transpose,R,R,R,R))
        return 1;
    else return 0;
 }
 else return 0;
}
