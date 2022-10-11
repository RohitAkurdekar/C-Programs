#include"add_twoD_head.h"

/***************************************************************
 * @name void vAddMatrix(int **resultMat,int **sourceMat1,int **sourceMat2,int *iRow,int *iCol)
 * @date 29/sept/2022
 * @brief Add two matrices
 * @test ok
 * @param **int pointer of destination array
 * @param **int pointer of source array 1
 * @param **int pointer of source array 2
 * @param *int pointer of variable ROW
 * @param *int pointer of variable COLUMN
***************************************************************/
void vAddMatrix(int **resultMat,int **sourceMat1,int **sourceMat2,int *iRow,int *iCol)
{
    for (int i = 0; i < (*iRow); i++)
    {
        for (int j = 0; j < (*iCol); j++)
        {
            resultMat[i][j] = sourceMat1[i][j] + sourceMat2[i][j];
        }
    }
}

/***************************************************************
 * @name void vSubMatrix(int **resultMat,int **sourceMat1,int **sourceMat2,int *iRow,int *iCol)
 * @date 29/sept/2022
 * @brief Subtract two matrices
 * @test ok
 * @param **int pointer of destination array
 * @param **int pointer of source array 1
 * @param **int pointer of source array 2
 * @param *int pointer of variable ROW
 * @param *int pointer of variable COLUMN
***************************************************************/
void vSubMatrix(int **resultMat,int **sourceMat1,int **sourceMat2,int *iRow,int *iCol)
{
    for (int i = 0; i < (*iRow); i++)
    {
        for (int j = 0; j < (*iCol); j++)
        {
            resultMat[i][j] = sourceMat1[i][j] - sourceMat2[i][j];
        }
    }
    
}