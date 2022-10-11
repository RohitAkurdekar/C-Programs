/*******************************************************************
 * @name Structure examples
 * @date 01/oct/2022
 * @brief Examples related to Structure
********************************************************************/
#include<stdio.h>
#include<string.h>

// structure declaration
struct Student_info
{
    int iStudentPRN;
    char cName[15];
    float fPercentage; 
};

// ------------ main() --------------------------
int main()
{ 
    struct Student_info s1,s2,s3;
    struct Student_info s4 = {4,"VAIBHAV",215.14};
// ----------- s1 ---------------------------
    printf("\nEnter PRN of student 1 : ");
    scanf("%d",&s1.iStudentPRN);
    printf("Enter Name of student 1:");
    scanf("%s",s1.cName);
    printf("Enter percentage :");
    scanf("%f",&s1.fPercentage);
/*
// ----------- s2 ---------------------------
    printf("\nEnter PRN of student 2 : ");
    scanf(" %d",&s2.iStudentPRN);
    printf("Enter Name of student 2:");
    scanf(" %s",s2.cName);
    printf("Enter percentage :");
    scanf("%f",&s2.fPercentage);
*/
    s2=s1;
    /*
// ----------- s3 ---------------------------
    printf("\nEnter PRN of student 3 : ");
    scanf("%d",&s3.iStudentPRN);
    printf("Enter Name of student 3:");
    scanf("%s",s3.cName);
    printf("Enter percentage :");
    scanf("%f",&s3.fPercentage);
*/
    s3.iStudentPRN = s2.iStudentPRN;
    strcpy(s3.cName,s1.cName);
    s3.fPercentage = s2.fPercentage;
// --------------- printing data of s1 ----------------------
    printf("\n----------------------------------------------\n");
    printf("\nPRN : %d",s1.iStudentPRN);
    printf("\nNAME: %s",s1.cName);
    printf("\nPERC: %.2f",s1.fPercentage);

// --------------- printing data of s2 ----------------------
    printf("\n----------------------------------------------\n");
    printf("\nPRN : %d",s2.iStudentPRN);
    printf("\nNAME: %s",s2.cName);
    printf("\nPERC: %.2f",s2.fPercentage);

// --------------- printing data of s3 ----------------------
    printf("\n----------------------------------------------\n");
    printf("\nPRN : %d",s3.iStudentPRN);
    printf("\nNAME: %s",s3.cName);
    printf("\nPERC: %.2f",s3.fPercentage);

// --------------- printing data of s4 ----------------------
    printf("\n----------------------------------------------\n");
    printf("\nPRN : %d",s4.iStudentPRN);
    printf("\nNAME: %s",s4.cName);
    printf("\nPERC: %.2f",s4.fPercentage);

    printf("\n-----------------------------------\n");
    return 0;
}