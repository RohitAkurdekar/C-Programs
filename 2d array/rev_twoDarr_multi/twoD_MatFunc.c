#include"twoD_MatFunc.h"

/***************************************************************
 * @name void vAcceptArray(int (**arr),int *iRow,int *iCol)
 * @date 28/sept/2022
 * @brief Accept array elements
 * @test ok
 * @param **int pointer of array
 * @param *int pointer of variable ROW
 * @param *int pointer of variable COLUMN
***************************************************************/
void vAcceptArray(int (**arr),int *iRow,int *iCol)
{
    printf("\nMatrix size %dx%d\n",*iRow,*iCol);
    // accept array
    for (int i = 0; i < *iRow; i++)
    {
        printf("\nEnter %d row elements: ",i);
        for (int j = 0; j < *iCol; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}
/***************************************************************
 * @name void vDisplayArray(int (**arr),int *iRow,int *iCol)
 * @date 28/sept/2022
 * @brief Display array elements
 * @test ok
 * @param **int pointer of array
 * @param *int pointer of variable ROW
 * @param *int pointer of variable COLUMN
***************************************************************/
void vDisplayArray(int (**arr),int *iRow,int *iCol)
{
    // Display array
    printf("\nElements of matrix:\n");
    for (int i = 0; i < *iRow; i++)
    {
        for (int j = 0; j < *iCol; j++)
        {
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n--------------------------\n");
}

/***************************************************************
 * @name int** iMemoryAlloc(int (**arr),int *iRow,int *iCol)
 * @date 28/sept/2022
 * @brief Allocate memory to pointer and return memory
 * @test ok
 * @param **int pointer of array
 * @param *int pointer of variable ROW
 * @param *int pointer of variable COLUMN
 * @returns **int pointer to allocated memory
***************************************************************/
int** iMemoryAlloc(int (**arr),int *iRow,int *iCol)
{
    printf("\nEnter the size of ROW: ");
    scanf("%d",iRow);
    printf("\nEnter the size of COLUMN: ");
    scanf("%d",iCol);

    arr = (int**) malloc(sizeof(int*)*(*iRow));

    for (int i = 0; i < *iRow; i++)
    {
        arr[i] = (int*) malloc(sizeof(int)*(*iCol));
    }
    return arr;
}

/***************************************************************
 * @name void  vFreeMemory  (int (**arr),int *iRow,int *iCol)
 * @date 28/sept/2022
 * @brief Free allocated memory for ROW and COLUMN
 * @test ok
 * @param **int pointer of array
 * @param *int pointer of variable ROW
 * @param *int pointer of variable COLUMN
***************************************************************/
void  vFreeMemory  (int (**arr),int *iRow,int *iCol)
{
    if(arr!=NULL)
    {
        for (int i = 0; i < *iRow; i++)
        {
            if (arr[i]!=NULL)
            {   free(arr[i]);            }
        }
        free(arr);
    }
}

/***************************************************************
 * @name void vDisplayMenu(void)
 * @date 29/sept/2022
 * @brief Display menu
 * @test 
***************************************************************/
void vDisplayMenu(void)
{
    printf("\n1.Addition of two matrix");
    printf("\n2.Subtraction of two matrix");
    printf("\n3.Transpose of a matrix");
    printf("\n4.Symmetric matrix or not?");
    printf("\nPlease enter your choice: ");
}


/***************************************************************
 * @name int** iAcceptMatric(int **Matrix,int *iRow,int *iCol)
 * @date 29/sept/2022
 * @brief Accept matrix
 * @test 
 * @param **int pointer of array
 * @param *int pointer of variable ROW
 * @param *int pointer of variable COLUMN
 * @returns int**
***************************************************************/
int** iAcceptMatric(int **Matrix,int *iRow,int *iCol)
{

    // --------------- Accept a matrix ---------------------------
    if (Matrix!=NULL){ vAcceptArray(Matrix,iRow,iCol); }    // To Accept arr elements
    else
    { 
        Matrix =  iMemoryAlloc(Matrix,iRow,iCol);           // To Allocate a dynamic memory
        vAcceptArray(Matrix,iRow,iCol);                  // To Accept arr elements
    }
    return Matrix;
}
// Forced memory allocation
int** iForcedMemoryAlloc(int (**arr),int *iRow,int *iCol)
{
    arr = (int**) malloc(sizeof(int*)*(*iRow));
    
    for (int i = 0; i < *iRow; i++)
    {
        arr[i] = (int*) malloc(sizeof(int)*(*iCol));
    }
    return arr;
}