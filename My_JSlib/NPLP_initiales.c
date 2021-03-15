#include "My_JSlib.h"

void initialeReader(char *str)
{
    int i;
    i = 0;
    if (str[i] >= 'A' && str[i] <= 'Z')
        printf("%c", str[i]);
    else
        printf("%c", str[i] - 32);
    while (str[++i])
    {
        if (str[i] != ' ')
            printf("-");
        else
        {
            printf("%c", str[i]);
            if (str[i + 1] != ' ')
            {
                if (str[i + 1] >= 'A' && str[i + 1] <= 'Z')
                    printf("%c", str[i + 1]);
                else
                    printf("%c", str[i + 1] - 32);
                i++;
            }
        }
    }
}