/**********************************************************************
 * @name functions.c
 * @date 01/oct/2022
 * @brief contains function definations
**********************************************************************/
#include"student_header.h"

/***************************************************************
 * @name void vDisplayMenu(void)
 * @date 01/oct/2022
 * @brief Display menu
 * @test ok
 * @param none
 * @returns none
***************************************************************/
void vDisplayMenu(void)
{
    printf("\n*********** MENU ********************\n");
    printf("\n1.Display All info");
    printf("\n1.Display year wise names");
    printf("\n1.Display roll no wise info");
    printf("\nEnter choice: ");
}
/***************************************************************
 * @name void vAcceptBookDetails (BOOK *book)
 * @date 01/oct/2022
 * @brief Accept values of defined structure
 * @test ok
 * @param struct* pointer of structure object
 * @returns none
***************************************************************/
void vAcceptStudentInfo(StudentDB *sPtr)
{
    printf("Enter Roll no : ");
    scanf("%d",&sPtr->iRollNo);
    printf("Enter Name of Roll no - %d : ",sPtr->iRollNo);
    scanf("%s",&sPtr->cName);
    printf("Enter course of Roll no - %d : ",sPtr->iRollNo);
    scanf("%s",&sPtr->cCourse);
    printf("Enter department of Roll no - %d : ",sPtr->iRollNo);
    scanf("%s",&sPtr->cDept);

    printf("Enter Date of joining for %d [DD MM YYYY] ",sPtr->iRollNo);
    scanf("%d%d%d" ,&sPtr->year_of_joining.iDay ,&sPtr->year_of_joining.iMonth ,&sPtr->year_of_joining.iYear);

}
/***************************************************************
 * @name void vAcceptBookDetails (BOOK *book)
 * @date 01/oct/2022
 * @brief Display values of defined structure
 * @test ok
 * @param struct* pointer of structure object
 * @returns none
***************************************************************/
void vDisplayStudentInfo(StudentDB *sPtr)
{
    printf("\n------- Student details are: -----------------");
    printf("\nRoll no : %d",sPtr->iRollNo);
    printf("\nName    : %s",sPtr->cName);
    printf("\nCourse  : %s",sPtr->cCourse);
    printf("\nDept    : %s",sPtr->cDept);
    printf("\nJoined  : %d/%d/%d",sPtr->year_of_joining.iDay,sPtr->year_of_joining.iMonth,sPtr->year_of_joining.iYear);

}
/***************************************************************
 * @name void vAcceptBookDetails (BOOK *book)
 * @date 01/oct/2022
 * @brief Accept values of defined structure
 * @test ok
 * @param struct* pointer of structure object
 * @param int Total number of students
 * @returns none
***************************************************************/
void vAcceptRollNo(StudentDB *sPtr, int totalStudents)
{
    int number;
    printf("Enter a roll number : ");
    scanf("%d",&number);
    for(int i=0;i<totalStudents;i++)
    {
        if (number == sPtr[i].iRollNo)
        {
            vDisplayStudentInfo(&sPtr[i]);
        }
    }
}

/***************************************************************
 * @name void vAcceptBookDetails (BOOK *book)
 * @date 01/oct/2022
 * @brief Accept values of defined structure
 * @test ok
 * @param struct* pointer of structure object
 * @param int Total number of students
 * @returns none
***************************************************************/
void vAcceptYear(StudentDB *sPtr, int totalStudents)
{
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);
    for(int i=0;i<totalStudents;i++)
    {
        if (year == sPtr[i].year_of_joining.iYear)
        {
            printf("\nStudent name: %s",sPtr[i].cName);
        }
    }
}