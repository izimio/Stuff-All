# include "My_JSlib.h"


void My_arr_fill(int tab[], int size ,int index, int start){

    if(start > size)
        exit(1);
    while (start++ <= size)
        tab[start] = index;
}