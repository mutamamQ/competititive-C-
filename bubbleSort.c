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
        for(int j = 0;j<(ar_size-i-1);j++)
        {
            if(ar[j]>ar[j+1])
            {
                swap(&ar[j],&ar[j+1]);
            }
        }
    }
}
int main()
{
    int n=19;
    int ar[19]={24,64,92,26,87,65,35,97,24,12,54,23,7,9,3,90,45,74,35};
    sort(n,ar);
    for(int i =0;i<n;i++)
    {
        printf("%d\t",ar[i]);
    }
    return 0;
}