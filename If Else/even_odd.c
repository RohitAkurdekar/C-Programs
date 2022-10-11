// even or odd 
#include<stdio.h>

int main()
{

    int Num;
    printf("Enter number: ");
    scanf("%d",&Num);
    if(Num%2)   printf("\nNumber is odd");
    else        printf("\nNumber is even");
    printf("\n--------------------------------------------\n");
    return 0;
}