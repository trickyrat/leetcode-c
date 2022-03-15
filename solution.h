//
// Created by wangj on 2022-01-08.
//

#ifndef LEETCODEC_SOLUTION_H
#define LEETCODEC_SOLUTION_H

#include <assert.h>
#include <malloc.h>


struct ListNode {
  int val;
  struct ListNode *next;
};

/// <summary>
/// 1.两数之和
/// </summary>
/// <param name="nums"></param>
/// <param name="numsSize"></param>
/// <param name="target"></param>
/// <param name="returnSize"></param>
/// <returns></returns>
int *twoSum(int *nums, int numsSize, int target, int *returnSize);

/// <summary>
/// 
/// </summary>
/// <param name="nums"></param>
/// <param name="numSize"></param>
/// <param name="target"></param>
/// <returns></returns>
int search(int *nums, int numSize, int target);

/// <summary>
/// 206.反转链表
/// </summary>
struct ListNode *reverseList(struct ListNode *head);

/// <summary>
/// 1991.寻找数组的中间位置
/// </summary>
/// <param name="nums"></param>
/// <param name="numsSize"></param>
/// <returns></returns>
int pivotIndex(int *nums, int numsSize);

#endif // LEETCODEC_SOLUTION_H
