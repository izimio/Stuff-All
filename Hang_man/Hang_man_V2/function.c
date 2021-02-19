
# include <stdlib.h>
# include <stdio.h>
#include <fcntl.h>

int strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        i++;
    }
    return(i);
}

int Getlines()
{
    int file;
    int i;
    char j;

    i = 0;
    j = '0';
    file = open("fr.txt", O_RDONLY);
    while (read(file, &j, 1))
    {
        if(j == '\n')
            i++;
    }
    return(i);
}

char *giveWord(long a)
{
    int file;
    int d;
    char j;
    int i;
    int lenght;
    char *str;

    i = 0;
    lenght = 1;
    j = '0';
    d = -1;
    file = open("fr.txt", O_RDONLY);

    while (i != a)
    {
        read(file, &j, 1);
        if (j == '\n')
            i++;
    }
    read(file, &j, 1);
    while (j != '\n')
    {
        read(file, &j, 1);
        lenght++;
    }
    i = 0;
    str = (char *)malloc(sizeof(char) * lenght + 1);
    while (i != a)
    {
        read(file, &j, 1);
        if (j == '\n')
            i++;
    }
    read(file, &j, 1);
    while (j != '\n')
    {
        str[++d] = j;
        read(file, &j, 1);
    }
    str[++d] = '\0';
    return(str);
}