/*
    Accept the number and check whether number is positive or negative
*/

#include<stdio.h>

int main()
{
    int Num;
    printf("Enter number: ");
    scanf("%d",&Num);
    if (Num>0)                      // check whether number is positive
    {   printf("Number is positive.");    }
    else if(Num==0)                 // check whether number is zero
    {   printf("Number is zero.");    }
    else                            // number is negative
    {   printf("Number is negative.");    }

    
    printf("\n");   
    return 0;
}
