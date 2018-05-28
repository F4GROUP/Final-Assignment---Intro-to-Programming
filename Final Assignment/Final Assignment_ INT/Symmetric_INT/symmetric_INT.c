int symmetric_INT(int matrix[30][30], int R, int C)
{
    int transpose[30][30];
    void transpose_INT(int matrix[30][30], int ROW, int COL, int transpose[30][30]);
    int thesame_INT(int matrix1[30][30], int matrix2[30][30], int R1, int C1, int R2, int C2);

 if (R==C)
 {
    transpose_INT(matrix,R,C,transpose);
    if (thesame_INT(matrix,transpose,R,R,R,R))
        return 1;
    else return 0;
 }
 else return 0;
}
