/**********************************************************************
 * @name functions.c
 * @date 01/oct/2022
 * @brief contains function definations
**********************************************************************/
#include"book_head.h"


/***************************************************************
 * @name void vAcceptBookDetails (BOOK *book)
 * @date 01/oct/2022
 * @brief Accept values of defined structure
 * @test ok
 * @param struct* pointer of structure object
 * @returns none
***************************************************************/
void vAcceptBookDetails (BOOK *book)
{
    printf("\n-------------------------------------------\n");
    printf("Enter name  of book : ");
    scanf("%s",&book->cName);
    printf("Enter pg no of book : ");
    scanf("%d",&book->iPg_no);
    printf("Enter price of book : ");
    scanf("%f",&book->fPrice);
}

/***************************************************************
 * @name void vDisplayBookDetails(BOOK *book)
 * @date 01/oct/2022
 * @brief Display values of defined structure
 * @test ok
 * @param struct* pointer of structure object
 * @returns none
***************************************************************/
void vDisplayBookDetails(BOOK *book)
{
    printf("\n-------------------------------------------\n");
    printf("\nName  of book : %s",book->cName);
    printf("\nPg No of book : %d",book->iPg_no);
    printf("\nPrice of book : %.2f",book->fPrice);
}


/***************************************************************
 * @name BOOK* scAllocateMem(BOOK *book)
 * @date 01/oct/2022
 * @brief Allocate a memory
 * @test 
 * @param struct* pointer of structure object
 * @returns struct* pointer of structure object
***************************************************************/
BOOK* scAllocateMem(BOOK *book, int number_book)
{
    book = (BOOK*) malloc(sizeof(BOOK)*number_book);
    return book;
}