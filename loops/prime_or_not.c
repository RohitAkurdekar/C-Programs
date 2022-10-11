/*
    check whether numbver is prime or not
*/
#include<stdio.h>
int main()
{
    int iNum,i;
    printf("Enter a number: ");
    scanf("%d",&iNum);

    for(i=2; i<iNum; i++)
    {
        if(iNum%i==0)
        {            break;        }
    }
    if(iNum==i)        printf("%d is prime number",iNum);
    else               printf("%d is not a prime number",iNum);
}