double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int total = nums1Size + nums2Size;
    int i = 0,j=0,k=0;
    int merge[total/2+1];
    while(k < total/2+1){
        if(i == nums1Size){
            merge[k] = nums2[j];
            j++;
        }
        else if(j == nums2Size){
            merge[k] = nums1[i];
            i++;
        }
        else if(nums1[i] < nums2[j]){
                merge[k] = nums1[i];
                i++;
        }
        else{
            merge[k] = nums2[j];
            j++;
        }
        k++;
    }
    if(total % 2 == 1){
        double val = merge[total/2];
        return val;
    }
    else{
        double val1 = merge[total/2-1];
        double val2 = merge[total/2];
        return (val1+val2)/2;
    }
}