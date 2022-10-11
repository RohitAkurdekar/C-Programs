/***************************************************************************
 * @name stack using array header file
 * @date 04/oct/2022
 * @brief func definations
**************************************************************************/

#include"stack_arr_header.h"

/***************************************************************
 * @name void vDisplayMenu(void)
 * @date 04/oct/2022
 * @brief Display Menu
 * @test ok
 * @param none
 * @returns none
***************************************************************/
void vPush(Stack_arr *Stack)
{
    if((Stack->iTop<Stack->iMaxSize))
    {
        printf("\nEnter a value: ");
        // Stack->iTop++;
        scanf("%d",&Stack->iArr[++Stack->iTop]);    
        printf("\nValue added.....");
    }
    else printf("\nStack overflowed....");
}
/***************************************************************
 * @name void  vPop(Stack_arr *Stack)
 * @date 04/oct/2022
 * @brief POP the element from stack
 * @test ok
 * @param Stack_arr* pointer of stack
 * @return none
***************************************************************/
void  vPop(Stack_arr *Stack)
{
    if ((Stack->iTop>=0))
    {
        printf("\nRemoved value: %d",Stack->iArr[Stack->iTop--]);
        // Stack->iTop--;
    }
    else    printf("\nStack is empty");
}

/***************************************************************
 * @name void vDisplayMenu(void)
 * @date 04/oct/2022
 * @brief Display Menu
 * @test ok
 * @param none
 * @returns none
***************************************************************/
void vDisplayMenu(void)
{
    printf("\n----------------- Menu ------------------------\n");
    printf("\n1.PUSH");
    printf("\n2.POP");
    printf("\nEnter choice: ");
}


/***************************************************************
 * @name Stack_arr* ptrMemAlloc(Stack_arr *sPtr)
 * @date 04/oct/2022
 * @brief Allocate a memory to array
 * @test ok
 * @param none
 * @returns pointer to allocated memory 
***************************************************************/
Stack_arr* ptrMemAlloc(Stack_arr *sPtr)
{
    printf("\nEnter max size of stack: ");
    scanf("%d",&sPtr->iMaxSize);
    sPtr->iMaxSize--;
    return (int*) malloc(sizeof(int)*(sPtr->iMaxSize));
}