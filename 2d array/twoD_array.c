/******************************************************
 * @name 2 d Array
 * @date 25/sept/2022
******************************************************/

/******************************************************************************
 * Row size= Row number * Total Number of column * sizeof(Array data type).
 * Column size = Column number * sizeof(Array data type).
******************************************************************************/

#include<stdio.h>

/***************************************************************
 * @name void vAccept_mat(int (*mat)[3])
 * @date 27/sept/2022
 * @details Accept matrix elements from console and store them in matrix addr
 * @test ok
 * @param int (*matrix_name)[column] 
***************************************************************/
void vAccept_mat(int (*mat)[3])
{
    for (int i = 0; i < 3; i++)
    {
        printf("Enter %d row elements:",(i+1));
        for (int j = 0; j < 3; j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
};
/***************************************************************
 * @name void vDisplay_mat(int (*mat)[3])
 * @date 27/sept/2022
 * @details Display matrix elements stored in matrix addr.
 * @test ok
 * @param int (*matrix_name)[column] 
***************************************************************/
void vDisplay_mat(int (*mat)[3])
{
    printf("Elements of matrix: ");
    for (int i = 0; i < 3; i++)
    {
        printf("\n");
        for (int j = 0; j < 3; j++)
        {
            printf(" %d ",mat[i][j]);
        }
    }

};
// ---------------- main() ------------------------------
int main()
{
    int iMatrix[3][3];
    // printf("size : %ld \n",sizeof(iMatrix));

    vAccept_mat(iMatrix);           // Accept  matrix elements
    vDisplay_mat(iMatrix);          // Display matrix elements

    printf("\n---------------------------------\n");
    return 0;
}