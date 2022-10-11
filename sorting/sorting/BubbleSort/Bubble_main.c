/**********************************************************************************
 * @name Sorting technique
 * @date 10/oct/2022
 * @brief 
**********************************************************************************/
#include"sort_head.h"

// --------------------- main() --------------------------------------------
int main()
{
    int arr[5];
    int sizeArr = sizeof(arr)/sizeof(int);
    char cont;
    int choice;
    do
    {
        printf("\nEnter %d elements of array: ",sizeArr);

        for (int i = 0; i < sizeArr; i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("\nBefore sorting......");
        vDisplayArr(&arr,sizeArr);

        vDisplayMenu();
        scanf("%d",&choice);

        switch (choice)
        {
            case 1: // Bubble sort
                vBubbleSort(&arr,sizeArr);
                break;

            case 2: // Simple selection sort
                vSimpleSort(&arr,sizeArr);
                break;

            default:
                printf("\nInvalid choice.");
                break;
        }

        printf("\nAfter sorting......");
        vDisplayArr(&arr,sizeArr);

        printf("\nDo you want to continue...?????? y/n ");
        scanf(" %c",&cont);
    } while (cont == 'y');
    
    printf("\n-------------------------------------------------------\n");
    return 0;
}


// -------------------- Display arr --------------------
void vDisplayArr(int *arr,char sizeArr)
{
    printf("\nElements are: ");
    for (int i = 0; i < sizeArr; i++)
    {        printf("%d\t",arr[i]);    }
    
}
// -------------------- Display menu -------------------
void vDisplayMenu(void)
{
    printf("\n1.Bubble sort");
    printf("\n2.Simple Selection sort");
    printf("\nEnter your choice: ");
}