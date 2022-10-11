/******************************************************************************
 * @name assignment pg316 I[b]
 * @date 28/sept/2022
 * @details Write a C program to check arr[0]== arr[n-1], arr[1]== arr[n-2] and so on
            if arr contains n elements
*******************************************************************************/
#include<stdio.h>
#include<stdlib.h>

/***************************************************************
 * @name char cCheckArray(int *iPtr, int *arr_size)
 * @date 25/sept/2022
 * @details Check the given condition matches or not?
 * @test ok
 * @param *int pointer of array
 * @param *int pointer of varSize of array
 * @cond arr[0]== arr[n-1], arr[1]== arr[n-2] and so on
***************************************************************/
char cCheckArray(int *iPtr, int *arr_size)
{
    char state=0;
    for (int i = 0; i < (*arr_size)/2; i++)
    {
        if (iPtr[i]!=iPtr[(*arr_size)-i-1])
        {      state =1;   break;        }
    }
    return state==0?'t':'f'    ;
};
/***************************************************************
 * @name void vDisplayArray(int *iPtr)
 * @date 25/sept/2022
 * @details display array elements
 * @test ok
 * @param *int pointer of array
***************************************************************/
void vDisplayArray(int *iPtr,int* arr_size)
{
    printf("\nValues of array %d:", *arr_size);
    for (int i = 0; i < (*arr_size); i++)
    {        printf("\t%d",(iPtr[i]));    }
};
/***************************************************************
 * @name void vAcceptArray(int *iPtr)
 * @date 25/sept/2022
 * @details accept 5 elements and store in array declared in main()
 * @test ok
 * @param *int pointer of array
***************************************************************/
void vAcceptArray(int *iPtr,int *a_size)
{
    printf("\nEnter %d numbers:",*a_size);
    for (int i = 0; i < (*a_size); i++)
    {
        scanf("%d",&iPtr[i]);
    }
    
    // vDisplayArray(iPtr,a_size);
};
// -------------------------- main() ----------------------------------------
int main()
{
    int *arr =NULL;
    int arr_size;
    printf("Enter size of array: ");
    scanf("%d",&arr_size);

    // ------------- Dynamic memory allocation ----------------------------------
    arr = (int*) malloc((int)sizeof(int)*(arr_size));

    vAcceptArray(arr,&arr_size);        // accpet data and store it in array
    vDisplayArray(arr,&arr_size);       // DISPLAY ARRAY ELEMENTS

    if (cCheckArray(arr,&arr_size)=='t')    printf("\nArray is pallindrome.");
    else    printf("\nArray is not pallindrome");
    
    

    printf("\n---------------------------------------------\n");
    return 0;
}