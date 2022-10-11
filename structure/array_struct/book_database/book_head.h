/**********************************************************************
 * @name header
 * @date 01/oct/2022
 * @brief contains library files and declaration
**********************************************************************/
#ifndef _BOOK_HEAD_
#define _BOOK_HEAD_

#include<stdio.h>
#include<stdlib.h>

/***************************************************************
 * @name typedef struct book
 * @date 01/oct/2022
 * @brief Structure for book info
 * @test ok
 * @param struct* pointer of structure object
 * @returns none
 * @note used typedef to simplify 'struct book' into 'book'
***************************************************************/
typedef struct book
{
    int iPg_no;
    char cName[20];
    float fPrice;
}BOOK;


void vAcceptBookDetails (BOOK *book);
void vDisplayBookDetails(BOOK *book);
BOOK* scAllocateMem(BOOK *book, int number_book);

#endif