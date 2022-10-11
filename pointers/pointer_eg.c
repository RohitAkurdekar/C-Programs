/******************************************************************
 * @name size of pointer
 * @date 24/sept/2022
*******************************************************************/
//--------- header files -------------------------
#include<stdio.h>

int main()
{
    char  *cPtr; 
    int   *iPtr;
    float *fPtr;
    void  *vPtr;

    printf("\n-------------------------------------\n");
    printf("\nsize of char  ptr is %ld",sizeof(cPtr));
    printf("\nsize of int   ptr is %ld",sizeof(iPtr));
    printf("\nsize of float ptr is %ld",sizeof(fPtr));
    printf("\nsize of void  ptr is %ld",sizeof(vPtr));

    printf("\n-------------------------------------\n");
    return 0;
}