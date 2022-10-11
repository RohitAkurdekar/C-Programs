#include<stdio.h>
// ----------- function declaration ------------------------
void printName(char name[20]);

int main()
{
    // ------------ function call ------------------------
    printName("\nMOHSIN");
    printName("\nROHIT");
    printf("\nMOHSIN");
}
// ------------------------ function defination --------------------------
void printName(char name[20])
{
    printf("%s",name);
}