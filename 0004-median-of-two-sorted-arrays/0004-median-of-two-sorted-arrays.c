double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int c[nums1Size + nums2Size];

    for(int i = 0; i < nums1Size; i++){
        c[i] = nums1[i];
    }

    for(int i = 0; i < nums2Size; i++){
        c[i + nums1Size] = nums2[i];
    }

    for(int i = 0; i < nums1Size + nums2Size; i++){
        for(int j = i + 1; j < nums1Size + nums2Size; j++){
            if(c[j] < c[i]){
                int temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    int total = nums1Size + nums2Size;

    if(total % 2 != 0){
        return c[total / 2];
    }
    else{
        return (c[total / 2 - 1] + c[total / 2]) / 2.0;
    }
}