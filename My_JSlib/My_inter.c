#include "My_JSlib.h"

void My_inter(char *s1, char *s2)
{
    int tab[255] = {0};
    int i;
    int j;

    j = -1;
    i = -1;
    while (s2[++i])
    {
        if (tab[(int)s2[i]] == 0)
            tab[(int)s2[i]] = 1;
    }
    while (s1[++j])
    {
        if (tab[(int)s1[j]] == 1)
        {
            tab[(int)s1[j]] = 2;
            printf("%c", s1[j]);
        }
    }
}