/*************************************************************************
 * @name reverse
 * @date 23/sept/22
 * @details Returns reverse of number
************************************************************************/
#include"rev_h.h"

/**********************************************************
 * @name- int iReverse(int iNum)
 * @date 24/sept/2022
 * tested-
 * @details This function will return the reverse of a number
 * @param int number to be reverse
**********************************************************/
int iReverse(int iNum)
{
    int rem=0,rev=0,res=0;
    while (iNum!=0)     
        {
            rem=iNum%10;        // to get last digit of a number
            res+=rem;           // add digits of a number
            rev=rev*10+rem;     // to shift last digit on next place and add new number in last
            iNum/=10;       // to remove last digit from a number
        }
    return rev;
}
