#include "A2Matrix_INT.h"
int contain_INT(int m1[30][30],int m2[30][30],int R1,int C1,int R2,int C2)
{
    int i,j,r,c,check=0;

    if (R1*C1>R2*C2)
    {
        //check if m1 contain m2
        for(i=1;i<=1+R1-R2;i++)
            for(j=1;j<=1+C1-C2;j++)
                {
                    if (m1[i][j]==m2[1][1])
                        {   check=1;
                            int I=i;
                            int J=j;
                            for(r=I,c=J;r<=I+R2-1,c<=J+C2-1;r++,c++)
                                {
                                    if(m1[r][c]!=m2[r-I+1][c-J+1]&&m1[r][c]!=' '&&m2[r-I+1][c-J+1]!=' ')
                                        {check=0;
                                        break;}
                                    else continue;
                                }
                        }
                    else continue;

                }
    if (check!=0) return check;
    }
    else if(R1*C1<R2*C2)
        {
            //check if m2 contain m1
            for(i=1;i<=1+R2-R1;i++)
                for(j=1;j<=1+C2-C1;j++)
                    {
                        if (m2[i][j]==m1[1][1])
                            {   check=2;
                                int I=i;
                                int J=j;
                                for(r=I,c=J;r<=I+R1-1,c<=J+C1-1;r++,c++)
                                    {
                                        if(m2[r][c]!=m1[r-I+1][c-J+1]&&m2[r][c]!=' '&&m1[r-I+1][c-J+1]!=' ')
                                            {check=0;
                                            break;}
                                        else continue;
                                    }
                            }
                        else continue;

                    }
            if (check!=0) return check;
        }
        //do not compare if R1*C1==R2*C2
    else if(R1*C1==R2*C2) return 0;

}
