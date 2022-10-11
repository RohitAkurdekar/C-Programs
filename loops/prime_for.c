// print all odd, even and prime numbers between 1 - 50

#include<stdio.h>
int main()
{
    int count;
    printf("\n---------Odd numbers between 1-50------------\n");
    for (int i = 1; i < 51; i++)
    {
        if(i%2) printf("%d\t",i);
    }
    printf("\n---------Even numbers between 1-50------------\n");
    for (int i = 1; i < 51; i++)
    {
        if((i%2)==0) printf("%d\t",i);
    }
    printf("\n---------Prime numbers between 1-50------------\n");
        for(int i=1; i<=260; i++)
        {
            for(int j=2; j<i; j++)
            {
            if(i%j==0)
            {
                count++;
                break;
            }
            }
            if(count==0 && i!=1)
                printf("%d\t", i);
            count = 0;
        }
    printf("\n--------------------------------------------------------------\n");
    return 0;
}