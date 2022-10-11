// accept number and print reverse of the number and sum of its digit
#include<stdio.h>

int main()
{
    char choice;
    do
    {
        int iNum=0,rem=0,rev=0,dummy=0,res=0;
        printf("Enter a number: ");
        scanf("%d",&iNum);
        dummy=iNum;             // temp var for display purpose
        while (iNum!=0)     
        {
            rem=iNum%10;        // to get last digit of a number
            res+=rem;           // to add digits
            rev=rev*10+rem;     // to shift last digit on next place and add new number in last
            iNum/=10;       // to remove last digit from a number
        }
        printf("Sum of digits of %d is %d",dummy,res);
        printf("\nReverse of %d is %d",dummy,rev);
        /* Enter data here */
        printf("\n----------------------------------\n");
        printf("\n Do you want to continue...\n");
        scanf(" %c",&choice);
    } while (choice == 'y' || choice == 'Y');

    
    printf("\n----------------------------------\n");
    return 0;
}