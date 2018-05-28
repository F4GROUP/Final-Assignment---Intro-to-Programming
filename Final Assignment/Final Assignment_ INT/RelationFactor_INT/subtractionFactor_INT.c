int subtractionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2)
{
        int i,j,f;



        f=m1[1][1]-m2[1][1];
        if (f<0) return 0; //if f<0, move to function additionFactor_INT
        for (i=1;i<=R1;i++)
            for (j=1;j<=C1;j++)
                {
                    if((m1[i][j]-m2[i][j])!=f) return 0;
                }
        return f;
}


