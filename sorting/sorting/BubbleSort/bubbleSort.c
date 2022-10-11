#include"sort_head.h"

// -------------------- Bubble sort --------------------
void vBubbleSort(int *arr,char sizeArr)
{
    int temp;
    for (int i = 0; i < sizeArr; i++)
    {
        for (int j = 0; j < sizeArr - 1 -i; j++)
        {
            if ((arr[j])<(arr[j+1]))
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}