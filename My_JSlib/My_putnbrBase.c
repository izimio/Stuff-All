#include "My_JSlib.h"

int My_length(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void My_putchar(char c)
{
    printf("%c", c);
}

int checkBase(char *str)
{
    int i;
    int j;
    int trigger;

    i = -1;
    while (str[++i])
    {
        j = -1;
        trigger = 0;
        while (str[++j])
        {
            if (str[i] == str[j])
                trigger++;
            if (str[j] >= 9 && str[j] <= 13)
                return (0);
        }
        if (trigger > 1)
            return (0);
    }
    return (1);
}

void putnbr_base(int nb, char *base)
{
    long nbr;
    int length;
    nbr = nb;

    length = My_length(base);
    if (checkBase(base) != 0)
    {
        if (nbr < 0)
        {
            My_putchar('-');
            nbr = nbr * -1;
        }
        if (nbr >= length)
        {
            putnbr_base(nbr / length, base);
        }
        My_putchar(base[nbr % length]);
    }
}

int main(int ac, char **av){

    putnbr_base(667,av[1]);
}