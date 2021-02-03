# include "My_JSlib.h"

char *My_arr_toString(int tab[], int size){
    int i;
    char *arr;

    arr = (char *)malloc(sizeof(char) * size + 1);
    i = -1;
    while (++i < size)
    {
        arr[i] = tab[i] + '0';
    }
    arr[i] = '\0';
    return(arr);
}