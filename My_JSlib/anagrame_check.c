#include "My_JSlib.h"

int ana_check(char *s1, char *s2)
{
    int i;
    int tab[255] = {0};
    i = -1;
    while (s2[++i])
        tab[(int)(s2[i])]++;
    i = -1;
    while (s1[++i])
        tab[(int)(s1[i])]--;
    i = -1;
    while (++i < 255)
        if(tab[i] != 0)
            return(0);
    return(1);
}

int main(int ac, char **argv)
{
    if (ac == 3)
    {
        if(ana_check(argv[1], argv[2]) == 1)
            printf("Is anagram");
        else
            printf("Is NOT anagram");
    }
    else
    {
        return (0);
    }
}