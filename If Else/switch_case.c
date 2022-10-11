// switch case with while and function

#include<stdio.h>
/************************************
 * sub routine: vDisplayMenu()
 * date: 21/sept/2022.
 * tested-OK.
*************************************/
void vDisplayMenu()
{
    printf("\n----------------------------------\n");
    printf("\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n0.Exit\nEnter Choice:");
};

int main()
{

    int iNum1,iNum2,iState=0,iChoice;

    do
    {
        if(iState)
        {
            printf("\nEnter two numbers:");       // get values
            scanf(" %d%d",&iNum1,&iNum2);
        }
        iState=1;
        vDisplayMenu();                     // display menu
        scanf("%d",&iChoice);
        switch (iChoice)                    // switch according to choice
        {
        case 1:                     // Addition
            printf("Result : %d",(iNum1+iNum2));
            break;
        case 2:                     // Subtraction
            printf("Result : %d",(iNum1-iNum2));
            break;
        case 3:                     // Multiplication
            printf("Result : %d",(iNum1*iNum2));
            break;
        case 4:                     // Division
            printf("Result : %d",(iNum1/iNum2));
            break;
        
        default:                    // Default case
            printf("Invalid choice.");
            break;
        }

    } while (iChoice != 0);

    
    printf("\n--------------------------------\n");
    return 0;
}