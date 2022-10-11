/* 
	The distance between two cities(in KM) is input. Write a program to convert data into 
	meters, feet,inches, and centimeters.
*/

#include<stdio.h>

int main()
{
	float KM,mtr,ft,inch,cm;
	printf("Enter the distance between two cities in KM: ");
	scanf("%f",&KM);
	
	mtr=KM*1000;		// KM to mtr
	ft = mtr*3.28084;	// mtr to ft
	inch = ft * 12;		// ft to inch
	cm = inch * 2.54;	// inch to cm

	
	printf("\nThe distance between two cities in");
	printf("\nMeter is %.2f meters",mtr);
	printf("\nFoot  is %.2f feets",ft);
	printf("\nInch  is %.2f inches",inch);
	printf("\nCM    is %.2f CentiMeters",cm);

	printf("\n");
	return 0;	
}

