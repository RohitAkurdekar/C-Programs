/************************************************************************************
 * @name employee DB using file 
 * @date 10/oct/2022
 * @brief Save employee NAME,id,PRN
************************************************************************************/
#include<stdio.h>

/***************************************************
 * @name typedef struct emp_head -> EMPLOYEE
 * @date 10/oct/2022
 * @brief Structure of employee DB
***************************************************/
typedef struct emp_head
{
    int iId;
    char cName[25];
    float fSalary;
}EMPLOYEE;

// ------------------ functions ---------------------------

void vDisplayMenu(void);
FILE* FileOpen(FILE *fPtr);
FILE* FileOpenAppend(FILE *fPtr);
FILE* ReadFile(FILE *fPtr);
FILE* WriteInFile(FILE *fPtr);
