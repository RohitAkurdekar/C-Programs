/***********************************************************
 * @name String
 * @date 25/sept/2022
 * char array vs string
***********************************************************/
#include<stdio.h>

// ---------------- main() -------------------------------
int main()
{
    // --------------------- char array ---------------------
    char cCharArray[] = {'D','I','O','T','\0'} ;
    int i=0;
    while (cCharArray[i] !='\0')
    {
        printf("%c",cCharArray[i]);
        i++;
    }
    printf("\ni: %d",i);
    // ----------------------- String --------------------------------
    char cString[] = "DIOT";
    printf("\n%s\n",cString);
    i=0;
    while (cCharArray[i] !='\0')
    {
        printf("%c",cCharArray[i]);
        i++;
    }
    printf("\ni: %d",i);
    printf("\n------------------------------------------\n");
    return 0;
}