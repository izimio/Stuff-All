#include "My_JSlib.h"

void My_arr_reverse(int tab[], int size)
{
    int i;
    int cmp;
    i = -1;
    size--;
    while (++i <= size)
    {
        cmp = tab[size];
        tab[size] = tab[i];
        tab[i] = cmp;
        size--;
    }
}