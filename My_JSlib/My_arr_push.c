# include "My_JSlib.h"

int *My_arr_pop(int tab[], int size, int value){
    int *arr;
    int i;

    i = -1;
    arr = (int *)malloc(sizeof(int) * size + 1);

    while (++i != size)
        arr[i] = tab[i];
    arr[i] = value;
    return(arr);
}