/*
    do while example
*/
#include<stdio.h>
int main()
{
    char choice;
    do
    {
        /* Enter data here */
        printf("\n----------------------------------\n");
        printf("\n Do you want to continue...\n");
        scanf("%c ",&choice);
    } while (choice == 'y' || choice == 'Y');

    return 0;
}