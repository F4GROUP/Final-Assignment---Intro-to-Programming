
void transpose(double a[4][4], double t[4][4])
  {

    int     row, col;

    for (row=0; row<4; row++)
      for (col=0; col<4; col++)
        t[row][col] = a[col][row];

  }
