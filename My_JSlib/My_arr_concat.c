#include "My_JSlib.h"

int *my_arr_concat(int tab1[], int tab2[], int size1, int size2)
{
    int *arr;
    int i;
    int j;

    j = -1;
    i = -1;
    arr = (int *)malloc(sizeof(int) * (size2 + size1));
    while (++i < size1)
        arr[i] = tab1[i];
    while (++j < size2)
        arr[j + i] = tab2[j];
    return (arr);
}