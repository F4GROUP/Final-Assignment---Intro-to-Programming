 /* This is a sample C program which will
   ask the user for a 4X4 matrix,    */
 /* call a function to compute it's
    transpose, and output the result.*/
 /* Include the standard C library functions */
  #include<stdio.h>

 /* Declare transpose() */
  void transpose(double a[4][4], double t[4][4]);

 /* Begin the main program */
 int main()
  {

  /* This is the variable declaration section */
    int      i, j;
    double   a[4][4], t[4][4];

    printf("You will now enter matrix A.\n");

    /* Input matrix from keyboard */
    for (i=0; i<4; i++)
      for (j=0; j<4; j++) {
        printf("Enter matrix element [%d,%d]: ", i, j);
        scanf("%lf", &a[i][j]);
      }

    /* Call the function */
    transpose(a, t);

    printf("The transpose of matrix A is :\n\n");

    /* Print the results on the screen */
    for (i=0; i<4; i++) {
      for (j=0; j<4; j++)
        printf("%lf ", t[i][j]);
      printf("\n");
    }

  } /* End of main program */

  /* Function to compute the transpose of "a",
    returning the result in "t".  */
  void transpose(double a[4][4], double t[4][4])
  {
    /* These variables are local to this function */
    int     row, col;

    for (row=0; row<4; row++)
      for (col=0; col<4; col++)
        t[row][col] = a[col][row];

  }  /* End of function */
