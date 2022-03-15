//
// Created by wangj on 2022-01-08.
//

#include "hash_table.h"

#include "solution.h"

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
  hashTable = NULL;
  for (int i = 0; i < numsSize; i++) {
    struct HashTable *it = find(target - nums[i]);
    if (it != NULL) {
      int *ret = malloc(sizeof(int) * 2);
      ret[0] = it->val, ret[1] = i;
      *returnSize = 2;
      return ret;
    }
    insert(nums[i], i);
  }
  *returnSize = 0;
  return NULL;
}

int search(int *nums, int numSize, int target) {
  if (numSize < 1) {
    return -1;
  }
  if (numSize == 1) {
    return nums[0] == target ? 0 : -1;
  }
  int l = 0, r = numSize - 1;
  while (l <= r) {
    int mid = l + (r - l) / 2;
    if (nums[mid] == target) {
      return mid;
    }
    if (nums[0] <= nums[mid]) {
      if (nums[0] <= target && target < nums[mid]) {
        r = mid - 1;
      } else {
        l = mid + 1;
      }
    } else {
      if (nums[mid] < target && target <= nums[numSize - 1]) {
        l = mid + 1;
      } else {
        r = mid - 1;
      }
    }
  }
  return -1;
}

struct ListNode *reverseList(struct ListNode *head) {
  struct ListNode *prev = NULL;
  struct ListNode *curr = head;
  while (curr) {
    struct ListNode *next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  return prev;
}

int pivotIndex(int *nums, int numsSize) {
  int total = 0;
  for (int i = 0; i < numsSize; i++) {
    total += nums[i];
  }
  int sum = 0;
  for (int i = 0; i < numsSize; i++) {
    if (2 * sum + nums[i] == total) {
      return i;
    }
    sum += nums[i];
  }
  return -1;
}
