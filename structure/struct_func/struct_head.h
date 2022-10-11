
#include<stdio.h>
#include<string.h>

// structure declaration
// ------- method 1 of typedef ----------------
/*****************************************************
 * @name struct Student_info
 * @date 01/oct/2022
 * @brief Create structure for student info 
 * @note typedef is used to avoid use of 'struct Student_info' again and again
 *       Instead we can use only 'Student_info'.
******************************************************/
typedef struct Student_info
{
    int iStudentPRN;
    char cName[15];
    float fPercentage; 
}Student_info;

// -------------- method 2 of typedef --------------
// typedef struct Student_info Student_info;
// Student_info scAccept(Student_info *StInfo);

void vAccept (Student_info *StInfo);
void vDisplay(Student_info *StInfo);