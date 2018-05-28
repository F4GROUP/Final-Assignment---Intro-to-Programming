int addition_DOUBLE(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2, double matrix3[30][30])
{
    int i,j;
    if (R1==R1&&C1==C2)
    {
       for (i=1;i<=R1;i++)
       for (j=1;j<=C1;j++)
       {
           matrix3[i][j]=matrix1[i][j]+matrix2[i][j];
       }
       return 1;
    }
    else
    {  printf("Dimension Error!!!");
        return 0;}
}
