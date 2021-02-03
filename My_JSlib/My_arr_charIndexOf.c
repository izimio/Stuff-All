# include "My_JSlib.h"

int isPositiv(char a){
    if((a >= 'a' && a <= 'z'))
        return(1);
    return(0);
}

char My_arr_charIndexOf(char *str, int (*func)(char)){
    int i;

    i = -1;
    while (str[++i])
        if((*func)(str[i]) == 1)
            return(i);
    return((int)NULL);
}