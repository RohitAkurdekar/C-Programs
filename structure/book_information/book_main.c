/**********************************************************************
 * @name book main
 * @date 01/oct/2022
 * @brief Write a C program to accept and display book information
          using functions, struct, pointer
**********************************************************************/
#include"book_head.h"

int main()
{
    // Objects of structure named BOOK
    BOOK b1, b2, b3, b4;

// ------- Accept Book Details -------------------------
    vAcceptBookDetails(&b1);
    vAcceptBookDetails(&b2);
    vAcceptBookDetails(&b3);
    vAcceptBookDetails(&b4);
// ------- Display Book Details -------------------------
    printf("\n------------ Printing book details ------------\n");
    vDisplayBookDetails(&b1);
    vDisplayBookDetails(&b2);
    vDisplayBookDetails(&b3);
    vDisplayBookDetails(&b4);
    
    printf("\n----------------- End of Code --------------------\n");
    return 0;
}