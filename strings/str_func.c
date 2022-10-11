// write a program to accept string and check whether it is a pallindrome or not?

#include"str_func.h"
/***************************************************************
 * @name void vReverseOfStr(char* source, char* destination)
 * @date 24/sept/2022
 * @details reverse string and store in another string
 * @test ok
 * @param *char pointer of source string
 * @param *char pointer of destination string
***************************************************************/
void vReverseOfStr(char* source, char* destination)
{
   // declare variable  
    int i, len ;  
    char temp;
    len = strlen(source); // use strlen() to get the length of str string  
    char tempStr[len];
    strcpy(tempStr,source);
    // use for loop to iterate the string   
    for (i = 0; i < len/2; i++)  
    {  
        // temp variable use to temporary hold the string  
        temp = tempStr[i];  
        tempStr[i] = tempStr[len - i - 1];  
        tempStr[len - i - 1] = temp;  
    } 
   tempStr[i]='\0';
   strcpy(destination,tempStr);       // copy reversed string in destination string

};
// --------------------------- function declaration ---------------------------------
void vSortOfStr(char* source, char* destination);
/**/
// ---------------------------- main() -----------------------------
int main()
{
    char cStr1[15];
    char cStr2[15];
    char cRev[15];
    char cSort1[15];
    char cSort2[15];
    printf("Enter a name: ");
    scanf("%s",cStr1);

    printf("Enter a name: ");
    scanf("%s",cStr2);

    // --------------------- pallindrome ------------------------------
    vReverseOfStr(cStr1,cRev);      // reverse of string
    printf("\n%s",strcmp(cStr1,cRev)==0?"it is a pallindrome":"it is not a pallindrome");
    // ----------------- Alligram -------------------------------------
    vSortOfStr(cStr1,cSort1);        // sorted str
    vSortOfStr(cStr2,cSort2);        // sorted str

    printf("\n%s",strcmp(cSort1,cSort2)==0?"It is a alligram":"It is not a alligram");     

    printf("\n---------------------------------------------\n");
    return 0;
}
/**/

/***************************************************************
 * @name void vSortOfStr(char* source, char* destination)
 * @date 24/sept/2022
 * @details sort string and save in another
 * @test ok
 * @param *char pointer of source string
 * @param *char pointer of destination string
***************************************************************/
void vSortOfStr(char* source, char* destination)
{
   // declare variable  
    int i, j, len;
    char  temp;

    len = strlen(source); // use strlen() to get the length of str string  
    char tempStr[len];
    strcpy(tempStr,source);
    // use for loop to iterate the string   
    
   for (i = 0; i < len-1; i++) {
      for (j = i+1; j < len; j++) {
         if (tempStr[i] > tempStr[j]) {
            temp = tempStr[i];
            tempStr[i] = tempStr[j];
            tempStr[j] = temp;
         }
      }
   }
   tempStr[i]='\0';
   strcpy(destination,tempStr);       // copy reversed string in destination string

}