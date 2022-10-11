/**********************************************************************
 * @name functions.c
 * @date 01/oct/2022
 * @brief contains function definations
**********************************************************************/
#include<stdio.h>

/***************************************************************
 * @name typedef struct book
 * @date 01/oct/2022
 * @brief Structure for book info
 * @test ok
 * @param none
 * @returns none
 * @note used typedef to simplify 'struct customer_details' into 'customerDB'
***************************************************************/
typedef struct customer_details
{
  int   iAccNo;
  char  cName[20];
  int   iBalance;
}CustomerDB;

// ------------------ functions ------------------------------

void vAcceptCustomerInfo(CustomerDB *sPtr);

void vDisplayCustomerInfo(CustomerDB *sPtr);

void vAcceptDeposit(CustomerDB *sPtr, int totalCustomers);

void vAcceptWithdrawal(CustomerDB *sPtr, int totalCustomers);

void vDisplayCustDetailsBelow100(CustomerDB *sPtr, int totalCustomers);

void vDisplayMenu(void);