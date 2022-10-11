/*
    Write a code to accept 5 marks and calc the percentage and aggregate of students marks.
*/

#include<stdio.h>

int main()
{
    int mark1, mark2, mark3, mark4, mark5,totalMarks;
    float percent;      
    printf("Enter marks of 5 subject:");
    scanf("%d%d%d%d%d",&mark1,&mark2,&mark3,&mark4,&mark5);     // scan all 5 marks and assign
    totalMarks = mark1 + mark2 + mark3 + mark4 + mark5;         // calc aggr
    percent = totalMarks/500.0*100.0;                           // calc percent

    printf("\nAggregrate marks: %d",totalMarks);
    printf("\nPercentage obtained: %.0f",percent);

    printf("\n");
    return 0;
}