/***************************************************************************
 * @name stack using array header file
 * @date 04/oct/2022
 * @brief Func and var declarations 
**************************************************************************/
#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

/***************************************************************
 * @name typedef struct stack_arr
 * @date 04/oct/2022
 * @brief Structure for stack
 * @test ok
 * @param none
 * @returns none
 * @note used typedef to simplify 'struct stack_arr' into 'Stack_arr'
***************************************************************/
typedef struct stack_arr
{
    int iTop;
    int *iArr;
    int iMaxSize;
}Stack_arr;

// ------------------ functions ------------------------------


void vPush(Stack_arr *Stack);

void vPop(Stack_arr *Stack);

void vDisplayMenu(void);

Stack_arr* ptrMemAlloc(Stack_arr *sPtr);

void vMoveStackElements(Stack_arr *sPtr);