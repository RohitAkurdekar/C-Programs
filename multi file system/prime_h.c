/***********************************************************************
 * @name prime func
 * @date 23/sept/2022
 * @details prints whether number is prime or not?
**********************************************************************/
#include"prime_h.h"

/**********************************************************
 * @name- void isPrimeNo(int iNum)
 * @date 24/sept/2022.
 * tested-ok
 * @details This function will print whether number is prime or not
 * @param int number to be reverse
**********************************************************/
void isPrimeNo(int iNum)
{
    int i;
    for( i=2; i<iNum; i++)
    {
        if(iNum%i==0)        {            break;        }
    }
    if(iNum==i)        printf("%d is prime number",iNum);
    else               printf("%d is not a prime number",iNum);
}
