
#include<stdio.h>
#include<stdlib.h>

void  vAcceptArray (int (**arr),int *iRow,int *iCol);
void  vDisplayArray(int (**arr),int *iRow,int *iCol);
int** iMemoryAlloc (int (**arr),int *iRow,int *iCol);
void  vFreeMemory  (int (**arr),int *iRow,int *iCol);