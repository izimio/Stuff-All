#include "My_JSlib.h"

int isPositiv(int a)
{
    return ((a >= 0) ? 1 : 0);
}

int My_arr_find(int tab[], int size, int (*func)(int))
{
    int i;

    i = -1;
    while (++i < size)
        if ((*func)(tab[i]) == 1)
            return (tab[i]);
    return ((int)NULL);
}

int main()
{

    int tab[] = {-5, -5, 4, -5, -5, 8, -1};

    printf("%d", My_arr_find(tab, 7, &isPositiv));
}