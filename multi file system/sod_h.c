/*************************************************************************
 * @name sum of digits
 * @date 23/sept/2022
 * @details returns sum of digits of a number
*********************************************************************/
#include"sod_h.h"

/**********************************************************
 * @name- int iSumOfDigits(int iNum)
 * @date 24/sept/2022
 * tested-
 * @details This function will return the sum of digits of a number
 * @param int number of which digits needs to be added
**********************************************************/
int iSumOfDigits(int iNum)
{
    int rem=0,rev=0,res=0;
    while (iNum!=0)     
        {
            rem=iNum%10;        // to get last digit of a number
            res+=rem;           // add digits of a number
            rev=rev*10+rem;     // to shift last digit on next place and add new number in last
            iNum/=10;       // to remove last digit from a number
        }
    return res;
}
