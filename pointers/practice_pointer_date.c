/**************************************************************
 * @name practice on pointer
 * @date 25/sept/2022
 * @def accept date[day/month/year] in func and display in main.
***************************************************************/

#include<stdio.h>

/***************************************************************
 * @name void vReadDate(int *iDate,int *iMonth,int *iYear)
 * @date 25/sept/2022
 * @details perform arithmetic operation and store result in recieved addr
 * @test ok
 * @param *int pointer of date
 * @param *int pointer of month
 * @param *int pointer of year
***************************************************************/
void vReadDate(int *iDate,int *iMonth,int *iYear)
{
    printf("Enter date:");
    scanf("%d",iDate);
    printf("Enter month:");
    scanf("%d",iMonth);
    printf("Enter year:");
    scanf("%d",iYear);
};
// --------- main() ---------------------------------------
int main()
{
    int iDate, iMonth, iYear;
    vReadDate(&iDate,&iMonth,&iYear);       // call vReadDate() and pass addr of date, month and year
    printf("\nDate: %d / %d / %d",iDate,iMonth,iYear);

    printf("\n-----------------------------------\n");
    return 0;
}