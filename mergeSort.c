#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//My futile attempt to write a merge sort whilst using as litle a reference as possible

int arr[10] = {-3, -13, 7, 81, 92, 13, 17, 23, 1e5, 500};

void merge(int *arr,int left,int middle,int right){
    int left_arr[middle-left+1], right_arr[right-middle]; 

    for(int i = left;i<=middle;i++)
        left_arr[i-left]=arr[i];

    for(int i = middle+1;i<=right;i++)
        right_arr[i-(middle+1)]=arr[i];
    
    int i=0,j=0,k=left;

    int left_size = sizeof(left_arr)/sizeof(int);
    int right_size = sizeof(right_arr)/sizeof(int);

    while(i<left_size && j<right_size)
    {
        if(left_arr[i]<right_arr[j])
            arr[k++]=left_arr[i++];
        else
            arr[k++]=right_arr[j++];
    }

    while(i< left_size)
    {
        arr[k++]=left_arr[i++];
    }

    while(j<right_size)
        arr[k++]=right_arr[j++];
    return;
}

void merge_sort(int* arr,int left,int right){
    if(left >= right)
        return;
    
    int middle = (left + right)/2;

    merge_sort(arr,left,middle);
    merge_sort(arr,middle + 1, right);
    merge(arr,left,middle,right);
    return;
}

int main(){
    merge_sort(arr,0,9);
    for(int i = 0; i < 10;i++)
        printf("%d\n",arr[i]);
    return 0;
}