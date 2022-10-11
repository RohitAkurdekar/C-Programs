#include"func_head.h"
// ------------------------ function defination --------------------------
void printNumber(int number)
{
    printf("%d",number);
}

int acceptNumber(void)
{
    int number;
    printf("\nEnter a number: ");
    scanf("%d",&number);
    return number;
}