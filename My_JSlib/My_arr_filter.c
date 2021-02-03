# include "My_JSlib.h"

int isPositiv(int a){
    return ((a >= 0) ? 1 : 0);
}

int *My_arr_filter(int tab[], int size, int (*func)(int)){
    int i;
    int count;
    int *arr;
    int j;

    j = -1;
    count = 0;
    i = -1;
    while (++i < size)
        if((*func)(tab[i]) == 1)
            count++;
    arr = (int*)malloc(sizeof(int) * count);
    i = -1;
    while (++i < size)
        if((*func)(tab[i]) == 1)
            arr[++j] = tab[i];
    return(arr);
}
