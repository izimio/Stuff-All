#include "My_JSlib.h"

int strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return(i);
    
}

char *My_arr_Charpush(char *str, char c)
{
    int i;
    int length;
    char *newStr;

    length = strlen(str);
    i = -1;
    newStr = (char *)malloc(sizeof(char) * length + 2);
    while (++i < length)
        newStr[i] = str[i];
    newStr[i] = c;
    i++;
    newStr[i] = '\0';
    return(newStr);
}