#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int binary_search(int* ar,int left, int right, int value)
{
    int middle = (left+right)/2;
    if(ar[middle]== value)
        return 1;
    if(left>=right)
        return 0;

    if(ar[middle]>value)
        return binary_search(ar,left,middle-1,value);

    else
        return binary_search(ar,middle+1,right,value);

    return 0;
}
int main()
{
    int ar[9]={1, 3, 5, 7, 9, 12, 13, 45, 78};
    printf("%d",binary_search(ar,0,9,9));
    return 0;
}