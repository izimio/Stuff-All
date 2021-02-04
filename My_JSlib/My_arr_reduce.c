#include "My_JSlib.h"

int operationFinder(char c)
{
    if (c == '+')
        return (0);
    if (c == '-')
        return (1);
    if (c == '*')
        return (2);
    return (-1);
}

int my_arr_reduce(int tab[], int size, char calcul)
{
    int i;
    int count;

    count = ((operationFinder(calcul) == 0 || operationFinder(calcul) == 1) ? 0 : 1);
    i = -1;
    if (operationFinder(calcul) == -1)
        exit(1);
    if (operationFinder(calcul) == 0)
        while (size--)
            count += tab[size];
    else if (operationFinder(calcul) == 1)
        while (size--)
            count -= tab[size];
    else if (operationFinder(calcul) == 2)
        while (size--)
            count *= tab[size];
    return (count);
}