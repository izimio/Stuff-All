#include "My_JSlib.h"

int check_argv(char const *s)
{
    int i = -1;

    while (s[++i])
        if (!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) )
            return (0);
    return (1);
}

void to_lower(char *s)
{
    for (int i = -1; s[i]; ++i)
    {
        if(s[i] >= 'A' && s[i] <= 'Z')
            s[i] = s[i] += 32;
    }
}

int ana_check(char *s1, char *s2)
{
    to_lower(s1);
    to_lower(s2);
    int i = -1;
    int tab[255] = {0};

    while (s2[++i])
        tab[(int)(s2[i])]++;
    i = -1;
    while (s1[++i])
        tab[(int)(s1[i])]--;
    i = -1;
    while (++i < 255)
        if (tab[i] != 0)
            return (0);
    return (1);
}

int main(int ac, char **argv)
{
    if (ac == 3) {
        if (check_argv(argv[1]) == 0 || check_argv(argv[2]) == 0) {
            printf("Invalid input");
            return (0);
        }
        if (ana_check(argv[1], argv[2]) == 1)
            printf("Is anagram");
        else
            printf("Is NOT anagram");
    }
    else
        return (0);
}