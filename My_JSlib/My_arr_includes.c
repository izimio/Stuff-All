# include "My_JSlib.h"

int My_arr_includes(int tab[],int size, int value){
    int i;

    i = -1;

    while (++i < size)
        if(tab[i] == value)
            return(1);
    return(0);
}