#include "My_JSlib.h"

int isPositiv(char a)
{
    if ((a >= 'a' && a <= 'z') || a == ' ')
        return (1);
    return (0);
}

char *My_arr_charfilter(char *str, int (*func)(char))
{
    int i;
    int count;
    char *arr;
    int j;

    j = -1;
    count = 0;
    i = -1;
    while (++i < my_length(str))
        if ((*func)(str[i]) == 1)
            count++;
    arr = (char *)malloc(sizeof(char) * count);
    i = -1;
    while (++i < my_length(str))
        if ((*func)(str[i]) == 1)
            arr[++j] = str[i];
    return (arr);
}