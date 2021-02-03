#ifndef MY_JSLIB_H
# define MY_JSLIB_H

# include <stdlib.h>
# include <stdio.h>

int     my_length(char *str);
void    my_arr_from(int tab[], int size, char calcul, int num);
void    my_arr_copyWithin(int tab[], int size, int index, int num);
int     *my_arr_concat(int tab1[], int tab2[], int size1, int size2);
void    My_arr_fill(int tab[], int size ,int index, int start);
char    *My_arr_charfilter(char *str, int (*func)(char));
int     My_arr_find(int tab[], int size, int (*func)(int));
#endif