/**********************************************************************
 * @name book main
 * @date 01/oct/2022
 * @brief Write a C program to accept and display book information
          using functions, struct, pointer
**********************************************************************/
#include"book_head.h"

int main()
{
    int number_book=1;
    printf("Enter total number of books: ");
    scanf("%d",&number_book);
    // Objects of structure named BOOK
    BOOK books[number_book];
// ------- Accept Book Details -------------------------
    for (int i = 0; i < number_book; i++)
    {
        vAcceptBookDetails(&books[i]);
    }
    
// ------- Display Book Details -------------------------
    printf("\n------------ Printing book details ------------\n");
    
    for (int i = 0; i < number_book; i++)
    {
        vDisplayBookDetails(&books[i]);
    }
    
    printf("\n----------------- End of Code --------------------\n");
    return 0;
}