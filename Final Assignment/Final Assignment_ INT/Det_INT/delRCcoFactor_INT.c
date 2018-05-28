//delete row and column of a square matrix to find cofactor

int delRCcoFactor_INT(int matrix[30][30], int R, int C, int dR, int dC, int temp[30][30])
{
    void delRow_INT(int matrix[30][30],int R, int C, int dR, int temp[30][30]);
    void delCol_INT(int matrix[30][30],int R, int C, int dC, int temp[30][30]);
    if (R!=C) return 0;
    else
    {
        delRow_INT(matrix,R,C,dR, temp);
        delCol_INT(temp,R-1,C,dC, temp);
        return 1;
    }

}
