/***************************************************************************************
 * @name fileIO
 * @date 10/oct/2022
 * @brief Use of file system using c
***************************************************************************************/
#include"fileIO.h"

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
    printf("\n1.Create new file.");
    printf("\n2.Open existing file.");
    printf("\n3.Read data from file.");
    printf("\n4.Write data in file.");
    printf("\n5.Move to specific location.");
    printf("\n6.Close file.");
    
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
    char fName[20];
    printf("\nEnter full path with name of file: ");
    scanf("%s",&fName);
    fPtr = fopen(fName,"a");
    return fPtr;
}
/***********************************************************************
 * @name void vReadFile(FILE *fPtr)
 * @date 08/oct/2022
 * @brief Read data from file
 * @param FILE* pointer of file
 * @returns none
************************************************************************/
void vReadFile(FILE *fPtr)
{ 
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
 * @returns none
************************************************************************/
FILE* WriteInFile(FILE *fPtr)
{ 
    char fData[50]; 
    int temp;
    fPtr=FileOpenAppend(fPtr);
    printf("\nEnter data [50 char max at one time]:");
    scanf("%s",fData);
    temp = fprintf(fPtr,"%s",fData);

    if (temp!=strlen(fData))
        printf("\nData insertion failed");
    else
        printf("\nData inserted successfully");    
    return fPtr;
}