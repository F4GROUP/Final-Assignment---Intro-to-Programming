#include "A2Matrix.h"
int relationFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2)
{
    //return 1 means there is a relation
    //return 0 means no relation
    int additionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
    int subtractionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
    double multiplicationFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
    double divisionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);

    int add=0,sub=0;
    double mul=0,div=0;

    if (R1!=R2||C1!=C2)
    {
        printf("\n\nDimension Error!!!\nNot the same size");
        return 0;
    }

    add=additionFactor_INT(m1,m2,R1,C1,R2,C2);
    sub=subtractionFactor_INT(m1,m2,R1,C1,R2,C2);
    mul=multiplicationFactor_INT(m1,m2,R1,C1,R2,C2);
    div=divisionFactor_INT(m1,m2,R1,C1,R2,C2);

    if(add!=0 || sub!=0 || mul != 0 || div != 0)
    {
        add=additionFactor_INT(m1,m2,R1,C1,R2,C2);
        sub=subtractionFactor_INT(m1,m2,R1,C1,R2,C2);
        mul=multiplicationFactor_INT(m1,m2,R1,C1,R2,C2);
        div=divisionFactor_INT(m1,m2,R1,C1,R2,C2);
        printf("\nMatrix 2 is produced from matrix 1 by these operation:\n\n");
        if (add) printf("Added by      \t%d\n",add);
        if (sub) printf("Subtracted by \t%d\n",sub);
        if (mul) printf("Multiplied by \t%f\n",mul);
        if (div) printf("Divided by    \t%f\n",div);

        printf("\n\nOr\n\n");
        add=additionFactor_INT(m2,m1,R1,C1,R2,C2);
        sub=subtractionFactor_INT(m2,m1,R1,C1,R2,C2);
        mul=multiplicationFactor_INT(m2,m1,R1,C1,R2,C2);
        div=divisionFactor_INT(m2,m1,R1,C1,R2,C2);
        printf("\nMatrix 1 is produced from matrix 2 by these operation:\n\n");
        if (add) printf("Added by      \t%d\n",add);
        if (sub) printf("Subtracted by \t%d\n",sub);
        if (mul) printf("Multiplied by \t%f\n",mul);
        if (div) printf("Divided by    \t%f\n",div);
        return 1; //confirm that m1 and m2 has a relation
    }
    else {printf("No relation"); return 0;}
}

int additionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2)
{
    int i,j,f;
    f=m2[1][1]-m1[1][1];
    if (f<0) return 0; //if f<0, move to function subtractionFactor_INT
    for (i=1;i<=R1;i++)
        for (j=1;j<=C1;j++)
            {
                if((m2[i][j]-m1[i][j])!=f) return 0;
                else continue;
            }
    return f;
}


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


double multiplicationFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2)
{
    int i,j;
    double f;
    f=m2[1][1]/m1[1][1];
    if (f<1&&f>-1) return 0; //if f<1&&f>-1, move to function divisionFactor_INT
    for (i=1;i<=R1;i++)
        for (j=1;j<=C1;j++)
            {
                if(Neql((m2[i][j]/m1[i][j]),f)
                    || eql(m1[i][j],0)
                    || eql(m2[i][j],0)) return 0;
            }
    return f;
}

double divisionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2)
{
    int i,j;
    double f;
    f=m1[1][1]/m2[1][1];
    if (f<1&&f>-1) return 0; //if f<1&&f>-1, move to function multiplicationFactor_INT
    for (i=1;i<=R1;i++)
        for (j=1;j<=C1;j++)
            {
                if( Neql((m1[i][j]/m2[i][j]),f)
                    || eql(m1[i][j],0)
                    ||eql(m2[i][j],0)) return 0;
            }
    return f;
}


int relationFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2)
{
    //return 1, 2, 3, 4 means + , - , * , /
    //return 0 means no relation
    double additionFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
    double subtractionFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
    double multiplicationFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
    double divisionFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);

    double add=0,sub=0,mul=0,div=0;

    if (R1!=R2||C1!=C2)
    {
        printf("Not the same size");
        return 0;
    }

    add=additionFactor_DOUBLE(m1,m2,R1,C1,R2,C2);
    sub=subtractionFactor_DOUBLE(m1,m2,R1,C1,R2,C2);
    mul=multiplicationFactor_DOUBLE(m1,m2,R1,C1,R2,C2);
    div=divisionFactor_DOUBLE(m1,m2,R1,C1,R2,C2);

    if(add!=0 || sub!=0 || mul != 0 || div != 0)
    {
        add=additionFactor_DOUBLE(m1,m2,R1,C1,R2,C2);
        sub=subtractionFactor_DOUBLE(m1,m2,R1,C1,R2,C2);
        mul=multiplicationFactor_DOUBLE(m1,m2,R1,C1,R2,C2);
        div=divisionFactor_DOUBLE(m1,m2,R1,C1,R2,C2);
        printf("\nMatrix 2 is produced from matrix 1 by these operation:\n\n");
        if (add) printf("Added by      \t%10.10f\n",add);
        if (sub) printf("Subtracted by \t%10.10f\n",sub);
        if (mul) printf("Multiplied by \t%10.10f\n",mul);
        if (div) printf("Divided by    \t%10.10f\n",div);

        printf("\n\nOr\n\n");
        add=additionFactor_DOUBLE(m2,m1,R1,C1,R2,C2);
        sub=subtractionFactor_DOUBLE(m2,m1,R1,C1,R2,C2);
        mul=multiplicationFactor_DOUBLE(m2,m1,R1,C1,R2,C2);
        div=divisionFactor_DOUBLE(m2,m1,R1,C1,R2,C2);
        printf("\nMatrix 1 is produced from matrix 2 by these operation:\n\n");
        if (add) printf("Added by      \t%10.10f\n",add);
        if (sub) printf("Subtracted by \t%10.10f\n",sub);
        if (mul) printf("Multiplied by \t%10.10f\n",mul);
        if (div) printf("Divided by    \t%10.10f\n",div);
        return 1; //confirm that m1 and m2 has a relation
    }
    else {printf("No relation"); return 0;}
}

double additionFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2)
{
    int i,j,f;

        f=m2[1][1]-m1[1][1];
        if (f<0) return 0; //if f<0, move to function subtractionFactor_DOUBLE


        for (i=1;i<=R1;i++)
            for (j=1;j<=C1;j++)
                {
                    if((m2[i][j]-m1[i][j])!=f) return 0;
                    else continue;
                }
        return f;
}

double subtractionFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2)
{
        int i,j;
        double f;
        f=m1[1][1]-m2[1][1];
        if (f<0) return 0; //if f<0, move to function additionFactor_DOUBLE
        for (i=1;i<=R1;i++)
            for (j=1;j<=C1;j++)
                {
                    if(Neql((m1[i][j]-m2[i][j]),f)) return 0;
                }
        return f;
}

double multiplicationFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2)
{
    int i,j;
    double f;

        f=m2[1][1]/m1[1][1];
        if (f<1&&f>-1) return 0; //if f<1&&f>-1, move to function divisionFactor_DOUBLE
        for (i=1;i<=R1;i++)
            for (j=1;j<=C1;j++)
                {
                    if(Neql((m2[i][j]/m1[i][j]),f)
                       || eql(m1[i][j],0)
                       || eql(m2[i][j],0)) return 0;
                }
        return f;
}

double divisionFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2)
{
    int i,j;
    double f;




        f=m1[1][1]/m2[1][1];
        if (f<1&&f>-1) return 0; //if f<1&&f>-1, move to function multiplicationFactor_DOUBLE
        for (i=1;i<=R1;i++)
            for (j=1;j<=C1;j++)
                {
                    if( Neql((m1[i][j]/m2[i][j]),f)
                       || eql(m1[i][j],0)
                       ||eql(m2[i][j],0)) return 0;
                }
        return f;
}






















