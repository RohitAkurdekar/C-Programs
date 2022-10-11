/****************************************************************************
 * @name malloc for 2d array
 * @date 28/sept/2022
 * @details Dynamic memory allocation for 2D array
*****************************************************************************/
#include<stdio.h>
#include<stdlib.h>

void vAcceptArray (int (**arr),int *iRow,int *iCol);
void vDisplayArray(int (**arr),int *iRow,int *iCol);
void vMemoryAlloc (int (**arr),int *iRow,int *iCol);

int main()
{
    int **arr = NULL;
    int iRow,iCol;

    vMemoryAlloc(arr,&iRow,&iCol);
    vAcceptArray(arr,&iRow,&iCol);
    vDisplayArray(arr,&iRow,&iCol);

    printf("\n--------------------------\n");
    return 0;
}

void vAcceptArray(int (**arr),int *iRow,int *iCol)
{
    // accept array
    for (int i = 0; i < *iRow; i++)
    {
        printf("Enter %d row elements: ",i);
        for (int j = 0; j < *iCol; j++)
        {
            scanf("%d",&arr[i][j]);
        }
        
    }
}
void vDisplayArray(int (**arr),int *iRow,int *iCol)
{
    // Display array
    printf("\n--------------------------\n");
    for (int i = 0; i < *iRow; i++)
    {
        for (int j = 0; j < *iCol; j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
}

void vMemoryAlloc(int (**arr),int *iRow,int *iCol)
{

    printf("Enter the size of ROW: ");
    scanf("%d",iRow);
    printf("Enter the size of COLUMN: ");
    scanf("%d",iCol);

    arr = (int**) malloc(sizeof(int*)*(*iRow));

    for (int i = 0; i < *iRow; i++)
    {
        arr[i] = (int*) malloc(sizeof(int)*(*iCol));
    }
}