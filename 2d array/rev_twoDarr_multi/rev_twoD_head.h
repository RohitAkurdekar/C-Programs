/*******************************************************
 * @name reverse of 2D array header
 * @date 29/sept/2022
 * @brief
*******************************************************/
#ifndef _REV_HEAD_
#define _REV_HEAD_

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

void vTransposeMat(int **sourceMat,int **destMat,int *iRow, int *iCol);
bool isSymmetricMat(int **Matrix1,int **Matrix2,int *iRow, int *iCol);

#endif