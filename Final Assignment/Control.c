#include<windows.h>
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include<conio.h>
#include "A2Matrix.h"
COORD coord={0,0};
void gotoxy(int x,int y)
{
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void process_1(int X1, int Y1)
{
    char select;
    void gotoxy(int x,int y);
    system("cls");
    gotoxy(X1,Y1+7);
    gotoxy(X1,Y1+1); printf("Select function");
    gotoxy(X1,Y1+2); printf("1. Matrix Processing");
    gotoxy(X1,Y1+3); printf("2. User Guide");
    gotoxy(X1,Y1+4); printf("3. About this Project");

    gotoxy(X1,Y1+6); printf("0. Return to main page");
    gotoxy(X1,Y1+8); printf("_");scanf("%c",&select);
    switch(select)
    {
        case '1': process_2(X1,Y1); break;
        case '2': userguide(); process_1(X1,Y1); break;
        case '3': about(); process_1(X1,Y1); break;
        case '0': main_logo(X1,Y1); process_1(X1,Y1); break;
        default: process_1(X1,Y1); break;
    }
}

void process_2(int X1, int Y1)
{
    void gotoxy(int x,int y);
    char select;
    system("cls");
    gotoxy(X1,Y1+7);
    gotoxy(X1,Y1+1); printf("Select type of matrices");
    gotoxy(X1,Y1+2); printf("1. Integer number (int)");
    gotoxy(X1,Y1+3); printf("2. Real number (double)");
    gotoxy(X1,Y1+4); printf("3. Character (char)");

    gotoxy(X1,Y1+6); printf("0. Back");
    gotoxy(X1,Y1+7); printf("Q. QuitReturn");
    gotoxy(X1,Y1+8); printf("_");scanf("%c",&select);
    switch(select)
    {
        case '1': process_3_INT(X1,Y1); break;
        case '2': process_3_DOUBLE(X1,Y1); break;
        case '3': process_3_CHAR(X1,Y1);break;
        case '0': process_1(X1,Y1); break;
        case 'Q': case 'q': QuitReturn(X1,Y1); break;
        default:  process_2(X1,Y1); break;
    }
}

void process_3_INT(int X1, int Y1)
{
    int matrix1[30][30], matrix2[30][30], matrix3[30][30], temp[30][30];
    int R1,C1,R2,C2,R3,C3,Rt,Ct;

    void gotoxy(int x,int y);
    char select;
    system("cls");
    gotoxy(X1,Y1+1); printf("Select a matrix operation: ");
    gotoxy(X1,Y1+2); printf("1. Check symmetry");
    gotoxy(X1,Y1+3); printf("2. Find transpose matrix");
    gotoxy(X1,Y1+4); printf("3. Find determinant");
    gotoxy(X1,Y1+5); printf("4. Find sum/difference/product");
    gotoxy(X1,Y1+6); printf("5. Check identicality");
    gotoxy(X1,Y1+7); printf("6. Check contain");
    gotoxy(X1,Y1+8); printf("7. Find relation factor");
    gotoxy(X1,Y1+9); printf("8. Find Max of matrix");
    gotoxy(X1,Y1+10); printf("9. Find Min of matrix");

    gotoxy(X1,Y1+12); printf("0. Back");
    gotoxy(X1,Y1+13); printf("Q. Quit");
    gotoxy(X1,Y1+14); printf("_");scanf("%c",&select);
    switch(select)
    {
        case '1': {
                    note1_INT();
                    enterRC_INT(matrix1,&R1,&C1,' ');
                    enterIndex_INT(matrix1,R1,C1);
                    print_INT(matrix1,R1,C1);
                    symmetric_INT(matrix1,R1,C1)?printf("\n\nThe matrix is symmetric\n")
                                                :printf("\n\nThe matrix is not symmetric\n");
                    QuitReturn(X1,Y1);
                    break;
                  }
        case '2': {
                    note1_INT();
                    enterRC_INT(matrix1,&R1,&C1,' ');
                    enterIndex_INT(matrix1,R1,C1);
                    printf("\nInput matrix:\n");
                    print_INT(matrix1,R1,C1);
                    transpose_INT(matrix1,R1,C1,temp);
                    printf("\nTranspose matrix:\n");
                    print_INT(temp,C1,R1);

                    QuitReturn(X1,Y1);
                    break;
                  }
        case '3': {
                    note1_INT();
                    enterRC_INT(matrix1,&R1,&C1,' ');
                    enterIndex_INT(matrix1,R1,C1);
                    printf("\nInput matrix:\n");
                    print_INT(matrix1,R1,C1);
                    printf("\nDeterminant of this matrix is:  %d \n", det_INT(matrix1,R1,C1));

                    QuitReturn(X1,Y1);
                    break;
                  }
        case '4': {
                    note1_INT();
                    char choice;
                    fflush(stdin);
                    printf("\nSelect calculation:\n1.Multiplication \n2. Addition\n3. Subtraction\n__");
                    scanf("%c",&choice);
                    printf("\n");
                    enterRC_INT(matrix1,&R1,&C1,'1');
                    enterIndex_INT(matrix1,R1,C1);
                    printf("\nMatrix 1\n");
                    print_INT(matrix1,R1,C1);

                    enterRC_INT(matrix2,&R2,&C2,'2');
                    enterIndex_INT(matrix2,R2,C2);
                    printf("\nMatrix 2\n");
                    print_INT(matrix2,R2,C2);

                    switch(choice)
                    {
                        case '1':
                            {
                            if(product_INT(matrix1,matrix2,R1,C1,R2,C2,matrix3))
                                {
                                printf("\n\nThe matrices can be multiplied\n");
                                printf("\nProduct matrix: \n");
                                print_INT(matrix3,R2,C2);
                                }
                            else   printf("\n\nThe matrices can not be multiplied\n");
                            break;
                            }
                        case '2':
                            {
                            if(addition_INT(matrix1,matrix2,R1,C1,R2,C2,matrix3))
                                {
                                printf("\n\nThe matrices can be added\n");
                                printf("\nSum matrix: \n");
                                print_INT(matrix3,R2,C2);
                                }
                            else   printf("\n\nThe matrices can not be added\n");
                            break;
                            }
                        case '3':
                             {
                            if(subtraction_INT(matrix1,matrix2,R1,C1,R2,C2,matrix3))
                                {
                                printf("\n\nThe matrices can be subtracted\n");
                                printf("\nDifference matrix: \n");
                                print_INT(matrix3,R2,C2);
                                }
                            else   printf("\n\nThe matrices can not be subtracted\n");
                            break;
                            }
                        default: break;
                    }
                    QuitReturn(X1,Y1);
                    break;
                  }
        case '5': {
                    note1_INT();
                    enterRC_INT(matrix1,&R1,&C1,'1');
                    enterIndex_INT(matrix1,R1,C1);
                    printf("\nMatrix 1\n");
                    print_INT(matrix1,R1,C1);

                    enterRC_INT(matrix2,&R2,&C2,'2');
                    enterIndex_INT(matrix2,R2,C2);
                    printf("\nMatrix 2\n");
                    print_INT(matrix2,R2,C2);

                    thesame_INT(matrix1,matrix2,R1,C1,R2,C2)?printf("\n\nTwo matrices are identical\n")
                                                            :printf("\n\nTwo matrices are different\n");

                    QuitReturn(X1,Y1);
                    break;
                  }
        case '6': {
                    note1_INT();
                    enterRC_INT(matrix1,&R1,&C1,'1');
                    enterIndex_INT(matrix1,R1,C1);
                    printf("\nMatrix 1\n");
                    print_INT(matrix1,R1,C1);

                    enterRC_INT(matrix2,&R2,&C2,'2');
                    enterIndex_INT(matrix2,R2,C2);
                    printf("\nMatrix 2\n");
                    print_INT(matrix2,R2,C2);

                    switch(contain_INT(matrix1,matrix2,R1,C1,R2,C2))
                    {
                        case 1: printf("\n\nMatrix 1 contains matrix 2\n"); break;
                        case 2: printf("\n\nMatrix 2 contains matrix 1\n"); break;
                        case 0: printf("\n\nMatrix 1 and matrix 2 have no relation\n"); break;
                        default: break;
                    }
                    QuitReturn(X1,Y1);
                    break;
                  }
        case '7': {
                    note1_INT();
                    enterRC_INT(matrix1,&R1,&C1,'1');
                    enterIndex_INT(matrix1,R1,C1);
                    printf("\nMatrix 1\n");
                    print_INT(matrix1,R1,C1);

                    enterRC_INT(matrix2,&R2,&C2,'2');
                    enterIndex_INT(matrix2,R2,C2);
                    printf("\nMatrix 2\n");
                    print_INT(matrix2,R2,C2);

                    relationFactor_INT(matrix1,matrix2,R1,C1,R2,C2);
                    QuitReturn(X1,Y1);
                    break;
                  }
        case '8': {
                    note1_INT();
                    enterRC_INT(matrix1,&R1,&C1,' ');
                    enterIndex_INT(matrix1,R1,C1);
                    print_INT(matrix1,R1,C1);
                    printf("\n\nMax of this matrix is %d\n",MaxOfMatrix_INT(matrix1,R1,C1));

                    QuitReturn(X1,Y1);
                    break;
                  }
        case '9': {
                    note1_INT();
                    enterRC_INT(matrix1,&R1,&C1,' ');
                    enterIndex_INT(matrix1,R1,C1);
                    print_INT(matrix1,R1,C1);
                    printf("\n\nMin of this matrix is %d\n",MinOfMatrix_INT(matrix1,R1,C1));

                    QuitReturn(X1,Y1);
                    break;
                  }
        case '0': process_2(X1,Y1); break;
        case 'Q': case 'q': QuitReturn(X1,Y1); break;
        default:  process_3_INT(X1,Y1); break;
    }
}

void process_3_DOUBLE(int X1, int Y1)
{
    void gotoxy(int x,int y);
    double matrix1[30][30], matrix2[30][30], matrix3[30][30], temp[30][30];
    int R1,C1,R2,C2,R3,C3,Rt,Ct;
    char select;
    system("cls");
    gotoxy(X1,Y1+1); printf("Select a matrix operation: ");
    gotoxy(X1,Y1+2); printf("1. Check symmetry");
    gotoxy(X1,Y1+3); printf("2. Find transpose matrix");
    gotoxy(X1,Y1+4); printf("3. Find determinant");
    gotoxy(X1,Y1+5); printf("4. Find sum/difference/product");
    gotoxy(X1,Y1+6); printf("5. Check identicality");
    gotoxy(X1,Y1+7); printf("6. Check contain");
    gotoxy(X1,Y1+8); printf("7. Find relation factor");
    gotoxy(X1,Y1+9); printf("8. Find Max of matrix");
    gotoxy(X1,Y1+10); printf("9. Find Min of matrix");

    gotoxy(X1,Y1+12); printf("0. Back");
    gotoxy(X1,Y1+13); printf("Q. Quit");
    gotoxy(X1,Y1+14); printf("_");scanf("%c",&select);
    switch(select)
    {
        case '1': {
                    note1_DOUBLE();
                    enterRC_DOUBLE(matrix1,&R1,&C1,' ');
                    enterIndex_DOUBLE(matrix1,R1,C1);
                    print_DOUBLE(matrix1,R1,C1);
                    symmetric_DOUBLE(matrix1,R1,C1)?printf("\n\nThe matrix is symmetric\n")
                                                :printf("\n\nThe matrix is not symmetric\n");
                    QuitReturn(X1,Y1);
                    break;
                  }
        case '2': {
                    note1_DOUBLE();
                    enterRC_DOUBLE(matrix1,&R1,&C1,' ');
                    enterIndex_DOUBLE(matrix1,R1,C1);
                    printf("\nInput matrix:\n");
                    print_DOUBLE(matrix1,R1,C1);
                    transpose_DOUBLE(matrix1,R1,C1,temp);
                    printf("\nTranspose matrix:\n");
                    print_DOUBLE(temp,C1,R1);

                    QuitReturn(X1,Y1);
                    break;
                  }
        case '3': {
                    note1_DOUBLE();
                    enterRC_DOUBLE(matrix1,&R1,&C1,' ');
                    enterIndex_DOUBLE(matrix1,R1,C1);
                    printf("\nInput matrix:\n");
                    print_DOUBLE(matrix1,R1,C1);
                    printf("\nDeterminant of this matrix is:  %lf \n", det_DOUBLE(matrix1,R1,C1));

                    QuitReturn(X1,Y1);
                    break;
                  }
        case '4': {
                    note1_DOUBLE();
                    char choice;
                    fflush(stdin);
                    printf("\nSelect calculation:\n1.Multiplication \n2. Addition\n3. Subtraction\n__");
                    scanf("%c",&choice);
                    printf("\n");
                    enterRC_DOUBLE(matrix1,&R1,&C1,'1');
                    enterIndex_DOUBLE(matrix1,R1,C1);
                    printf("\nMatrix 1\n");
                    print_DOUBLE(matrix1,R1,C1);

                    enterRC_DOUBLE(matrix2,&R2,&C2,'2');
                    enterIndex_DOUBLE(matrix2,R2,C2);
                    printf("\nMatrix 2\n");
                    print_DOUBLE(matrix2,R2,C2);

                    switch(choice)
                    {
                        case '1':
                            {
                            if(product_DOUBLE(matrix1,matrix2,R1,C1,R2,C2,matrix3))
                                {
                                printf("\n\nThe matrices can be multiplied\n");
                                printf("\nProduct matrix: \n");
                                print_DOUBLE(matrix3,R2,C2);
                                }
                            else   printf("\n\nThe matrices can not be multiplied\n");
                            break;
                            }
                        case '2':
                            {
                            if(addition_DOUBLE(matrix1,matrix2,R1,C1,R2,C2,matrix3))
                                {
                                printf("\n\nThe matrices can be added\n");
                                printf("\nSum matrix: \n");
                                print_DOUBLE(matrix3,R2,C2);
                                }
                            else   printf("\n\nThe matrices can not be added\n");
                            break;
                            }
                        case '3':
                             {
                            if(subtraction_DOUBLE(matrix1,matrix2,R1,C1,R2,C2,matrix3))
                                {
                                printf("\n\nThe matrices can be subtracted\n");
                                printf("\nDifference matrix: \n");
                                print_DOUBLE(matrix3,R2,C2);
                                }
                            else   printf("\n\nThe matrices can not be subtracted\n");
                            break;
                            }
                        default: break;
                    }
                    QuitReturn(X1,Y1);
                    break;
                  }
        case '5': {
                    note1_DOUBLE();
                    enterRC_DOUBLE(matrix1,&R1,&C1,'1');
                    enterIndex_DOUBLE(matrix1,R1,C1);
                    printf("\nMatrix 1\n");
                    print_DOUBLE(matrix1,R1,C1);

                    enterRC_DOUBLE(matrix2,&R2,&C2,'2');
                    enterIndex_DOUBLE(matrix2,R2,C2);
                    printf("\nMatrix 2\n");
                    print_DOUBLE(matrix2,R2,C2);

                    thesame_DOUBLE(matrix1,matrix2,R1,C1,R2,C2)?printf("\n\nTwo matrices are identical\n")
                                                            :printf("\n\nTwo matrices are different\n");

                    QuitReturn(X1,Y1);
                    break;
                  }
        case '6': {
                    note1_DOUBLE();
                    enterRC_DOUBLE(matrix1,&R1,&C1,'1');
                    enterIndex_DOUBLE(matrix1,R1,C1);
                    printf("\nMatrix 1\n");
                    print_DOUBLE(matrix1,R1,C1);

                    enterRC_DOUBLE(matrix2,&R2,&C2,'2');
                    enterIndex_DOUBLE(matrix2,R2,C2);
                    printf("\nMatrix 2\n");
                    print_DOUBLE(matrix2,R2,C2);

                    switch(contain_DOUBLE(matrix1,matrix2,R1,C1,R2,C2))
                    {
                        case 1: printf("\n\nMatrix 1 contains matrix 2\n"); break;
                        case 2: printf("\n\nMatrix 2 contains matrix 1\n"); break;
                        case 0: printf("\n\nMatrix 1 and matrix 2 have no relation\n"); break;
                        default: break;
                    }
                    QuitReturn(X1,Y1);
                    break;
                  }
        case '7': {
                    note1_DOUBLE();
                    enterRC_DOUBLE(matrix1,&R1,&C1,'1');
                    enterIndex_DOUBLE(matrix1,R1,C1);
                    printf("\nMatrix 1\n");
                    print_DOUBLE(matrix1,R1,C1);

                    enterRC_DOUBLE(matrix2,&R2,&C2,'2');
                    enterIndex_DOUBLE(matrix2,R2,C2);
                    printf("\nMatrix 2\n");
                    print_DOUBLE(matrix2,R2,C2);

                    relationFactor_DOUBLE(matrix1,matrix2,R1,C1,R2,C2);
                    QuitReturn(X1,Y1);
                    break;
                  }
        case '8': {
                    note1_DOUBLE();
                    enterRC_DOUBLE(matrix1,&R1,&C1,' ');
                    enterIndex_DOUBLE(matrix1,R1,C1);
                    print_DOUBLE(matrix1,R1,C1);
                    printf("\n\nMax of this matrix is %lf\n",MaxOfMatrix_DOUBLE(matrix1,R1,C1));

                    QuitReturn(X1,Y1);
                    break;
                  }
        case '9': {
                    note1_DOUBLE();
                    enterRC_DOUBLE(matrix1,&R1,&C1,' ');
                    enterIndex_DOUBLE(matrix1,R1,C1);
                    print_DOUBLE(matrix1,R1,C1);
                    printf("\n\nMin of this matrix is %lf\n",MinOfMatrix_DOUBLE(matrix1,R1,C1));

                    QuitReturn(X1,Y1);
                    break;
                  }
        case '0': process_2(X1,Y1); break;
        case 'Q': case 'q': QuitReturn(X1,Y1); break;
        default:  process_3_DOUBLE(X1,Y1); break;
    }
}

void process_3_CHAR(int X1, int Y1)
{
    int matrix1[30][30], matrix2[30][30], matrix3[30][30], temp[30][30];
    int R1,C1,R2,C2,R3,C3,Rt,Ct;

    void gotoxy(int x,int y);
    char select;
    system("cls");
    gotoxy(X1,Y1+1); printf("Select a matrix operation: ");
    gotoxy(X1,Y1+2); printf("1. Check symmetry");
    gotoxy(X1,Y1+3); printf("2. Find transpose matrix");
    gotoxy(X1,Y1+4); printf("3. Find determinant");
    gotoxy(X1,Y1+5); printf("4. Find sum/difference/product");
    gotoxy(X1,Y1+6); printf("5. Check identicality");
    gotoxy(X1,Y1+7); printf("6. Check contain");
    gotoxy(X1,Y1+8); printf("7. Find relation factor");
    gotoxy(X1,Y1+9); printf("8. Find Max of matrix");
    gotoxy(X1,Y1+10); printf("9. Find Min of matrix");

    gotoxy(X1,Y1+12); printf("0. Back");
    gotoxy(X1,Y1+13); printf("Q. Quit");
    gotoxy(X1,Y1+14); printf("_");scanf("%c",&select);
    switch(select)
    {
        case '1': {
                    note1_CHAR();
                    enterRC_INT(matrix1,&R1,&C1,' ');
                    enterIndex_CHAR(matrix1,R1,C1);
                    print_CHAR(matrix1,R1,C1);
                    symmetric_INT(matrix1,R1,C1)?printf("\n\nThe matrix is symmetric\n")
                                                :printf("\n\nThe matrix is not symmetric\n");
                    QuitReturn(X1,Y1);
                    break;
                  }
        case '2': {
                    note1_CHAR();
                    enterRC_INT(matrix1,&R1,&C1,' ');
                    enterIndex_CHAR(matrix1,R1,C1);
                    printf("\nInput matrix:\n");
                    print_CHAR(matrix1,R1,C1);
                    transpose_INT(matrix1,R1,C1,temp);
                    printf("\nTranspose matrix:\n");
                    print_INT(temp,C1,R1);

                    QuitReturn(X1,Y1);
                    break;
                  }
        case '3': {
                    note1_CHAR();
                    enterRC_INT(matrix1,&R1,&C1,' ');
                    enterIndex_CHAR(matrix1,R1,C1);
                    printf("\nInput matrix:\n");
                    print_CHAR(matrix1,R1,C1);
                    int k=det_INT(matrix1,R1,C1);
                    printf("\nDeterminant of this matrix in integer is:  %d \n", k );
                    printf("\nDeterminant of this matrix in character is:  %c \n", k );
                    QuitReturn(X1,Y1);
                    break;
                  }
        case '4': {
                    note1_CHAR();
                    char choice;
                    fflush(stdin);
                    printf("\nSelect calculation:\n1.Multiplication \n2. Addition\n3. Subtraction\n__");
                    scanf("%c",&choice);
                    printf("\n");
                    enterRC_INT(matrix1,&R1,&C1,'1');
                    enterIndex_CHAR(matrix1,R1,C1);
                    printf("\nMatrix 1\n");
                    print_CHAR(matrix1,R1,C1);

                    enterRC_INT(matrix2,&R2,&C2,'2');
                    enterIndex_CHAR(matrix2,R2,C2);
                    printf("\nMatrix 2\n");
                    print_CHAR(matrix2,R2,C2);

                    switch(choice)
                    {
                        case '1':
                            {
                            if(product_INT(matrix1,matrix2,R1,C1,R2,C2,matrix3))
                                {
                                printf("\n\nThe matrices can be multiplied\n");
                                printf("\nProduct matrix in character: \n");
                                print_CHAR(matrix3,R2,C2);

                                printf("\nProduct matrix in integer: \n");
                                print_INT(matrix3,R2,C2);
                                }
                            else   printf("\n\nThe matrices can not be multiplied\n");
                            break;
                            }
                        case '2':
                            {
                            if(addition_INT(matrix1,matrix2,R1,C1,R2,C2,matrix3))
                                {
                                printf("\n\nThe matrices can be added\n");
                                printf("\nSum matrix in character: \n");
                                print_CHAR(matrix3,R2,C2);

                                printf("\nSum matrix in integer: \n");
                                print_INT(matrix3,R2,C2);
                                }
                            else   printf("\n\nThe matrices can not be added\n");
                            break;
                            }
                        case '3':
                             {
                            if(subtraction_INT(matrix1,matrix2,R1,C1,R2,C2,matrix3))
                                {
                                printf("\n\nThe matrices can be subtracted\n");
                                printf("\nDifference matrix in character: \n");
                                print_CHAR(matrix3,R2,C2);

                                printf("\nDifference matrix in integer: \n");
                                print_INT(matrix3,R2,C2);
                                }
                            else   printf("\n\nThe matrices can not be subtracted\n");
                            break;
                            }
                        default: break;
                    }
                    QuitReturn(X1,Y1);
                    break;
                  }
        case '5': {
                    note1_CHAR();
                    enterRC_INT(matrix1,&R1,&C1,'1');
                    enterIndex_CHAR(matrix1,R1,C1);
                    printf("\nMatrix 1\n");
                    print_CHAR(matrix1,R1,C1);

                    enterRC_INT(matrix2,&R2,&C2,'2');
                    enterIndex_CHAR(matrix2,R2,C2);
                    printf("\nMatrix 2\n");
                    print_CHAR(matrix2,R2,C2);

                    thesame_INT(matrix1,matrix2,R1,C1,R2,C2)?printf("\n\nTwo matrices are identical\n")
                                                            :printf("\n\nTwo matrices are different\n");

                    QuitReturn(X1,Y1);
                    break;
                  }
        case '6': {
                    note1_CHAR();
                    enterRC_INT(matrix1,&R1,&C1,'1');
                    enterIndex_CHAR(matrix1,R1,C1);
                    printf("\nMatrix 1\n");
                    print_CHAR(matrix1,R1,C1);

                    enterRC_INT(matrix2,&R2,&C2,'2');
                    enterIndex_CHAR(matrix2,R2,C2);
                    printf("\nMatrix 2\n");
                    print_CHAR(matrix2,R2,C2);

                    switch(contain_INT(matrix1,matrix2,R1,C1,R2,C2))
                    {
                        case 1: printf("\n\nMatrix 1 contains matrix 2\n"); break;
                        case 2: printf("\n\nMatrix 2 contains matrix 1\n"); break;
                        case 0: printf("\n\nMatrix 1 and matrix 2 have no relation\n"); break;
                        default: break;
                    }
                    QuitReturn(X1,Y1);
                    break;
                  }
        case '7': {
                    note1_CHAR();
                    enterRC_INT(matrix1,&R1,&C1,'1');
                    enterIndex_CHAR(matrix1,R1,C1);
                    printf("\nMatrix 1\n");
                    print_CHAR(matrix1,R1,C1);

                    enterRC_INT(matrix2,&R2,&C2,'2');
                    enterIndex_CHAR(matrix2,R2,C2);
                    printf("\nMatrix 2\n");
                    print_CHAR(matrix2,R2,C2);

                    relationFactor_INT(matrix1,matrix2,R1,C1,R2,C2);
                    QuitReturn(X1,Y1);
                    break;
                  }
        case '8': {
                    note1_CHAR();
                    enterRC_INT(matrix1,&R1,&C1,' ');
                    enterIndex_CHAR(matrix1,R1,C1);
                    print_CHAR(matrix1,R1,C1);
                    printf("\n\nMax of this matrix is %c\n",MaxOfMatrix_INT(matrix1,R1,C1));

                    QuitReturn(X1,Y1);
                    break;
                  }
        case '9': {
                    note1_CHAR();
                    enterRC_INT(matrix1,&R1,&C1,' ');
                    enterIndex_CHAR(matrix1,R1,C1);
                    print_CHAR(matrix1,R1,C1);
                    printf("\n\nMin of this matrix is %c\n",MinOfMatrix_INT(matrix1,R1,C1));

                    QuitReturn(X1,Y1);
                    break;
                  }
        case '0': process_2(X1,Y1); break;
        case 'Q': case 'q': QuitReturn(X1,Y1); break;
        default:  process_3_INT(X1,Y1); break;
    }
}

void QuitReturn(int X1, int Y1)
{
    printf("\nPress Enter to quit or press R to return _");
    char goback;
    fflush(stdin);
    scanf("%c",&goback);
    if (goback=='R'||goback=='r') process_2(X1,Y1);
    else {
            system("cls");
            gotoxy(X1,Y1+7); printf("!!!Good Bye!!!\n\n\n\n\n\n\n");
            getch();
            system("cls");
            return;
         }

}

