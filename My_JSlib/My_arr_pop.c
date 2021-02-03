# include "My_JSlib.h"

int *My_arr_pop(int tab[], int size){
    int *arr;
    int i;

    i = -1;
    arr = (int *)malloc(sizeof(int) * size - 1);

    while (++i != size - 1)
        arr[i] = tab[i];
    return(arr);
}