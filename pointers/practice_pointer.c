/**********************************************************
 * @name arithmetic operation using pointers
 * @date 25/sept/22
 * Write a C program to perform addition, subtraction, multiplication and division
 * into calculate function and display result of all the operation in main
**********************************************************/
#include<stdio.h>

/***************************************************************
 * @name void vCalculate(int *ResAdd, int *ResSub, int *ResMul, int *ResDiv )
 * @date 25/sept/2022
 * @details perform arithmetic operation and store result in recieved addr
 * @test ok
 * @param *int pointer of number 1
 * @param *int pointer of number 2
 * @param *int pointer of number 3
 * @param *int pointer of number 4
***************************************************************/
void vCalculate(int *ResAdd, int *ResSub, int *ResMul, int *ResDiv )
{
    int iNum1,iNum2;
    printf("Enter two numbers: ");
    scanf("%d%d",&iNum1,&iNum2);

    // Addition operation
    *ResAdd = iNum1+iNum2;
    // Subtraction operation
    *ResSub = iNum1-iNum2;
    // Multiplication operation
    *ResMul = iNum1*iNum2;
    // Division operation
    *ResDiv = iNum1/iNum2;
};

int main()
{
    int ResAdd=0, ResSub=0, ResMul=0, ResDiv=0;     // Result of particular opertn  
    vCalculate(&ResAdd,&ResSub,&ResMul,&ResDiv);    // Calling vCalculate() and passing addr of var
    printf("\nAdd: %d \nSub: %d \nMul: %d \nDiv: %d ",ResAdd,ResSub,ResMul,ResDiv);
    printf("\n----------------------------\n");
    return 0;
}