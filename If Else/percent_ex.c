/*
	In a town, the % of men is 52. The % of total literacy is 48. If total % of literate men
	is 35 of total population, write code to find the total number of illiterate men and women
	if population of town is 80,000.
	
	Tested - OK on 21/sept/22
*/

#include<stdio.h>

int main()
{

	int population,totalMen, totalLiterateMen, totalWomen;
	int totalLiterateWomen,totalLiteracy, illeterateMen, illeterateWomen;

	population = 80000;				// Total population given
	totalMen = population*52/100;			// men = 52%  of population
	totalLiteracy = population*48/100;		// literacy = 48%  of population
	totalLiterateMen = population*35/100;		// literate men = 35%  of population
	
	totalWomen = population - totalMen;			// total women
	totalLiterateWomen = totalLiteracy - totalLiterateMen;	// total literate women

	illeterateMen = totalMen-totalLiterateMen;		// Total illeterate men
	illeterateWomen = totalWomen-totalLiterateWomen;	// Total illeterate women

// -----------------------------------------------------------------------------------------

	printf("\nTotal population 	is  %d",population);
	printf("\nTotal Mens 		are %d",totalMen);
	printf("\nTotal Womens 		are %d",totalWomen);
	printf("\nTotal literate people	are %d",totalLiteracy);
	printf("\nTotal literate mens 	are %d",totalLiterateMen);
	printf("\nTotal literate womens   are %d",totalLiterateWomen);
	printf("\nTotal illiterate mens   are %d",illeterateMen);
	printf("\nTotal illiterate womens are %d",illeterateWomen);

	printf("\n"); 	return 0;
}
