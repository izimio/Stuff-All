#include "My_JSlib.h"

void My_arr_charReverse(char *str)
{
    int length;
    int i;
    char cmp;

    cmp = 'a';
    i = -1;
    length = my_length(str);
    while (++i < length--)
    {
        cmp = str[length];
        str[length] = str[i];
        str[i] = cmp;
    }
}