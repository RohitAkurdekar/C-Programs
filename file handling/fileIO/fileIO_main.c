/***************************************************************************************
 * @name fileIO
 * @date 10/oct/2022
 * @brief Use of file system using c
 * EOF- END OF FILE
 * Every file ends with EOF
 * 
 * Assignment pg 431
***************************************************************************************/
#include"fileIO.h"
// ------------------------ main() --------------------------
int main()
{
    // File pointer
    FILE *fp = NULL;
    char cont;
    int choice;

    do
    {
        vDisplayMenu();
        scanf("%d",&choice);
        switch (choice)
        {
            // create 
        case 1:
        {
            fp = CreateFile();
            if (fp != NULL) printf("\nfile created successfully.....!!!");
            else            printf("\nfile creation failed .....!!!");
        }
        break;
        
            // open
        case 2:
        {
            fp = FileOpen(&fp);
            if (fp == NULL)
            {                printf("\nError opening file...!!");            }
            else             printf("\nFile opened successfully...!!");
        }
            break;
        
            // read 
        case 3:
        {
            if (fp==NULL)
            {
                fp = FileOpen(fp);
                if (fp==NULL)
                {
                    printf("\nError opening file...!!");
                    break;
                }
            }
            vReadFile(fp);
        }
        break;
        
            // write
        case 4:
        {
           fp = WriteInFile(fp);
        }
            break;
        
            // move
        case 5:
            
            break;
        
            // close
        case 6:
        {            if (fp!=NULL)        fclose(fp);            fp = NULL;        }     
            break;
        default:
        printf("\nInvalid choice");
            break;
        }
    //  Close file
        if (fp!=NULL)
        {            fclose(fp);        }
        fp = NULL;
        printf("\nDo you want to continue.........?y/n ");
        scanf(" %c",&cont);
    } while (cont == 'y');
    


    printf("-------------------- End of Code -------------------\n");
    return 0;
}