/*********************************************************************
 * @name puzzle game header
 * @date 28/sept/2022
*********************************************************************/
// ------------------ Libraries ---------------------------------
#include<stdio.h>
#include<stdlib.h>

// ------------------ Variables ---------------------------------
static int position=8;

// ------------------ Functions ---------------------------------
char cCmpArray(int*,int*);
void vDisplayNumber(int*);
char cReadKey(int*);
char cOperate(int*,char choice);
char cRunGame(int*);
