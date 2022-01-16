//
// Created by wangj on 2022-01-08.
//

#include "solution.h"


int search(int* nums, int numSize, int target) {
    if (numSize < 1) {
        return -1;
    }
    if(numSize == 1) {
        return nums[0] ==  target ? 0 : -1;
    }
    int l = 0, r = numSize - 1;
    while(l <= r) {
        int mid = l + (r - l) / 2;
        if(nums[mid] == target) {
            return mid;
        }
        if(nums[0] <= nums[mid]) {
            if(nums[0] <= target && target < nums[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        } else {
            if(nums[mid] < target && target <= nums[numSize - 1]) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
    }
    return -1;
}

