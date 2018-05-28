
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
