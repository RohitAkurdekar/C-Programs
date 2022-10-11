/*
    swap two numbers using third variable and without using third variable.
*/
#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter number 1:");
    scanf("%d",&a);
    printf("Enter number 2:");
    scanf(" %d",&b);

    printf("Values before swapping \n a: %d     b: %d",a,b);
// using third variable
    printf("\nAfter swapping");
    c=a;
    a=b;
    b=c;
    printf("\nWith third variable");
    printf("\na: %d       b: %d",a,b);


    printf("\nWithout third variable");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\na: %d       b: %d",a,b);
    printf("\n");
    return 0;
}