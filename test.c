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

#define EXPECT_EQ_TRUE(actual)                                                 \
  EXPECT_EQ_BASE(1 == (actual), 1, actual, "%d")

#define EXPECT_EQ_FALSE(actual)                                                 \
  EXPECT_EQ_BASE(0 == (actual), 0, actual, "%d")


#define EXPECT_EQ_ARRAY(expect, expectedSize, actual, actualSize) \
  EXPECT_EQ_INT(expectedSize, actualSize);                        \
  for (int i = 0; i < expectedSize; ++i) {                        \
    EXPECT_EQ_INT(expect[i], actual[i]);                          \
  }                                                               \


static void test_two_sum() {
    int nums[4] = {2, 7, 11, 15};
    int actualReturnSize = 0;
    int *actual = twoSum(&nums, 4, 9, &actualReturnSize);
    int expect[2] = {0, 1};
    int expectedReturnSize = 2;
    EXPECT_EQ_ARRAY(expect, expectedReturnSize, actual, actualReturnSize);
}

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

static void test_is_same_tree() {
    TreeNode left1 = {2, NULL, NULL};
    TreeNode right1 = {3, NULL, NULL};
    TreeNode root1 = {1, &left1, &right1};
    TreeNode left2 = {2, NULL, NULL};
    TreeNode right2 = {3, NULL, NULL};
    TreeNode root2 = {1, &left2, &right2};
    EXPECT_EQ_TRUE(isSameTree(&root1, &root2));
    EXPECT_EQ_TRUE(isSameTree(NULL, NULL));
    EXPECT_EQ_FALSE(isSameTree(&root1, NULL));
    EXPECT_EQ_FALSE(isSameTree(NULL, &root1));
}

int main() {
    test_two_sum();
    test_search();
    test_pivot_index();
    test_is_same_tree();
    printf("%d/%d (%3.2f%%) passed\n", test_pass, test_count, test_pass * 100.0 / test_count);
    return main_ret;
}
