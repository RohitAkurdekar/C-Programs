/************************************************************************
 * @name Dynamic memory allocation
 * @date 27/sept/2022
 * @details
 * 
*************************************************************************/
/****************************************************************
 * find the name of memory leakage tools in c
 * how to find memory leakage in current file or in c
 * 
 * dynamic allocation for 2D array
*****************************************************************/


#include<stdio.h>
#include<stdlib.h>


int main()
{
    char ch;
    do
    {
        char* Name = NULL;

        int n_size;
        printf("Enter the Size/Length of array: ");
        scanf("%d",&n_size);
        // ------------------- Dynamic memory allocation ------------------------------
        Name = (char*) malloc(sizeof(int)*n_size);
        
        printf("Addr : %x\n",Name);
        printf("Enter the name: ");
        scanf("%s",Name);
        printf("Entered name is %s",Name);

        if(Name != NULL)  {  free(Name); Name = NULL; }

        printf("\nDo you want to continue.............? Y/N \n");
        scanf(" %c",&ch);
    }while (ch == 'y' || ch == 'Y');
    return 0;
}