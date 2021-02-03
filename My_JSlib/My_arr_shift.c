# include "My_JSlib.h"

int *My_arr_shift(int tab[], int size){
    int *arr;
    arr = (int *)malloc(sizeof(int) * size - 1);
    while (size-- != 1)
    {
        arr[size - 1] = tab[size];
    }
    return (arr);
}