
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>


void ft_putchar(char c){
    write(1, &c, 1);
}


void str_write(char *str){

int i;

i = -1;

    while (str[++i])
    {
        ft_putchar(str[i]);
    }
}


int count_line(char *str)
{
    int i;
    int file;
    char j;

    j = '0';
    i = 0;
    file = open(str, O_RDONLY);

    while (read(file, &j, 1) > 0)
    {
        if(j == '\n')
            i++;
    }
    return(i);
}


int count_cara(char *str){

    char j;
    int file;
    int i;

    i = 0;
     j = '0';

    file = open(str, O_RDONLY);
    while (read(file, &j, 1) > 0)
    {
        i++;
    }
    return(i);
}

void ducul(char *str){

    int file;
    char j;
    int count;
    int f;
    int d;
    int k;
    int p;

    k = count_cara(str);

    f = count_line(str);

    j = '0';
    d = 0;
    count = 0;
    file = open(str, O_RDONLY);

        while (read(file, &j, 1) > 0)
        {
            d++;
            if(j != '\n')
                if(count != f + 1)
                    ft_putchar(j);
            if((j == '\n' || j == '.') && count != f)
            {

                str_write(" oreo le chaton trop mignon \n");
                count++;
                j = '0';
            }
            else if( j != '\n' && d == k){
                str_write(" du cul");
            }
        }
}

int main(int arc, char **argv){


    ducul(argv[1]);

}
