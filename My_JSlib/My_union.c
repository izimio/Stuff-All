# include "My_JSlib.h"


int alreadySeen(char *str, int index, char c){
    int i;

    i = -1;
    while (++i < index)
        if(str[i] == c)
            return(1);
    return(0);
}

void My_Union(char *s1, char *s2){
    int i;
    int j;

    i = -1;
    j = -1;
    while (s1[++i])
    {
        if(alreadySeen(s1,i,s1[i]) == 0)
            printf("%c",s1[i]);
    }
    while (s2[++j])
    {
        if(alreadySeen(s1,i,s2[j]) == 0 && alreadySeen(s2,j,s2[j]) == 0)
            printf("%c",s2[j]);
    }
}