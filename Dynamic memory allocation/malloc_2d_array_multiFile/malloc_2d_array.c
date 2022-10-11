// gcc -o malloc_2d_array *.c
/****************************************************************************
 * @name malloc for 2d array
 * @date 28/sept/2022
 * @details Dynamic memory allocation for 2D array
*****************************************************************************/
#include"malloc_header.h"
// ---------------------------- main() ------------------------------------
int main()
{
    int **arr = NULL;
    int iRow,iCol;
    char ch;
    do
    {
        int choice;
        printf("\n1.Accept matrix elements\n2.Display matrix elements\n3.Delete matrix");
        printf("\nenter choice:");
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
            {
                if (arr!=NULL){ vAcceptArray(arr,&iRow,&iCol); }    // To Accept arr elements
                else
                { 
                    arr =  iMemoryAlloc(arr,&iRow,&iCol);           // To Allocate a dynamic memory
                    vAcceptArray(arr,&iRow,&iCol);                  // To Accept arr elements
                }
            }
            break;
            case 2:
            {
                if (arr!=NULL){  vDisplayArray(arr,&iRow,&iCol);}   // To Display arr elements 
                else          {  printf("Empty array...");      }          
            }
            break;
            case 3:
            {
                vFreeMemory(arr,&iRow,&iCol);   arr = NULL;         // To free allocated memory
            }
            break;
            default:
                break; 
        }
        printf("\nDo you want to continue..........?y/n\n");
        scanf(" %c",&ch);
    } while (ch == 'y');
    
    vFreeMemory(arr,&iRow,&iCol);      arr = NULL;         // To free allocated memory

    printf("\n----------------------------------------------------\n");
    return 0;
}
