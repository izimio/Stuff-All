#include "My_JSlib.h"

int *My_arr_unshift(int tab[], int size, int a, int b)
{
    int i;
    int *arr;

    arr = (int *)malloc(sizeof(int) * size + 2);
    i = 1;
    arr[0] = a;
    arr[1] = b;
    while (++i < size + 2)
    {
        arr[i] = tab[i - 2];
    }
    return (arr);
}