
int thesame_INT(int matrix1[30][30], int matrix2[30][30], int R1, int C1, int R2, int C2)
{
    int i,j;
    if(R1!=R2||C1!=C2)
        return 0;
    else
    {
       for (i=1;i<=R1;i++)
        for (j=1;j<=C1;j++)

       {
           if (matrix1[i][j] != matrix2[i][j])
           {
               return 0;
           }
           else continue;
       }

    }
    return 1;
}
