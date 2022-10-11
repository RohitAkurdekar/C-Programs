/*
	Ramesh's basic salary is input. His dearness allowance is 40% of basic salary, and house 	rent allowance is 20% of BS. Write a code to calc his gross salary.
	Tested- ok 21/sept/2022
*/

#include<stdio.h>

int main()
{
	double basicSalary,dearnessAllowance,houseRent,grossSalary;
	
	printf("Enter basic salary   : ");
	scanf("%lf",&basicSalary);					// Get salary from user
	dearnessAllowance = basicSalary*40/100;				// 40% of basic salary
	houseRent = basicSalary*20/100;					// 20% of basic salary
	grossSalary = basicSalary + dearnessAllowance + houseRent;	// gross salary = sum(all)

	// Display all allowances and gross salary
	printf("Dearness Allowance   : %.2lf",dearnessAllowance);
	printf("\nHouse Rent 	     : %.2lf",houseRent);
	printf("\n---------------------------------");
	printf("\nGross Salary	     : %.2lf",grossSalary);

	printf("\n");
	return 0 ;
}
