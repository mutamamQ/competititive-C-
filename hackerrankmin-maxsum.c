#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void miniMaxSum(int arr_count, int* arr) {
    long int temp;
    for(int i=0;i<arr_count;i++){ //the number we are testing
        for(int k=0;k<arr_count;k++){//the entire array tester
            if(arr[i]<arr[k]){
                temp = arr[k];
                arr[k]=arr[i];
                arr[i]=temp;
            }

        }
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",arr[i]);  
    }
    
    
    long long int result_min=arr[0]+arr[1]+arr[2]+arr[3];
    long long int result_max=arr[1]+arr[2]+arr[3]+arr[4];
    printf("%ld %ld\n",result_min,result_max);
}
int main(){
    int arr[5]={256741038, 623958417, 467905213, 714532089, 938071625};
    int arr_count=5;
    miniMaxSum(arr_count,arr);


    
}