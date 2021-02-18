# include <stdlib.h>
# include <stdio.h>
#include <time.h>

int strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}

char *randomizer(int a){
    srand(time(NULL));
    int value;
    int value2;
    long cpy;
    int length;
    char *str;
    char *alphabet = "abcdefghijklmnopqrstuvwxyz";
    length = 0;
    value = rand() % 999999;
    value2 = rand() % 555550061;
    int ttt = rand() % 26;

    printf("%d\n",ttt);
    value2 /= a;
    cpy = value2;

    while (cpy >= 1)
    {
        cpy /= 10;
        length++;
    }
    str = (char *)malloc(sizeof(char) * length + 1);
    cpy = value2;
    str[length] = '\0';
    while (cpy >= 1)
    {
        value = cpy % 10 + '0';
        value = ((value + ttt <= 26) ? value + ttt : value);
        str[--length] = alphabet[value % 26];
        cpy /= 10;
    }
    return(str);
}

char *concateneat(char *str1,char *str2)
{
    int i;
    int j;
    int length;
    char *newStr;
    
    i = -1;
    j = -1;
    length = strlen(str1) + strlen(str2);
    newStr = (char *)malloc(sizeof(char) * length + 1);

    while (str1[++i])
        newStr[i] = str1[i];
    while (str2[++j])
    {
        newStr[i] = str2[j];
        i++;
    }
    newStr[i] = '\0';
    return(newStr);
}

char *CreateRandomWord()
{
    char *str;
    char *str2;
    char *str3;

    char *res;
    str = randomizer(1);
    str2 = randomizer(6);
    str3 = randomizer(78);

    res = concateneat(str,str2);
    res = concateneat(res,str3);
    return(res);
}