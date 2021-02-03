# include "My_JSlib.h"


int My_arr_lastIndexOf(int tab[],int size, int value){
    
    while (size-- != 0)
        if(tab[size] == value)
            return(size);
    return(-1);
}