// Read three numbers and find biggest of it

#include<stdio.h>

int main()
{
    int Num1,Num2,Num3;
    printf("Enter 3 numbers:");
    scanf("%d%d%d",&Num1,&Num2,&Num3);
    if(Num1>Num2 && Num1>Num3)          printf("Number: %d is biggest.",Num1);
    else if(Num2>Num1 && Num2>Num3)     printf("Number: %d is biggest.",Num2);
    else                                printf("Number: %d is biggest.",Num3);
    printf("\n-----------------------------\n");
    if(Num1<Num2 && Num1<Num3)          printf("Number: %d is smallest.",Num1);
    else if(Num2<Num1 && Num2<Num3)     printf("Number: %d is smallest.",Num2);
    else                                printf("Number: %d is smallest.",Num3);
    printf("\n-----------------------------\n");
    return 0;
}