#include "My_JSlib.h"

int my_fibonnaci(int n)
{
    if(n <= 1)
        return(n);
    return(my_fibonnaci(n - 1) + my_fibonnaci(n - 2));
}