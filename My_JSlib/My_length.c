#include "My_JSlib.h"

int my_length(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}