/**********************************************
 * @name header file
 * @date 01/oct/2022
************************************************/
#include"struct_head.h"
/***************************************************************
 * @name void vAccept(Student_info *StInfo)
 * @date 01/oct/2022
 * @brief Accept values of defined structure
 * @test ok
 * @param struct* pointer of structure object
 * @returns struct object
***************************************************************/
void vAccept(Student_info *StInfo)
{
    printf("Enter PRN of student  : ");
    scanf("%d",&StInfo->iStudentPRN);
    printf("Enter Name of student : ");
    scanf("%s",&StInfo->cName);
    printf("Enter percentage :");
    scanf("%f",&StInfo->fPercentage);
}

/***************************************************************
 * @name void vDisplay(Student_info *StInfo)
 * @date 01/oct/2022
 * @brief Display values of defined structure
 * @test ok
 * @param struct* pointer of structure object
 * @returns none
***************************************************************/
void vDisplay(Student_info *StInfo)
{
    printf("\n----------------------------------------------\n");
    printf("\nPRN : %d",StInfo->iStudentPRN);
    printf("\nNAME: %s",StInfo->cName);
    printf("\nPERC: %.2f",StInfo->fPercentage);

}


/***************************************************************
 * @type funcion with pass by value 
 * @name Student_info scAccept(Student_info StInfo)
 * @date 01/oct/2022
 * @brief Accept values of defined structure
 * @test ok
 * @param struct structure object
 * @returns struct object
***************************************************************
Student_info scAccept(Student_info *StInfo)
{
    printf("Enter PRN of student  : ");
    scanf("%d",StInfo.iStudentPRN);
    printf("Enter Name of student : ");
    scanf("%s",StInfo.cName);
    printf("Enter percentage :");
    scanf("%f",StInfo.fPercentage);

    return StInfo;
}
*/