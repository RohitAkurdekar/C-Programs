/**********************************************************************
 * @name student database
 * @date 01/oct/2022
 * @brief Containment of structure \n
 *        Collect data of students and print data 
 *        1. Similar joining date - name
 *        2. Roll no - complete data
**********************************************************************/
#include"student_header.h"

int main()
{
    int number_students=0;
    printf("\nEnter total number of students: \n");
    scanf("%d",&number_students);
    StudentDB studentDB[number_students];
    
// -------------- Accept student details -----------------------
    for (int i = 0; i < number_students; i++)
    {
        vAcceptStudentInfo(&studentDB[i]);
    }
    char cont;
    int iChoice=0;
    do
    {
        vDisplayMenu();
        scanf("%d",&iChoice);
        switch (iChoice)
        {
            case 1: /* Display info of every students */
            {
                for (int i = 0; i < number_students; i++)
                {       vDisplayStudentInfo(&studentDB[i]);            }
            }
            break;
        
            case 2: /* Display name of a students with similar year */
            vAcceptYear(&studentDB,number_students);
            break;
        
            case 3: /* Display info of a particular student using Roll no */
            vAcceptRollNo(&studentDB,number_students);
            break;
        
            default:
                printf("Invalid choice.");
                break;
        }

        printf("\nDo you want to continue......? y/n ");
        scanf(" %c",&cont);
    } while (cont == 'y');
    
    

    printf("\n---------------------------------------\n");
    return 0;
}
