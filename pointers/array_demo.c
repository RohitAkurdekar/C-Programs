/***********************************************************************
 * @name array demo
 * @date 24/sept/22
 * 
************************************************************************/
#include<stdio.h>

/***************************************************************
 * @name void vPrintInt(int iNum)
 * @date 24/sept/2022
 * @details print received value
 * @test ok
 * @param int value to be printed
***************************************************************/
void vPrintInt(int iNum)
{
    printf("\t%d",iNum);
};
/***************************************************************
 * @name void vPrintFloat(float iNum)
 * @date 24/sept/2022
 * @details print received value
 * @test ok
 * @param float value to be printed
***************************************************************/
void vPrintFloat(float fNum)
{
    printf("\t%.2f",fNum);
};

/***************************************************************
 * @name void vPrintArray(int iNum)
 * @date 24/sept/2022
 * @details print received value
 * @test ok
 * @param int value to be printed
***************************************************************/
void vPrintArray()
{

};

int main()
{
    int arr1[5]={5,6,4,5,2};
    int arr2[]={5,6,4,5,2};
    float arr3[]={5.5,6.4,4.7,5,5.2};
    int sum=0;


    // printf("size of array is %ld",sizeof(&arr));
    // printf("\nsize of array is %ld",sizeof(arr));

    // printf("\nEnter values: ");
    // for (int i = 0; i < (sizeof(arr1)/sizeof(int)); i++)
    // {
    //     scanf("%d",&arr[i]);
    // }

    int size_Array1 = sizeof(arr1)/sizeof(int);
    int size_Array2 = sizeof(arr2)/sizeof(int);
    int size_Array3 = sizeof(arr3)/sizeof(int);

    printf("\nvalues of arr1:");
    for (int i = 0; i < size_Array1; i++)
    {
        vPrintInt(arr1[i]);
        // printf("\t%d",arr1[i]);
        // sum+=arr[i];
    }
    printf("\n-----------------------------------\n");
    printf("\nvalues of arr2:");
    for (int i = 0; i < size_Array2; i++)
    {
        vPrintInt(arr2[i]);
        // printf("\t%d",arr2[i]);
        // sum+=arr[i];
    }
    printf("\n-----------------------------------\n");
    printf("\nvalues of arr3:");
    for (int i = 0; i < size_Array1; i++)
    {
        vPrintFloat(arr3[i]);
        // printf("\t%.2f",arr3[i]);
        // sum+=arr[i];
    }
    printf("\n-----------------------------------\n");
    return 0;
}

