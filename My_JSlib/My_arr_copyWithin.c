# include "My_JSlib.h"

void my_arr_copyWithin(int tab[], int size, int index, int num){
    int i;

    i = -1;
    num = tab[num];
    while (++i <= index)
        tab[i] = num;    
}