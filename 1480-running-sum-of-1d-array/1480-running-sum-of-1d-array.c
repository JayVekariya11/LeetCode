/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {
    static int result[1000];   
    *returnSize = numsSize;

    for (int i = 0; i < numsSize; i++) {
        int sum = 0;
        for (int j = 0; j <= i; j++) {
            sum += nums[j];
        }
        result[i] = sum;
    }

    return result;  
}