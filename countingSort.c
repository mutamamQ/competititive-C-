#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int N=1e5+5;
void sort(int* ar,int ar_size)
{
    int numbers[N];
    memset(numbers,0,(N * sizeof(int)));
    for(int i=0;i<ar_size;i++)
    {
        numbers[ar[i]]++;
    }
    int index=0;
    for(int i =0; i<N;i++)
        while(numbers[i]--)
            ar[index++]=i;
    return;
}

int main()
{
    int n=13;
    int ar[13]={24,64,92,26,87,65,9,16,92,35,5,35};
    sort(ar,n);
    for(int i=0; i<n;i++)
        printf("%d\t",ar[i]);
    return 0;
}