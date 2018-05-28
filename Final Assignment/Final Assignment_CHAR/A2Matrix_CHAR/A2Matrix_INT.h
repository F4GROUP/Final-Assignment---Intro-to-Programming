#ifndef __A2MatrixINT_H__
#define __A2MatrixINT_H__

#include "A2Matrix_INT.h"
//enter index an print index of a matrix
void enterIndex_INT(int matrix[30][30],int R, int C);
void enterRC_INT(int matrix[30][30],int *R, int *C);
void print_INT(int matrix[30][30],int R, int C);

//function finding whether a matrix is produce from the other by adding, subtracting, multiplying or dividing by a number
int relationFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
int additionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
int subtractionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
double divisionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
double multiplicationFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);

//basic operation of matrices
int addition_INT(int matrix1[30][30], int matrix2[30][30], int R1, int C1, int R2, int C2, int matrix3[30][30]);
int product_INT(int matrix1[30][30], int matrix2[30][30], int R1, int C1, int R2, int C2, int matrix3[30][30]);
int subtraction_INT(int matrix1[30][30], int matrix2[30][30], int R1, int C1, int R2, int C2, int matrix3[30][30]);
void transpose_INT(int matrix[30][30], int R, int C, int transpose[30][30]);
void delCol_INT(int matrix[30][30],int R, int C, int dC, int temp[30][30]);
void delRow_INT(int matrix[30][30],int R, int C, int dR, int temp[30][30]);

//basic comparison between two matrices
int contain_INT(int m1[30][30],int m2[30][30],int R1,int C1,int R2,int C2);
int symmetric_INT(int matrix[30][30], int R, int C);
int thesame_INT(int matrix1[30][30], int matrix2[30][30], int R1, int C1, int R2, int C2);

//finding determinant of a matrix
int det_INT (int matrix[30][30],int R, int C );
int det2_INT(int matrix[30][30], int R, int C);
int delRCcoFactor_INT(int matrix[30][30], int R, int C, int dR, int dC, int temp[30][30]);

//compare two double-type numbers
int Neql(double A, double B);
int eql(double A, double B);


//this library is used to compute matrices which contain only integers.




#endif
