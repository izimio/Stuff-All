# include <stdlib.h>
# include <stdio.h>

int strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return(i);   
}

void my_putchar(char c)
{
    printf("%c",c);
}

void writeStr(char *str)
{
    int i;

    i = -1;
    while (str[++i])
        my_putchar(str[i]);
    
}

void print_result(int tab[], char *str)
{
    int i;

    i = -1;
    while (str[++i])
        if(tab[i] == 0 && str[i + 1] != '\0')
            writeStr(" - ");
        else if(tab[i] == 0 && str[i + 1] == '\0')
            my_putchar('-');
        else if(tab[i] == 1)
            my_putchar(str[i]);
    my_putchar('\n');
}

int verifInput(int tab[], char *str, char c)
{
    int i;
    int tmp;

    tmp = 0;
    i = -1; 
    while (str[++i])
        if(c == str[i] && tab[i] == 0)
        {
            tab[i] = 1;
            tmp = 1;
        }
    return(tmp);
}

int verifTab(int tab[], int length)
{
    int i;

    i = -1;
    while (++i < length)
        if(tab[i] == 0)
            return(0);
    return(1);
}

int *createArr(char *str)
{
    int *arr;
    int i;
    int length = strlen(str);
    
    i = 0;
    arr = (int *)malloc(sizeof(int) * length);
    while (i < length)
        arr[i++] = 0;
    return(arr);
}


int main(int ac, char *argv[])
{
    if(ac == 2)
    {
        char *str;
        int lives;
        int *arr;
        char tmp;
        int length;

        lives = 10;
        str = argv[1];
        length = strlen(str);
        arr = createArr(str); 
        writeStr("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        print_result(arr,str);

        while (lives > 0 && verifTab(arr,length) == 0)
        {
            printf("\nEntrez une lettre\nNombre de vies : %d\n",lives / 2);
            tmp = getchar();
            if(verifInput(arr,str,tmp) == 1)
                lives++;
            else
                lives--;
            print_result(arr,str);
        }
        if(verifTab(arr,length) == 1)
            writeStr("\n\n    ---------\n    | Gagne |\n    ---------");
        if(lives <= 0)
        {
            writeStr("\n\n");
            writeStr(str);
            writeStr("    ---------\n    | Perdu |\n    ---------");
        }
            
    }
    else
        writeStr("Bonsoir non.");
}