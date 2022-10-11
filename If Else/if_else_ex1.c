/*
    Write a C program to display the output of expressions like <,>,==,!=,||,&&.
*/

#include<stdio.h>

int main()
{
    int Num1,Num2;
    printf("Enter two numbers:");
    scanf("%d%d",&Num1,&Num2);
    if(Num1<Num2)   printf("Num1 is less than Num2");
    printf("\nOutput of Num1 <  Num2 is : %d",Num1 <  Num2);
    printf("\nOutput of Num1 >  Num2 is : %d",Num1 >  Num2);
    printf("\nOutput of Num1 == Num2 is : %d",Num1 == Num2);
    printf("\nOutput of Num1 != Num2 is : %d",Num1 != Num2);
    printf("\nOutput of Num1 && Num2 is : %d",Num1 && Num2);
    printf("\nOutput of Num1 || Num2 is : %d",Num1 || Num2);
    printf("\n--------------------------------------------\n");
    return 0;
}
