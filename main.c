#include <stdio.h>
#include <assert.h>
#include "solution.h"
int main() {
    printf("Hello, World!\n");
    int nums[7] = {4,5,6,7,0,1,2};
    int result = search(nums, 7, 0);
    printf("result is %d\n", result);
    assert(result == 4);
    return 0;
}
