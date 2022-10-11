/*******************************************************
 * @name reverse of 2D array main
 * @date 29/sept/2022
 * @brief 
 * 1. Addition & Subtraction of two matrices
 * 2. Transpose of matrix - ROW becomes COLUMN
*******************************************************/
#include"twoD_MatFunc.h"

int main()
{
    int **Matrix1=NULL, **Matrix2=NULL,**resultMatrx=NULL;
    int iRow1=0,iCol1=0,iRow2=0,iCol2=0;
    char cont;
    int menuChoice=0;

    // --------------- Accept 1st matrix ---------------------------
    Matrix1 = iAcceptMatric(Matrix1,&iRow1,&iCol1);

    vDisplayArray(Matrix1,&iRow1,&iCol1);           

    do
    {
        // ---------------- Display Menu --------------------------------
        vDisplayMenu();
        scanf("%d",&menuChoice);
        switch (menuChoice)
        {   // Addition of matrix
            case 1:
            {
                // --------------- Accept 2nd matrix ---------------------------
                Matrix2 = iAcceptMatric(Matrix2,&iRow2,&iCol2);
                if ((iRow1==iRow2)&&(iCol1==iCol2))
                {
                    // To Allocate a dynamic memory to result matrix
                    resultMatrx = iForcedMemoryAlloc(resultMatrx,&iRow1,&iCol1);
                    vAddMatrix(resultMatrx,Matrix1,Matrix2,&iRow1,&iCol1);
                    printf("\nResult of addition is: ");
                    vDisplayArray(resultMatrx,&iRow1,&iCol1);
                    vFreeMemory(resultMatrx,&iRow1,&iCol1);
                }
                else    printf("Matrix size do not match.....");
                
            }
                break;
            // Subtraction of matrix
            case 2:
            {
                // --------------- Accept 2nd matrix ---------------------------
                Matrix2 = iAcceptMatric(Matrix2,&iRow2,&iCol2);if ((iRow1==iRow2)&&(iCol1==iCol2))
                {
                    // To Allocate a dynamic memory to result matrix
                    resultMatrx = iForcedMemoryAlloc(resultMatrx,&iRow1,&iCol1);
                    vSubMatrix(resultMatrx,Matrix1,Matrix2,&iRow1,&iCol1);
                    printf("\nResult of subtraction is: ");
                    vDisplayArray(resultMatrx,&iRow1,&iCol1);
                    vFreeMemory(resultMatrx,&iRow1,&iCol1);
                }
                else    printf("Matrix size do not match.....");
                
            }
                break;
            // Transpose of matrix
            case 3:
            {
                // To Allocate a dynamic memory to result matrix
                resultMatrx = iForcedMemoryAlloc(resultMatrx,&iCol1,&iRow1);
                vTransposeMat(Matrix1,resultMatrx,&iRow1,&iCol1);
                vDisplayArray(resultMatrx,&iCol1,&iRow1);
            }
                break;
            // Symmetric of matrix
            case 4:
            {
                if (iRow1==iCol1)
                {
                    // To Allocate a dynamic memory to result matrix
                    resultMatrx = iForcedMemoryAlloc(resultMatrx,&iCol1,&iRow1);
                    vTransposeMat(Matrix1,resultMatrx,&iRow1,&iCol1);
                    if(isSymmetricMat(Matrix1,resultMatrx,&iRow1,&iCol1)) 
                        printf("Matrix is symmetric");
                }
                else    printf("Matrix is not symmetric");
            }
                break;
            
            default:
                printf("Invalid option");
                break;
        }
        printf("\nDo you want to continue....? y/n ");
        scanf(" %c",&cont);
    } while (cont == 'y');
    
    printf("\n--------------------------------\n");
    return 0;
}
