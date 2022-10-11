/*
	Write a  C code to declare and accept character, int and float datatype and 
	Display the value of all accepted variables.
*/

#include<stdio.h>

int main()
{
 printf("------------Day 1 Exercise.-------------------\n");

 double dummyVar;		// Dummy variable for scanf error
 char ch1,ch2,ch3,ch4; 		// Char datatype
 int in1,in2,in3;		// Int datatype
 float fNum1,fNum2,fNum3;	// Float datatype
 double dNum1,dNum2,dNum3;	// Double datatype
/*
// Printing sixe of datatypes
printf("Size of char   datatype: %d \n",sizeof(char));		// size of char datatype
printf("Size of int    datatype: %d \n",sizeof(int));		// size of int datatype
printf("Size of float  datatype: %d \n",sizeof(float));		// size of float datatype
printf("Size of double datatype: %d \n",sizeof(double));	// size of double datatype
*/

// Read values 
// Char datatype
 printf("Enter char1: ");	// Read first char
 scanf("%c",&ch1);
 printf("Enter char2: ");	// Read second char
 scanf(" %c",&ch2);

 printf("Enter char3: ");	// Read third char
scanf("%lf",&dummyVar);

 scanf("%c ",&ch3);
 printf("Enter char4: ");	// Read fourth char
 scanf("%c ",&ch4);

 printf("\n-----------------------------------\n");
// Int datatype
 printf("Enter int1: ");	// Read first int
 scanf("%d ",&in1);
 printf("Enter int2: ");	// Read second int
 scanf("%d ",&in2);
 printf("Enter int3: ");	// Read third int
 scanf("%d ",&in3);

 printf("\n-----------------------------------\n");
// Float datatype
 printf("Enter float1: ");	// Read first float
 scanf("%f ",&fNum1);
 printf("Enter float2: ");	// Read second float
 scanf("%f ",&fNum2);
 printf("Enter float3: ");	// Read third float
 scanf("%f ",&fNum3);

 printf("\n-----------------------------------\n");
// Char datatype
 printf("Enter double1: ");	// Read first double
 scanf("%lf ",&dNum1);
 printf("Enter double2: ");	// Read second double
 scanf("%lf ",&dNum2);
 printf("Enter double3: ");	// Read third double
 scanf("%lf",&dNum3);


 printf("\n-----------------------------------\n");

//print assigned value
// assigned char
 printf("\n assigned values are \n ch1: %c",ch1);
 printf(" \n ch2: %c",ch2);
 printf(" \n ch3: %c",ch3);
 printf(" \n ch4: %c",ch4);

 printf("\n-----------------------------------\n");
 
// assigned int
 printf(" \n in1: %d",in1);
 printf(" \n in2: %d",in2);
 printf(" \n in3: %d",in3);

 printf("\n-----------------------------------\n");
 
// assignhed float
 printf(" \n fNum1: %f",fNum1);
 printf(" \n fNum2: %f",fNum2);
 printf(" \n fNum3: %f",fNum3);

 printf("\n-----------------------------------\n");
 
// assignhed char
 printf(" \n dNum1: %lf",dNum1);
 printf(" \n dNum2: %lf",dNum2);
 printf(" \n dNum3: %lf",dNum3);

 printf("\n-----------------------------------\n");
 

 return 0;			// return null
}
