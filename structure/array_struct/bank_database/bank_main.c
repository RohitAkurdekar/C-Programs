/**********************************************************************
 * @name customer database
 * @date 01/oct/2022
 * @brief Containment of structure \n
 * Accept Account number, Name and bank balance \n
 * print Account number and Name if balance is less than 100
 * print form for withdrawal/deposit
 * form: AccNo,amount, code(1 for deposit,0 for withdrawal)
 * display msg if insufficient amnt
**********************************************************************/
#include"bank_header.h"

int main()
{
    int number_customers=0;
    printf("\nEnter total number of customers: \n");
    scanf("%d",&number_customers);
    CustomerDB customerDB[number_customers];
    
// -------------- Accept customer details -----------------------
    for (int i = 0; i < number_customers; i++)
    {
        vAcceptCustomerInfo(&customerDB[i]);
    }
    char cont;
    int iChoice=0;
    do
    {
        vDisplayMenu();
        scanf("%d",&iChoice);
        switch (iChoice)
        {
            case 1: /* Display info of every customers */
            {
                for (int i = 0; i < number_customers; i++)
                {       vDisplayCustomerInfo(&customerDB[i]);            }
            }
            break;
        
            case 2: /* Display name of a customers with similar year */
                vAcceptWithdrawal(&customerDB,number_customers);
                break;
        
            case 3: /* Display info of a particular customer using Roll no */
                vAcceptDeposit(&customerDB,number_customers);
                break;
        
            case 4: /* Display info of a particular customer having amount less than 100/- */
                vDisplayCustDetailsBelow100(&customerDB,number_customers);
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
