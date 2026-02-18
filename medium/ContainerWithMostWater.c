int min(int n,int m){
    int ans =  m <= n ? m : n;
    return ans;
}
int area(int height,int i,int j){
    return height*(j-i);
}

int maxArea(int* height, int heightSize) {
    int ans = 0;
    int a;
    int i = 0,j = heightSize - 1;
    while(i < j){
        a = area(min(height[i],height[j]),i,j);
        if(a>ans){
            ans = a;
        }
        if(height[i]<=height[j]){
            i++;
        }
        else{
            j--;
        }
    }
    return ans;
}