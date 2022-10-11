/***************************************************************************************
 * @name fileIO
 * @date 10/oct/2022
 * @brief Use of file system using c
***************************************************************************************/
#include"emp_head.h"

/***********************************************************************
 * @name void vDisplayMenu(void)
 * @date 08/oct/2022
 * @brief Display menu
 * @param none
 * @returns none
************************************************************************/
void vDisplayMenu(void)
{
    printf("\n--------------- Menu ----------------------");
    printf("\n1.Add data of employee in a file.");
    printf("\n2.Read data from file.");
    
    printf("\nEnter your Choice: ");
}


/***********************************************************************
 * @name FILE* FileOpen(FILE *fPtr)
 * @date 08/oct/2022
 * @brief Open given file name and return its addr
 * @param FILE* pointer of file
 * @returns FILE* pointer of file
************************************************************************/
FILE* FileOpen(FILE *fPtr)
{ 
    char fName[20];
    printf("\nEnter full path with name of file: ");
    scanf("%s",&fName);
    fPtr = fopen(fName,"r");
    return fPtr;
}
/***********************************************************************
 * @name FILE* FileOpen(FILE *fPtr)
 * @date 08/oct/2022
 * @brief Open given file name and return its addr
 * @param FILE* pointer of file
 * @returns FILE* pointer of file
************************************************************************/
FILE* FileOpenAppend(FILE *fPtr)
{ 
    // fPtr = fopen("fName","a");
    return fPtr;
}
/***********************************************************************
 * @name FILE* CreateFile(void)
 * @date 08/oct/2022
 * @brief Create a new file
 * @param none
 * @returns FILE* pointer of file
************************************************************************/
FILE* CreateFile(void)
{ 
    FILE *fPtr = NULL;
    char fName[20];
    printf("\nEnter name of file: ");
    scanf("%s",fName);
    fPtr = fopen(fName,"w");
    return fPtr;
}
/***********************************************************************
 * @name void vReadFile(FILE *fPtr)
 * @date 08/oct/2022
 * @brief Read data from file
 * @param FILE* pointer of file
 * @returns FILE* pointer of file
************************************************************************/
FILE* WriteInFile(FILE *fPtr)
{
    EMPLOYEE emp;
    int temp;

    printf("\nEnter name: ");
    scanf("%s",emp.cName);
    
    printf("\nEnter id: ");
    scanf("%d",&emp.iId);
    
    printf("\nEnter Salary: ");
    scanf("%f",&emp.fSalary);
    
    fPtr = fopen("EmployeeDB.txt","a");

    temp = fprintf(fPtr,"\n%d\t%s\t%.2f",emp.iId,emp.cName,emp.fSalary);

    if (!temp)
        printf("\nData insertion failed");
    else
        printf("\nData inserted successfully");    

    // fclose(fPtr);
    
    return fPtr;
}
/***********************************************************************
 * @name void vReadFile(FILE *fPtr)
 * @date 08/oct/2022
 * @brief Read data from file
 * @param FILE* pointer of file
 * @returns none
************************************************************************/
FILE* ReadFile(FILE *fPtr)
{ 
    printf("\nError1");
    EMPLOYEE emp;
    char test[100];
    fPtr = fopen("EmployeeDB.txt","r");
    if (fPtr == NULL)
    {        printf("\nError2");        return NULL;    }
    
    while (fscanf(fPtr,"\n%d\t%s\t%f",emp.iId,emp.cName,emp.fSalary)!= EOF);
    // while(fscanf(fPtr,"%s",&test) != EOF);
    {
        printf("\n------------------------------------------------\n");
        // printf("%s",test);
        printf("\nid: %d",emp.iId);
        printf("\tName: %s",emp.cName);
        printf("\tSalary: %.2f",emp.fSalary);
    }
    fclose(fPtr);
    return fPtr;
    /*
    char fChar[20];
    fscanf(fPtr,"%s",fChar);
    printf("%s",fChar);
    /*
    char fChar;
    while (1)
    {
        fChar = fgetc(fPtr);        // Get file char
        if (fChar == EOF)           // Read until EOF
        {       break;        }
        printf("%c",fChar);
    }
    */
}