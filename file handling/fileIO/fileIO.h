/***************************************************************************************
 * @name fileIO
 * @date 10/oct/2022
 * @brief Use of file system using c
***************************************************************************************/
#ifndef FILE_IO_H
#define FILE_IO_H
// --------------- libraries -------------------------------

#include<stdio.h>
#include<string.h>
// #include<fstream>
// --------------- functions -------------------------------

void vDisplayMenu(void);
FILE* FileOpen(FILE *fPtr);
FILE* FileOpenAppend(FILE *fPtr);
void vReadFile(FILE *fPtr);
FILE* CreateFile(void);
FILE* WriteInFile(FILE *fPtr);

#endif