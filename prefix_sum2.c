#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h> 
#include <stddef.h> 
#include <stdint.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

int main()
{
    int size_ar, n_tests;
    scanf("%d%d",&size_ar,&n_tests);
    int ar[size_ar];
    for(int i = 0; i< size_ar;i++)
        scanf("%d",&ar[i]);
    int prefix[size_ar];
    prefix[0]=ar[0];
    for(int i = 1;i<size_ar;i++)
        prefix[i]= prefix[i-1]+ar[i];
    int answers[n_tests];
    int index1,index2;
    for(int i = 0;i<n_tests;i++)
    {
        scanf("%d%d",&index1,&index2);
        answers[i]=prefix[index2]-prefix[index1]+ar[index1];
    }
    for(int i =0;i<n_tests;i++)
        printf("%d\t",answers[i]);
    return 0;
}