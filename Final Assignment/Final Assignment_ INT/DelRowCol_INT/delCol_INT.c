//delete column of a matrix to make new one
void delCol_INT(int matrix[30][30],int R, int C, int dC, int temp[30][30])
{
    int i,j;

    for(i=1;i<=R;i++)
        for(j=1;j<dC;j++)
            temp[i][j]=matrix[i][j];

    for(i=1;i<=R;i++)
        for(j=dC;j<=C;j++)
            temp[i][j]=matrix[i][j+1];

}

