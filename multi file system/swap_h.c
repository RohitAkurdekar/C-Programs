#include"swap_h.h"


/**********************************************************
 * @name- void vSwap(int iNum1,int iNum2)
 * @date 24/sept/2022
 * tested-
 * @details This function prints swapped number
 * @param int number of which digits needs to be added
**********************************************************/
void vSwap(int iNum1,int iNum2)
{
    int temp;
    printf("\n before swap:");
    printf("\na: %d       b: %d",iNum1,iNum2);
    temp = iNum1;
    iNum1 = iNum2;
    iNum2 = temp;
    printf("\n after swap:");
    printf("\na: %d       b: %d",iNum1,iNum2);
}
