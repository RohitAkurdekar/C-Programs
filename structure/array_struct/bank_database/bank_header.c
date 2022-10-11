/**********************************************************************
 * @name functions.c
 * @date 01/oct/2022
 * @brief contains function definations
**********************************************************************/
#include"bank_header.h"

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
    printf("\n1.Display all customers");
    printf("\n2.Withdrawal");
    printf("\n3.Deposit");
    printf("\n4.Balance<100");
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
void vAcceptCustomerInfo(CustomerDB *sPtr)
{
    printf("\n------------------------------------------\n");
    printf("Enter Account no : ");
    scanf("%d",&sPtr->iAccNo);
    printf("Enter Name for accnt no - %d : ",sPtr->iAccNo);
    scanf("%s",&sPtr->cName);
    printf("Enter Balance for accnt no - %d : ",sPtr->iAccNo);
    scanf("%d",&sPtr->iBalance);

}
/***************************************************************
 * @name void vDisplayCustomerInfo(CustomerDB *sPtr)
 * @date 01/oct/2022
 * @brief Display values of defined structure
 * @test ok
 * @param struct* pointer of structure object
 * @returns none
***************************************************************/
void vDisplayCustomerInfo(CustomerDB *sPtr)
{
    printf("\n------- Customer details are: -----------------");
    printf("\nAcc no    : %d",sPtr->iAccNo);
    printf("\nName      : %s",sPtr->cName);
    printf("\nBalance   : %d",sPtr->iBalance);
    sPtr++;
}
/***************************************************************
 * @name void vAcceptWithdrawal(CustomerDB *sPtr, int totalCustomers)
 * @date 01/oct/2022
 * @brief Accept request for withdrawal 
 * @test ok
 * @param struct* pointer of structure object
 * @param int Total number of Customers
 * @returns none
***************************************************************/
void vAcceptWithdrawal(CustomerDB *sPtr, int totalCustomers)
{
    int accNo,amnt=0;
    printf("Enter Account number : ");
    scanf("%d",&accNo);
    printf("\nEnter a Amount : ");
    scanf("%d",&amnt);
    for(int i=0;i<totalCustomers;i++)
    {
        if ((accNo == sPtr[i].iAccNo) )
        {
            if ( (sPtr[i].iBalance>amnt))
            {
                sPtr[i].iBalance-=amnt;
                printf("\nAmount debited successfully...");
                printf("\nAvailable balance: %d",sPtr[i].iBalance);
                break;
            }
            else
            {                printf("Insufficient balance");            }
            
        }
    }
}

/***************************************************************
 * @name void vAcceptDeposit(CustomerDB *sPtr, int totalCustomers)
 * @date 01/oct/2022
 * @brief Accept deposit request
 * @test ok
 * @param struct* pointer of structure object
 * @param int Total number of Customers
 * @returns none
***************************************************************/
void vAcceptDeposit(CustomerDB *sPtr, int totalCustomers)
{
    int accntNo,amnt=0;
    printf("\nEnter a Account number : ");
    scanf("%d",&accntNo);
    printf("\nEnter a Amount : ");
    scanf("%d",&amnt);
    for(int i=0;i<totalCustomers;i++)
    {
        if (accntNo == sPtr[i].iAccNo)
        {
            sPtr[i].iBalance+=amnt;
            printf("\nAmount deposited successfully...");
            printf("Available balance: %d",sPtr[i].iBalance);
            break;
        }
    }
}

/***************************************************************
 * @name void vDisplayCustDetailsBelow100(CustomerDB *sPtr, int totalCustomers)
 * @date 01/oct/2022
 * @brief Display details of customer having balance below 100 
 * @test ok
 * @param struct* pointer of structure object
 * @param int Total number of Customers
 * @returns none
***************************************************************/
void vDisplayCustDetailsBelow100(CustomerDB *sPtr, int totalCustomers)
{
    for (int i = 0; i < totalCustomers; i++)
    {
        if (sPtr[i].iBalance<100)
        {
            printf("\n------- Customer details are: -----------------");
            printf("\nRoll no   : %d",sPtr[i].iAccNo);
            printf("\nName      : %s",sPtr[i].cName);
            printf("\n-----------------------------------------------\n");
        }
    }
}