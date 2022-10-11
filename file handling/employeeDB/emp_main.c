/************************************************************************************
 * @name employee DB using file 
 * @date 10/oct/2022
 * @brief Save employee NAME,id,PRN
************************************************************************************/
#include"emp_head.h"
// ------------------- main() ---------------------------------
int main()
{
    int choice;
    char cont;
    FILE *fPtr;
    do
    {
        vDisplayMenu();
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
           fPtr = WriteInFile(fPtr);
            break;
        
        case 2:
            ReadFile(fPtr);
            break;
        
        default:
            break;
        }
        printf("\nDo you want to continue..................?? y/n ");
        scanf(" %c",&cont);
    } while (cont == 'y');
    
    printf("\n-------------------- END OF CODE -------------------------------------\n");
    return 0;
}