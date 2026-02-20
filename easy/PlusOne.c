int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* ans = (int *)malloc(sizeof(int)*(digitsSize+1));

    for(int i = digitsSize-1;i>=0;i--){
        if((digits[i]) == 9){
            digits[i] = 0;
    
        }
        else{
            digits[i] = digits[i]+1;
            int* ans1 = (int *)malloc(sizeof(int)*digitsSize);
            int j = 0;
            while(j<digitsSize){
                ans1[j] = digits[j];
                j++;
            }
            *returnSize = digitsSize;
            return ans1;
        }
    }
    int* ans2 = (int *)calloc(digitsSize+1,sizeof(int));
    ans2[0] = 1;
    *returnSize = digitsSize+1;
    return ans2;
}