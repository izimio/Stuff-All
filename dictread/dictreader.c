#include <fcntl.h>
#include <stdio.h>

void addingWord(char *str, char *word)
{
    int file;
    char j;

    j = '0';
    file = open(str, O_RDONLY);

    while (read(file, &j, 1) > 0)
    {
        if (j == '\n')
            printf(" %s ", word);
        printf("%c", j);
    }
}

int main(int arc, char **argv)
{
    addingWord(argv[1], argv[2]);
}
