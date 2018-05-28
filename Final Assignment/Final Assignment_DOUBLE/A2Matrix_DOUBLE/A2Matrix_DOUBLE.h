#ifndef __A2MatrixDOUBLE_H__
#define __A2MatrixDOUBLE_H__

#include "A2Matrix_DOUBLE.h"
//enter index an print index of a matrix
void enterIndex_DOUBLE(double matrix[30][30],int R, int C);
void enterRC_DOUBLE(double matrix[30][30],int *R, int *C);
void print_DOUBLE(double matrix[30][30],int R, int C);

//function finding whether a matrix is produce from the other by adding, subtracting, multiplying or dividing by a number
int relationFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
double additionFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
double subtractionFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
double divisionFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
double multiplicationFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);

//basic operation of matrices
int addition_DOUBLE(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2, double matrix3[30][30]);
int product_DOUBLE(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2, double matrix3[30][30]);
int subtraction_DOUBLE(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2, double matrix3[30][30]);
void transpose_DOUBLE(double matrix[30][30], int R, int C, double transpose[30][30]);
void delCol_DOUBLE(double matrix[30][30],int R, int C, int dC, double temp[30][30]);
void delRow_DOUBLE(double matrix[30][30],int R, int C, int dR, double temp[30][30]);

//basis comparison between two matrices
int contain_DOUBLE(double m1[30][30],double m2[30][30],int R1,int C1,int R2,int C2);
int symmetric_DOUBLE(double matrix[30][30], int R, int C);
int thesame_DOUBLE(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2);

//finding determinant of a matrix
double det_DOUBLE (double matrix[30][30],int R, int C );
double det2_DOUBLE(double matrix[30][30], int R, int C);
int delRCcoFactor_DOUBLE(double matrix[30][30], int R, int C, int dR, int dC, int temp[30][30]);

//compare two double-type numbers
int eql(double A, double B)
int Neql(double A, double B)
//this library is used to compute matrices which contain only integers.




#endif
