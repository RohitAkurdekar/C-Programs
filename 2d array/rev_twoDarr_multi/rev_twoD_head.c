/*******************************************************
 * @name reverse of 2D array c
 * @date 29/sept/2022
 * @brief
*******************************************************/
#include"rev_twoD_head.h"
/***************************************************************
 * @name void vTransposeMat(int **sourceMat,int **destMat,int *iRow, int *iCol)
 * @date 29/sept/2022
 * @brief Transpose the matrix
 * @test ok
 * @param **int pointer of source array
 * @param **int pointer of destination array
 * @param *int pointer of variable ROW
 * @param *int pointer of variable COLUMN
***************************************************************/
void vTransposeMat(int **sourceMat,int **destMat,int *iRow, int *iCol)
{
    for (int i = 0; i < (*iRow); i++)
    {
        for (int j = 0; j < (*iCol); j++)
        {
            destMat[j][i] = sourceMat[i][j];
        }
    }
}


/***************************************************************
 * @name bool isSymmetricMat(int **sourceMat,int **destMat,int *iRow, int *iCol)
 * @date 29/sept/2022
 * @details Check whether matrix is symmetric or not
 * @test 
 * @param **int pointer of source array
 * @param **int pointer of destination array
 * @param *int pointer of variable ROW
 * @param *int pointer of variable COLUMN
***************************************************************/
bool isSymmetricMat(int **Matrix1,int **Matrix2,int *iRow, int *iCol)
{
    bool state=1;
    for (int i = 0; i < (*iRow); i++)
    {
        for (int j = 0; j < (*iCol); j++)
        {
            if (Matrix1[i][j]!=Matrix2[i][j])
            {    state = 0;    }
        }
    }
    return state;
}