#include "solution.h"

#include <assert.h>
#include <stdio.h>

static int main_ret = 0;
static int test_count = 0;
static int test_pass = 0;

#define EXPECT_EQ_BASE(equality, expect, actual, format)                       \
  do {                                                                         \
    test_count++;                                                              \
    if (equality) {                                                            \
      test_pass++;                                                             \
    } else {                                                                   \
      fprintf(stderr, "%s:%d: expect: " format " actual: " format "\n",        \
              __FILE__, __LINE__, expect, actual);                             \
    }                                                                          \
  } while (0)

#define EXPECT_EQ_INT(expect, actual)                                          \
  EXPECT_EQ_BASE((expect) == (actual), expect, actual, "%d")

static void test_search() {
  int nums[7] = {4, 5, 6, 7, 0, 1, 2};
  EXPECT_EQ_INT(4, search(nums, 7, 0));
}

static void test_pivot_index() { 
  int nums1[5] = {2, 3, -1, 8, 4};
  int nums2[3] = {1, -1, 4};
  int nums3[2] = {2, 5};
  EXPECT_EQ_INT(3, pivotIndex(nums1, 5));
  EXPECT_EQ_INT(2, pivotIndex(nums2, 3));
  EXPECT_EQ_INT(-1, pivotIndex(nums3, 2));
}

int main() {
  test_search();
  test_pivot_index();
  printf("%d/%d (%3.2f%%) passed\n", test_pass, test_count, test_pass * 100.0/test_count);
  return main_ret;
}
