/***********************************************************
 * @date 24/sept/2022
 * @name main file
 * @def This file will perform functions mentioned below:
        * Arithmetic_ops,isPrime?,reverse,sum_of_digits
 * tested-OK
*************************************************************/

#include"main_h.h"

int main()
{
    int iNum1,iNum2;
    printf("Enter two numbers:");
    scanf("%d%d",&iNum1,&iNum2);                            // get numbers from user
// ------ Arithmetic ops -------------------------------
                       
    printf("\n%d + %d = %d",iNum1,iNum2,Add(iNum1,iNum2));  // Addition
    printf("\n%d - %d = %d",iNum1,iNum2,Sub(iNum1,iNum2));  // Subtraction
    printf("\n%d * %d = %d",iNum1,iNum2,Mul(iNum1,iNum2));  // Multiplication
    printf("\n%d / %d = %d",iNum1,iNum2,Div(iNum1,iNum2));  // Division
    printf("\n-----------------------------------------\n");

// ------ is Prime op -------------------------------
    isPrimeNo(iNum1);
    printf("\n---------------------------------------------\n");
// --------- reverse -------------------------------
    printf("reverse of %d is %d",iNum1,iReverse(iNum1));
    printf("\n-----------------------------------------------\n");
// ---------- sum of digits ----------------------------
    printf("Sum of digits of a %d is %d",iNum1,iSumOfDigits(iNum1));
    printf("\n-----------------------------------------------\n");
// ---------- swapping of num ----------------------------
    vSwap(iNum1,iNum2);
    printf("\n-----------------------------------------------\n");

    return 0;
}
