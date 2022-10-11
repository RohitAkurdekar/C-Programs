/*
	If five-digit number is input, then write a code to calc the sum of its digit.
	also display it in reverse order.
	Tested - OK
*/

#include<stdio.h>

int main()
{
	int number, fifth,fourth,third,second,first,total,reverse;

	printf("Enter five-digit number:");
	scanf("%d",&number);		// get five-digit value

	fifth = number/10000;		// extract value at fifth position

	fourth = number/1000;		// extract value at fourth position
	fourth = fourth %10;

	third = number/100;		// extract value at third position
	third = third %10;

	second = number/10;		// extract value at second position
	second = second %10;
	
	first = number%10;		// extract value at first position
	
	total = fifth + fourth + third + second + first;	// add all digits
	
	printf("%d + %d + %d + %d + %d = %d",fifth,fourth,third,second,first,total);

	// add all digits with exact multiplication
	reverse = fifth + fourth*10 + third*100 + second*1000 + first*10000;	
	printf("\nReverse of %d is %d",number,reverse);
	
	printf("\n");	return 0;
}
