/*************************************************************
 * @date 24/sept/2022
 * @name fibbonaci series with limit
 * 0 1 1 2 3 5 8
**************************************************************/
#include"fib_h.h"

void vPrintFib(int limit)
{
    int iNew=1,iOld=0,iNext=0;
    printf("0 1");
    for (int iNum = 0; iNum < limit-2; iNum++)
    {
        iNext = iNew + iOld;
        printf(" %d",iNext);
        iOld = iNew;
        iNew = iNext;
    }
}
