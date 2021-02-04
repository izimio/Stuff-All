#include "My_JSlib.h"


void my_putchar(char c){
    printf("%c",c);
}

void My_putnbr(int nb){
    unsigned int nbr;
    
    if(nb < 0){
        my_putchar('-');
        nbr = -nb;
    }
    nbr = nb;
    if(nbr >= 10)
        My_putnbr(nbr / 10);
    my_putchar(nbr % 10 + '0');
}