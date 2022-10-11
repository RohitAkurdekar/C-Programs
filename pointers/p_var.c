/********************************************************
 * @name pointer variable
 * @date 25/sept/2022
 * 
 * Pointer have two operators:
    * 1. * - It gives a value of a var.
    * 2. & - It gives an addr of a var.
 * 
*********************************************************/
#include<stdio.h>

int main()
{
    int iNum =100, *iPtr=NULL;
    printf("\nThe val  of iNum: %d", iNum);
    printf("\nThe addr of iNum: %x",&iNum);
    printf("\n---------------------------------------\n");
    iPtr = &iNum;
    printf("\nThe val  of iNum using pointer: %d",*iPtr);
    printf("\nThe addr of iPtr              : %x",&iPtr);
    printf("\nThe addr of iNum using pointer: %x", iPtr);
    printf("\n---------------------------------------\n");
    return 0;
}