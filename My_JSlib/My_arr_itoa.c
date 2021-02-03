#include <stdlib.h>
#include <stdio.h>

int count(int nb)
{
    long nbr;
    int i;

    i = 0;

    nbr = nb;

    if(nbr <= 0){
        i++;
        nbr = -nbr;
    }
    while (nbr > 0)
    {
        i++;
        nbr = nbr / 10;
    }
    return (i);
}


char *ft_itoa(int nb){
    long nbr;
    int i;
    char *toa;

    i = count(nb);
    nbr = nb;
    toa = (char *)malloc(sizeof(char) * count(nb) + 1);
    toa[i] = '\0';
    if( nb == 0){
        toa[0] = '0';
        return(toa);
    }
        if(nbr < 0){
            toa[0] = '-';
            nbr = -nbr;
            while (nbr > 0)
            { 
                i--;    
                toa[i] = nbr % 10 + '0';
                nbr = nbr / 10;
            }
        }
        if(nbr > 0){
            while (nbr > 0)
            { 
                i--;    
                toa[i] = nbr % 10 + '0';
                nbr = nbr / 10;
            }
        }
    
    return(toa);
}