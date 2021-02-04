#include "My_JSlib.h"

int *My_arr_splice(int tab[], int size, int from, int to)
{
    int i;
    int j;
    int *arr;

    j = 0;
    i = 0;
    arr = (int *)malloc(sizeof(int) * (size - to));
    while (i < size)
    {
        if (i == from)
        {
            i += to - 1;
        }
        else
        {
            arr[j] = tab[i];
            j++;
        }
        i++;
    }
    return (arr);
}