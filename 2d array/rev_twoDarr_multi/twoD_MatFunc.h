/***************************************************************************************
 * @name Matrix functions
 * @date 29/sept/2022
 * @brief Allocate memories, Deallocate memories,Accept matrix, Display matrix
***************************************************************************************/
#ifndef _MAT_FUNC_HEAD_
#define _MAT_FUNC_HEAD_

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#include"add_twoD_head.h"
#include"rev_twoD_head.h"

void  vAcceptArray (int (**arr),int *iRow,int *iCol);
void  vDisplayArray(int (**arr),int *iRow,int *iCol);
int** iMemoryAlloc (int (**arr),int *iRow,int *iCol);
void  vFreeMemory  (int (**arr),int *iRow,int *iCol);

// Forced memory allocation
int** iForcedMemoryAlloc(int (**arr),int *iRow,int *iCol);
// ------------------------------------------------------

void vDisplayMenu(void);
void vOperateMenu(int**,int*,int*);
int** iAcceptMatric(int**,int*,int*);

#endif