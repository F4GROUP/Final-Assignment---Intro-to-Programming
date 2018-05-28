int relationFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2)
{
    //return 1, 2, 3, 4 means + , - , * , /
    //return 0 means no relation
    int additionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
    int subtractionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
    int multiplicationFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
    int divisionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);

    int add=0,sub=0,mul=0,div=0;

    if (R1!=R2||C1!=C2)
    {
        printf("Not the same size");
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
        if (mul) printf("Multiplied by \t%d\n",mul);
        if (div) printf("Divided by    \t%d\n",div);

        printf("\n\nOr\n\n");
        add=additionFactor_INT(m2,m1,R1,C1,R2,C2);
        sub=subtractionFactor_INT(m2,m1,R1,C1,R2,C2);
        mul=multiplicationFactor_INT(m2,m1,R1,C1,R2,C2);
        div=divisionFactor_INT(m2,m1,R1,C1,R2,C2);
        printf("\nMatrix 1 is produced from matrix 2 by these operation:\n\n");
        if (add) printf("Added by      \t%d\n",add);
        if (sub) printf("Subtracted by \t%d\n",sub);
        if (mul) printf("Multiplied by \t%d\n",mul);
        if (div) printf("Divided by    \t%d\n",div);
        return 1; //confirm that m1 and m2 has a relation
    }
    else {printf("No relation"); return 0;}
}
























