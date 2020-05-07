#include <stdio.h>

void swap(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b=temp;
    return;
}

void sort(int ar_size, int* ar)
{
    for(int i = 0;i<ar_size;i++)
    {
        int maxPos=0;
        for(int j = 0;j<(ar_size-i);j++)
        {
            if(ar[j]>ar[maxPos])
            {
                maxPos=j;
            }
        }
        swap(&ar[maxPos],&ar[ar_size-i-1]);
    }
}
int main()
{
    int n=12;
    int ar[12]={24,64,92,26,87,65,9,16,92,35,5,35};
    sort(n,ar);
    for(int i =0;i<n;i++)
    {
        printf("%d\t",ar[i]);
    }
    return 0;
}