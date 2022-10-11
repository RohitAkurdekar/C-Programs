#include"sort_head.h"

// -------------------- Simple selection sort --------------------
void vSimpleSort(int *arr,char sizeArr)
{
    int temp;
    for (int i = 0; i < sizeArr; i++)
    {
        for (int j = i+1; j < sizeArr ; j++)
        {
            if ((arr[i])>(arr[j]))
            {
                temp = arr[i];
                arr[i] = arr[j];     
                arr[j] = temp;
            }
        }
    }
}