#include "My_JSlib.h"

int my_factorial(int n)
{
    if(n <= 1)
        return(n);
    return(n * my_factorial(n - 1));
}

int main()
{
    printf("%d",my_factorial(-1));
}