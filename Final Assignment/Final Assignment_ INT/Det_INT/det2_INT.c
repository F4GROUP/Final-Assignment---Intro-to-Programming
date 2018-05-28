//determinant of a 2x2 matrix

int det2_INT(int matrix[30][30], int R, int C)
{
    if (R!=C||R!=2||C!=2)
        {
            printf("\n\n det2_INT gets some higher order of matrix\n\n");
            return 0;

        }
    else
    {
        int det2=0;
        det2=matrix[1][1]*matrix[2][2]-matrix[2][1]*matrix[1][2];
        return det2;
    }
}
