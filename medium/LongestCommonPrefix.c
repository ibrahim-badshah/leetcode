char* longestCommonPrefix(char** strs, int strsSize) {
    char* ans = (char*)malloc(10000 * sizeof(char));
    int i = 0;
    if(strsSize == 0) return "";
    while(strs[0][i] != '\0'){
        ans[i] = strs[0][i];
        i++; 
    }
    ans[i] = strs[0][i];
    int j;
    for(i = 1;i < strsSize;i++){
        int j = 0;
        while((strs[i][j] == ans[j]) && (ans[j] != '\0')){
            j++;
        }
        ans[j] = '\0';
    }
    return ans;
}