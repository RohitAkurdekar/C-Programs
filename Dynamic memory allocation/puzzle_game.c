/**********************************************************
 * @name puzzle game
 * @date 28/sept/2022
 * @details Move numbers to get them in sorted position
************************************************************/
// ------------------ Libraries ---------------------------------
#include"puzzle_game.h"

/***************************************************************
 * @name void vDisplayArray(int *iPtr)
 * @date 25/sept/2022
 * @details display array elements
 * @test ok
 * @param *int pointer of array
***************************************************************/
void vDisplayArray(int *iPtr,int* arr_size)
{
    printf("\nValues of array %d:", *arr_size);
    for (int i = 0; i < (*arr_size); i++)
    {        printf("\t%d",(iPtr[i]));    }
};
// ------------ main() ------------------------------------
int main()
{
    int main_arr[] = {1,2,3,4,5,6,7,8,0};
    int game_arr[] = {3,4,1,8,7,6,2,5,0};

    while (!cCmpArray(game_arr,main_arr))
    {
        cRunGame(game_arr);
    }
    int siz=9;
    vDisplayArray(game_arr,&siz);
    printf("------------------ Congratulations -------------------------");
}
/***************************************************************
 * @name char cCmpArray(int *game_arr,int *main_arr)
 * @date 25/sept/2022
 * @details Compares two array and return 1 if matched
 * @test 
 * @param *int pointer of array1
 * @param *int pointer of array2
***************************************************************/
char cCmpArray(int *game_arr,int *main_arr)
{
    int arr_size = sizeof(game_arr)/sizeof(int);
    int state = 1;
    for (int i = 0; i < 9; i++)
    {        if(game_arr[i]!=main_arr[i])    { state=0; break;  }    }
    return state;
}

/***************************************************************
 * @name char cRunGame(void)
 * @date 27/sept/2022
 * @details Run game
 * @test 
***************************************************************/
char cRunGame(int *game_arr)
{
    cReadKey(game_arr);
}
/***************************************************************
 * @name char cRunGame(void)
 * @date 27/sept/2022
 * @details Read key and return its value.
 * @test 
***************************************************************/
char cReadKey(int *game_arr)
{
    char choice;

    vDisplayNumber(game_arr);
    scanf("%c",&choice);
    switch (choice)
    {
    case 'a':
        printf("%c",choice);
        cOperate(game_arr,'l');
        break;
    case 'd':
        printf("%c",choice);
        cOperate(game_arr,'r');
        break;
    case 'w':
        cOperate(game_arr,'u');
        break;
    case 's':
        cOperate(game_arr,'d');
        break;
// ---------------------- Capital input ------------------------------

    case 'A':
        printf("%c",choice);
        cOperate(game_arr,'l');
        break;
    case 'D':
        printf("%c",choice);
        cOperate(game_arr,'r');
        break;
    case 'W':
        cOperate(game_arr,'u');
        break;
    case 'S':
        cOperate(game_arr,'d');
        break;
    default:
        printf("Invalid input.");
        cReadKey(game_arr);
        break;
    }
}

/***************************************************************
 * @name void vDisplayNumber(int *game_arr)
 * @date 27/sept/2022
 * @details Display game zone.
 * @test ok
***************************************************************/
void vDisplayNumber(int *game_arr)
{
    printf("\n\t\t\t");
    for (int j = 1; j <= 9; j++)
    {
        if (game_arr[j-1]==0){            printf(" %c ",' ');        }
        else      {            printf(" %d ",game_arr[j-1]);        }
        
        if((j%3 == 0))        printf("\n\t\t\t");
    }
    printf("\n Joystick: \t");    printf("\t|\t");    printf("KEYBOARD:");
    printf("\n\t UP\t");        printf("\t|\t");    printf("\tW\t");       
    printf("\nLEFT\t\tRIGHT");  printf("\t|\t");    printf("A\t\tD"); 
    printf("\n\tDOWN\t");       printf("\t|\t");    printf("\tS\t\n");   
}

/***************************************************************
 * @name void vDisplayNumber(int *game_arr)
 * @date 27/sept/2022
 * @details Display game zone.
 * @test ok
***************************************************************/
char cOperate(int *game_arr,char choice)
{
    int old_pos=position,temp=0;
    switch (choice)
    {
    // move left
    case 'l':
        if((position!=0) ||(position!=3) ||(position!=6) && position>0)  { position--;}
        break;
    // move right
    case 'r':
        if((position!=2) ||(position!=5) ||(position!=8) && position<9)  { position++;}
        break;
    // move up
    case 'u':
        if(!(position>=0 && position<3))       {    position-=3;    }
        break;
    // move down
    case 'd':
        if(!(position>5 && position<9))        {    position+=3;    }
        break;
    
    default:
        printf("Invalid move");
        break;
    }
    if(position>=0 && position<9)
    {
        temp = game_arr[position];
        game_arr[position] = 0;
        game_arr[old_pos] = temp;
    
    }
    printf("\n-------\n pos: %d \t old: %d \t new:%d",8,temp,game_arr[position]);
    printf("\n-------\n pos: %d \t old: %d \t new:%d",position,temp,game_arr[position]);
}