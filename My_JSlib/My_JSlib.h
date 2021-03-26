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
char    My_arr_charFind(char *str, int (*func)(char));
int     My_arr_indexOf(int tab[], int size, int (*func)(int));
char    My_arr_charIndexOf(char *str, int (*func)(char));
int     My_arr_includes(int tab[],int size, int value);
char    **My_arr_split(char *str, char *charset);
int     My_arr_lastIndexOf(int tab[],int size, int value);
int     *My_arr_pop(int tab[], int size, int value);
int     *My_arr_push(int tab[], int size, int value);
int     my_arr_reduce(int tab[], int size, char calcul);
void    My_arr_reverse(int tab[], int size);
void    My_arr_charReverse(char *str);
int     *My_arr_shift(int tab[], int size);
void    My_arr_sort(int tab[], int size);
int     *My_arr_splice(int tab[], int size, int from, int to);
char    *My_arr_toString(int tab[], int size);
int     My_arr_atoi(char *str);
char    *ft_itoa(int nb);
int     *My_arr_unshift(int tab[],int size,int a, int b);
int     *My_range(int start, int end);
void    My_Union(char *s1, char *s2);
void    My_inter(char *s1, char *s2);
void    My_putnbr(int nb);
int     My_arr_isOnlynums(char *str);
void    putnbr_base(int nb, char *base);
char    *My_trim(char *str);
char    *My_arr_Charpush(char *str, char c);
void    initialeReader(char *str);
int     my_fibonnaci(int n);
#endif