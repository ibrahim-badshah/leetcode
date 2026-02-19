int search(int* nums, int numsSize, int target) {
    if (numsSize == 0) return -1;
    if (numsSize == 1) {
        return (nums[0] == target) ? 0 : -1;
    }
    int k = 0;
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] < nums[i - 1]) {
            k = i;
            break;
        }
    }
    int first = 0;
    int last = numsSize - 1;

    while (first <= last) {
        int mid = (first + last) / 2;
        int realMid = (mid + k) % numsSize;

        if (nums[realMid] == target) {
            return realMid;
        } 
        else if (nums[realMid] > target) {
            last = mid - 1;
        } 
        else {
            first = mid + 1;
        }
    }

    return -1;
}
