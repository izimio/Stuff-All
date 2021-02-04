#include "My_JSlib.h"

int operationFinder(char c)
{
    if (c == '+')
        return (0);
    if (c == '-')
        return (1);
    if (c == '*')
        return (2);
    if (c == '/')
        return (3);
    if (c == '%')
        return (4);
    return (-1);
}

void my_arr_from(int tab[], int size, char calcul, int num)
{
    int i;

    i = -1;
    if (operationFinder(calcul) == -1)
        exit(1);
    if (operationFinder(calcul) == 0)
        while (++i < size)
            tab[i] += num;
    else if (operationFinder(calcul) == 1)
        while (++i < size)
            tab[i] -= num;
    else if (operationFinder(calcul) == 2)
        while (++i < size)
            tab[i] *= num;
    else if (operationFinder(calcul) == 3)
        while (++i < size)
            tab[i] /= num;
    else if (operationFinder(calcul) == 4)
        while (++i < size)
            tab[i] %= num;
}