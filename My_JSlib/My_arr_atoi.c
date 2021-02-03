# include "My_JSlib.h"

int My_arr_atoi(char *str){
    int i;
    int res;
    int count;

    res = 0;
    i = 0;
    count = 1;

    while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
        i++;
    if(str[i] == '+' || str[i] == '-'){
        if(str[i] == '-')
            count = -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        res += str[i]  - '0';
        res *= 10;
        i++;
    }
    return((res * count) / 10);
}