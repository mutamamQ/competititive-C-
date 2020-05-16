

int* factor(int a,int* returnSize){
    *returnSize=0;
    int* factors=malloc(a * sizeof(int));
    for(int i = 1;i<=a;i++){
        if(a%i==0)
        {
            factors[*returnSize]=i;
            (*returnSize)++;
        }
    }
    return factors;
}
 