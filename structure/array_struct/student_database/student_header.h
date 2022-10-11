/**********************************************************************
 * @name functions.c
 * @date 01/oct/2022
 * @brief contains function definations
**********************************************************************/
#include<stdio.h>

/***************************************************************
 * @name typedef struct year_of_joining
 * @date 01/oct/2022
 * @brief Structure for book info
 * @test ok
 * @param none
 * @returns none
 * @note used typedef to simplify 'struct year_of_joining' into 'YoJ'
***************************************************************/
typedef struct year_of_joining
{
    int iDay,iMonth,iYear;
}YoJ;

/***************************************************************
 * @name typedef struct book
 * @date 01/oct/2022
 * @brief Structure for book info
 * @test ok
 * @param none
 * @returns none
 * @note used typedef to simplify 'struct student_details' into 'StudentDB'
***************************************************************/
typedef struct student_details
{
  int   iRollNo;
  char  cName[20];
  char  cCourse[20];
  char  cDept[20];
  YoJ   year_of_joining;
}StudentDB;

void vAcceptStudentInfo(StudentDB *sPtr);
void vDisplayStudentInfo(StudentDB *sPtr);

void vAcceptYear(StudentDB *sPtr, int totalStudents=1);

void vAcceptRollNo(StudentDB *sPtr, int totalStudents=1);

void vDisplayMenu(void);