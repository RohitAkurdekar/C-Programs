/****************************************
 * @name array and pointer
 * @date 25/sept/2022
 * 
****************************************/
#include<stdio.h>

/***************************************************************
 * @name void vAcceptArray(int *iPtr)
 * @date 25/sept/2022
 * @details accept 5 elements and store in array declared in main()
 * @test ok
 * @param *int pointer of array
***************************************************************/
void vAcceptArray(int *iPtr)
{
    printf("Enter 5 numbers:");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&iPtr[i]);
    }
    
};
/***************************************************************
 * @name void vDisplayArray(int *iPtr)
 * @date 25/sept/2022
 * @details display array elements
 * @test ok
 * @param *int pointer of array
***************************************************************/
void vDisplayArray(int *iPtr)
{
    
    printf("\nValues of array:");
    for (int i = 0; i < 5; i++)
    {
        printf("\t%d",iPtr[i]);
    }
};
// --------------- main() -------------------------------------
int main()
{
    int arr[5];         // array declaration

    vAcceptArray(arr);  // calling of func
    vDisplayArray(arr); // calling of func

    printf("\n------------------------------------\n");
    return 0;
}