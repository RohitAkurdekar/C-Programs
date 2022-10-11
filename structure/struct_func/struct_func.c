/*******************************************************************
 * @name Structure examples using function
 * @date 01/oct/2022
 * @brief Examples related to Structure
********************************************************************/
#include"struct_head.h"

int main()
{
    Student_info  s1,s2,s3;                     // Objects of struct Student_info
    Student_info s4 = {4,"VAIBHAV",215.14};
/* 
// ----------------- Using pass by value -------------------------
// ------------ Accept data ---------------------
    printf("\nEnter details of student 1:\n");
    s1 = scAccept(s1);
    printf("\nEnter details of student 2:\n");
    s2 = scAccept(s2);
    printf("\nEnter details of student 3:\n");
    s3 = scAccept(s3);
*/

// ----------------- Using pass by addr i.e pointer -------------------------
    vAccept(&s1);
    vAccept(&s2);
    vAccept(&s3);

// ------------ Display data ---------------------
    vDisplay(&s1);
    vDisplay(&s2);
    vDisplay(&s3);   
    vDisplay(&s4);
    printf("\n------------ End of Code -------------------\n");     // End of Code
    return 0;
}
