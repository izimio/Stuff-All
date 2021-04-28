#include "My_JSlib.h"
#include <time.h>

int *push(int *arr, int length, int value)
{
    int i;
    int *res;

    i = -1;
    res = (int *)malloc(sizeof(int) * length + 1);

    while (++i < length)
    {
        res[i] = arr[i];
    }
    res[i] = value;
    return (res);
}

static int *create_random_arr()
{
    int *tab;
    int r;

    srand(time(NULL));
    for (size_t d = 0; d < 10; d++)
    {
        r = rand() % 200;
        r -= 100;
        tab = push(tab, d, r);
    }
    return (tab);
}

int **sort_aglo(int *arr, int length)
{
    int **res;
    int *pos;
    int *neg;
    int lpos;
    int lneg;
    int i;

    lpos = 0;
    lneg = 0;
    i = -1;
    res = (int **)malloc(sizeof(int *) * 2);
    while (++i < length)
    {
        if (arr[i] >= 0)
            pos = push(pos, lpos++, arr[i]);
        else if(arr[i] < 0)
            neg = push(neg, lneg++, arr[i]);
    }
    res[0] = neg;
    res[1] = pos;
    return (res);
}