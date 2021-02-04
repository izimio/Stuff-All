# include "My_JSlib.h"

int *My_range(int start, int end){
    int i;
    int *arr;

    i = -1;
    if(start == end){
        arr = (int *)malloc(sizeof(int) * 1);
        arr[0] = start;
        return(arr);
    }

    if(start > end)
        arr = (int *)malloc(sizeof(int) * (start - end));
    else
        arr = (int *)malloc(sizeof(int) * (end - start));
    while (start != end)
    {
        start = ((start > end) ? start - 1 : start + 1);
        arr[++i] = start;
    }
    return(arr);
}