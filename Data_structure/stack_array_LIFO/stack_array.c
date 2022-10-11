/************************************************************************
 * @name stack using array
 * @date 04/oct/2022
 * @brief Implement a stack using array
 * LIFO
*************************************************************************/
#include"stack_arr_header.h"

int main()
{
    printf("\n----------- LIFO --------------------\n");
    char cont;
    int choice=0;
    Stack_arr stack1;

    stack1.iTop = -1;

    stack1.iArr = ptrMemAlloc(&stack1);
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
    
    printf("\n-------------------- End of Code ------------------------\n");
    return 0;
}