# include "My_JSlib.h"

void My_arr_sort(int tab[], int size){
    int i;
    int cmp;
    i  = 0;
    size--;
    while (i < size)
    {
        if(tab[i] > tab[i + 1])
        {
            cmp = tab[i];
            tab[i] = tab[i + 1];
            tab[i + 1] = cmp;
            i = -1;
        }
        i++;
    }
}