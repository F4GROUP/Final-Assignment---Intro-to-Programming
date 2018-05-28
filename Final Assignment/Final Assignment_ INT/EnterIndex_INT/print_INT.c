
void print_INT(int matrix[30][30],int R, int C)
{
    int i,j;
    printf("\n\n");
    for (i=1;i<=R;i++)

    {
        for (j=1;j<=C;j++)
        printf("%d\t",matrix[i][j]);

        printf("\n");
    }

    printf("\n\n");
}
