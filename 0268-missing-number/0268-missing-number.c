int missingNumber(int* nums, int numsSize) {

    int sum = 0, sumofnumber = 0;

    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }

    for (int i = 0; i <= numsSize; i++) {
        sumofnumber += i;
    }

    return sumofnumber - sum;
    }

     
