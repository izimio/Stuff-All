# include "My_JSlib.h"

int isPositiv(int a){
    return ((a >= 0) ? 1 : 0);
}

int My_arr_indexOf(int tab[], int size, int (*func)(int)){
    int i;

    i = -1;
    while (++i < size)
        if((*func)(tab[i]) == 1)
            return(i);
    return((int)NULL);
}