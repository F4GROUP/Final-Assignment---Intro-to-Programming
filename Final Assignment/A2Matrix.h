#ifndef __A2Matrix_H__
#define __A2Matrix_H__

#include "A2Matrix.h"
//functions for matrix in integer type

    //matrix input and output
    void enterIndex_INT(int matrix[30][30],int R, int C);
    void enterRC_INT(int matrix[30][30],int *R, int *C, char Order);
    void print_INT(int matrix[30][30],int R, int C);

    //function finding whether a matrix is produce from the other by adding, subtracting, multiplying or dividing by a number
    int relationFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
    int additionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
    int subtractionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
    double divisionFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);
    double multiplicationFactor_INT(int m1[30][30], int m2[30][30], int R1, int C1, int R2, int C2);

    //basis operation of matrices
    int MaxOfMatrix_INT(int a[30][30], int R, int C);
    int MinOfMatrix_INT(int a[30][30], int R, int C);
    int addition_INT(int matrix1[30][30], int matrix2[30][30], int R1, int C1, int R2, int C2, int matrix3[30][30]);
    int product_INT(int matrix1[30][30], int matrix2[30][30], int R1, int C1, int R2, int C2, int matrix3[30][30]);
    int subtraction_INT(int matrix1[30][30], int matrix2[30][30], int R1, int C1, int R2, int C2, int matrix3[30][30]);
    void transpose_INT(int matrix[30][30], int R, int C, int transpose[30][30]);
    void delCol_INT(int matrix[30][30],int R, int C, int dC, int temp[30][30]);
    void delRow_INT(int matrix[30][30],int R, int C, int dR, int temp[30][30]);

    //basis comparison between two matrices
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


//functions for matrix in double type

    //matrix input and output
    void enterIndex_DOUBLE(double matrix[30][30],int R, int C);
    void enterRC_DOUBLE(double matrix[30][30],int *R, int *C,char Order);
    void print_DOUBLE(double matrix[30][30],int R, int C);

    //function finding whether a matrix is produce from the other by adding, subtracting, multiplying or dividing by a number
    int relationFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
    double additionFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
    double subtractionFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
    double divisionFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);
    double multiplicationFactor_DOUBLE(double m1[30][30], double m2[30][30], int R1, int C1, int R2, int C2);

    //basic operation of matrices
    double MaxOfMatrix_DOUBLE(double a[30][30], int R, int C);
    double MinOfMatrix_DOUBLE(double a[30][30], int R, int C);
    int addition_DOUBLE(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2, double matrix3[30][30]);
    int product_DOUBLE(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2, double matrix3[30][30]);
    int subtraction_DOUBLE(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2, double matrix3[30][30]);
    void transpose_DOUBLE(double matrix[30][30], int R, int C, double transpose[30][30]);
    void delCol_DOUBLE(double matrix[30][30],int R, int C, int dC, double temp[30][30]);
    void delRow_DOUBLE(double matrix[30][30],int R, int C, int dR, double temp[30][30]);
    double MaxOfMatrix(double a[30][30], int R, int C);
    double MinOfMatrix(double a[30][30], int R, int C);

    //basic comparison between two matrices
    int contain_DOUBLE(double m1[30][30],double m2[30][30],int R1,int C1,int R2,int C2);
    int symmetric_DOUBLE(double matrix[30][30], int R, int C);
    int thesame_DOUBLE(double matrix1[30][30], double matrix2[30][30], int R1, int C1, int R2, int C2);

    //finding determinant of a matrix
    double det_DOUBLE (double matrix[30][30],int R, int C );
    double det2_DOUBLE(double matrix[30][30], int R, int C);
    int delRCcoFactor_DOUBLE(double matrix[30][30], int R, int C, int dR, int dC, double temp[30][30]);


//functions for matrix in character type

    //matrix input and output
    void enterIndex_CHAR(int matrix[30][30],int R, int C);
    void print_CHAR(int matrix[30][30],int R, int C);


//functions for controls and menus

    //goto a point on the screen
    void gotoxy(int x,int y);
    //main logo
    void main_logo(int X1, int Y1);
    //menu1
    void process_1(int X1, int Y1);
    //menu2
    void process_2(int X1, int Y1);
    //menu 3
    void process_3_CHAR(int X1, int Y1);
    void process_3_DOUBLE(int X1, int Y1);
    void process_3_INT(int X1, int Y1);
    //quit or return
    void QuitReturn(int X1, int Y1);
    //about the project
    void about(void);
    //user guide
    void userguide(void);


#endif
