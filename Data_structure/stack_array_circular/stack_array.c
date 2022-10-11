/************************************************************************
 * @name stack using array
 * @date 04/oct/2022
 * @brief Implement a stack using array
 * FIFO
*************************************************************************/
#include"stack_arr_header.h"

int main()
{
    printf("\n----------- FIFO --------------------\n");
    char cont;
    int choice=0;
    
    Stack_arr stack1;           // Stack object

    stack1.iArr = NULL;         // Init array to NULL
    stack1.iTop = -1;           // Initialize TOP pointer to -1
    // Dynamic memory allocation for array
    stack1.iArr = ptrMemAlloc(&stack1);

    stack1.iNFull= stack1.iMaxSize;
    stack1.inEmpty = 0;
    stack1.iPopPtr=0;
    do
    {
        vDisplayMenu();
        scanf("%d",&choice);
        switch (choice)
        {
            case 1:
                vPush(&stack1);
                break;
            
            case 2:
                vPop(&stack1);
                break;
            
            default:
                printf("\nInvalid choice");
                break;
        }
        printf("\nDo you want to continue? y/n ");
        scanf(" %c",&cont);
    } while (cont == 'y' || cont == 'Y' );
    
    // free allocated memory
    if(stack1.iArr!=NULL)
    {        free(stack1.iArr);       stack1.iArr = NULL;    }
    
    printf("\n------------------ End of Code --------------------------\n");
    return 0;
}
