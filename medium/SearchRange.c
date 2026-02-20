int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    int* ans = (int *)malloc(sizeof(int)*2);
    ans[0] = -1;
    ans[1] = -1;
    *returnSize = 2;
    if(numsSize == 0) return ans;
    int left = 0;
    int right = numsSize-1;
    int mid;
    while(left<=right){
        mid = (left+right)/2;
        if(nums[mid] == target){
            break;
        }
        else if(nums[mid] > target){
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }
    if(nums[mid] != target){
        return ans;
    }
    else{
        left = mid;
        right = mid;
        while(1){
            if(right<numsSize && nums[right] == target){
                right++;
            }
            else if(left >= 0  && nums[left] == target){
                left--;
            }
            else{
                break;
            }
        }
        ans[0] = left+1;
        ans[1] = right-1;
        return ans;
    }
}