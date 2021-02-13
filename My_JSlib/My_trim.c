#include "My_JSlib.h"

int strlen(char *str){
    int i = 0;
    while (str[i])
        i++;
    return(i);
}

char *My_trim(char *str){

    int i;
    int length;
    char *newstr;
    int j;
    
    length = strlen(str) - 1;
    i = 0;
    j = -1;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    while ((str[length] >= 9 && str[length] <= 13) || str[length] == ' ')
        length--;
    length++;
    newstr = (char *)malloc(sizeof(char) * (length - i) + 1);
    while (i <= length)
    {
        newstr[++j] = str[i];
        i++;
    }
    newstr[j] = '\0';
    return(newstr);
}