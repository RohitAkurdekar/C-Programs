/***********************************************************
 * @name String library functions
 * @date 25/sept/2022
************************************************************/
#include<stdio.h>
#include<string.h>

int main()
{
    char cString1[] = "DIOT";
    char cString2[] = "CDAC";
    char cDummy[10];

    printf("strlen  : %ld",strlen(cString1));
    printf("\nstrcpy: %s ",strcpy(cDummy,cString1));
    printf("\nstrcat: %s ",strcat(cDummy,cString2));

    printf("\n--------------------------------\n");
    return 0;
}