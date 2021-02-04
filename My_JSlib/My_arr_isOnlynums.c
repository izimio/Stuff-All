#include "My_JSlib.h"

int My_arr_isOnlynums(char *str){
    int i;

    i = -1;
    if(!str[0])
        return(0);
    while (str[++i])
    {
        if(!(str[i] >= '0' && str[i] <= '9'))
            return(0);
    }
    return(1);
}