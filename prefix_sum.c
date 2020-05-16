#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h> 
#include <stddef.h> 
#include <stdint.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

int ar[10] = {5,7,9,12,34,65,78,97,12,32};


int main()
{ 
    int ar_size,n,index1,index2;
    scanf("%d",&ar_size);
    int ar[ar_size];
    scanf("%d",&n);
    for(int i = 0; i<ar_size;i++)
        scanf("%d",&ar[i]);

    int prefix[ar_size];
    prefix[0]=ar[0];
    for(int i = 1;i<ar_size;i++)
        prefix[i]=prefix[i-1]+ar[i];
    int answers[n];
    for(int j = 0; j < n; j++)
    {    
        scanf("%d%d",&index1,&index2);
        answers[j]=prefix[index2]-prefix[index1]+ar[index1];
    }
    for(int i = 0;i<n;i++)
        printf("%d\t",answers[i]);

    return 0;
}