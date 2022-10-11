// leap year if yr /4 && /100 && /400

#include<stdio.h>

int main()
{
    int year;
    printf("Enter an year: ");
    scanf("%d",&year);
    if(!(year%100 && year%400  && year%4))    printf("year is a leap year.");
    else       printf("year is not a leap year.");
    printf("\n---------------------\n");
    return 0;
}