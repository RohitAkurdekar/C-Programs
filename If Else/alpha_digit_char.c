/****************************************************************
 * Tested - OK
 *  Check whether input is a small letter or capital letter or number or a special char
 * A-Z  65-90
 * a-z  97-122
 * 0-9  48-57
 * spcl 0-47,58-64,91-96,123-127
**********************************************************************/
#include<stdio.h>

int main()
{
    char input;
    int ascii;
    printf("Enter character: ");
    scanf("%c",&input);
    ascii = (int)input;
    if(ascii>=65 && ascii<=90)        printf("%c is a capital letter",input);     // 65-90
    else if(ascii>=97 && ascii<=122)  printf("%c is a small letter",input);       // 97-122
    else if(ascii>=48 && ascii<=57)   printf("%c is a digit",input);              // 48-57
    else                              printf("%c is a special symbol",input);     // 0-47,58-64,91-96,123-127
    printf("\n----------------------------------------------\n");
    return 0;
}