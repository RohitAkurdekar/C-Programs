/******************************************************************
 * @name pointer ex - swap
 * @date 24/sept/2022.
 * @test    ok
******************************************************************/
#include<stdio.h>
/***************************************************************
 * @name void vSwap(int *iNum1,int *iNum2)
 * @date 24/sept/2022
 * @details swap numbers
 * @test ok
 * @param *int pointer of number 1
 * @param *int pointer of number 2
***************************************************************/
void vSwap(int *iNum1,int *iNum2)
{
    int temp = *iNum1;
    *iNum1 = *iNum2;
    *iNum2 = temp;
};

/***************************************************************
 * @name int main()
 * @date 24/sept/2022
 * @details 
 * @test ok
***************************************************************/
int main()
{
    int iNum1=100,iNum2=200;
    printf("\n Before swap \n a: %d  b: %d",iNum1,iNum2);
    vSwap(&iNum1,&iNum2);
    printf("\n After  swap \n a: %d  b: %d",iNum1,iNum2);
    printf("\n-----------------------------------\n");

    return 0;
}