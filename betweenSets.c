#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h> 
#include <stddef.h> 
#include <stdint.h> 
#include <stdio.h> 
#include <stdlib.h> 
#include <string.h>

/*
You will be given two arrays of integers and asked to determine all integers that satisfy the following two conditions:

    The elements of the first array are all factors of the integer being considered
    The integer being considered is a factor of all elements of the second array
*/
//what did I learn? I learned to brute force. PS check your fucking var names and expressions

int getTotalX(int a_count, int* a, int b_count, int* b) {
    int answer=0;
    
    for(int i = 1;i<100;i++)
    {
        int atracer = 0;
        int btracer = 0;
        for(int j = 0;j<a_count;j++)
        {
            if(i%a[j]==0)
                atracer++;
        }
        for(int j = 0;j<b_count;j++)
        {
            if(b[j]%i==0)
                btracer++;
        }
        if(atracer==a_count&&btracer==b_count)
            answer++;
    }   
    return answer;
}
