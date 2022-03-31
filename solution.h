//
// Created by wangj on 2022-01-08.
//

#ifndef LEETCODEC_SOLUTION_H
#define LEETCODEC_SOLUTION_H

#include <assert.h>
#include <malloc.h>
#include <stdbool.h>

#include "data_structure.h"


/// <summary>
/// 1.Two Sum
/// </summary>
/// <param name="nums"></param>
/// <param name="numsSize"></param>
/// <param name="target"></param>
/// <param name="returnSize"></param>
/// <returns></returns>
int *twoSum(int *nums, int numsSize, int target, int *returnSize);

/// <summary>
/// 33. Search in Rotated Sorted Array
/// </summary>
/// <param name="nums"></param>
/// <param name="numSize"></param>
/// <param name="target"></param>
/// <returns></returns>
int search(const int *nums, int numSize, int target);

/// <summary>
/// 100. Same Tree
/// </summary>
/// <param name="p"></param>
/// <param name="q"></param>
/// <returns></returns>
bool isSameTree(TreeNode* p, TreeNode* q);

/// <summary>
/// 206. Reverse Linked List
/// </summary>
struct ListNode *reverseList(ListNode *head);

/// 498.Diagonal Traverse
/// \param mat
/// \param matSize
/// \param matColSize
/// \param returnSize
/// \return
int* findDiagonalOrder(int** mat, int matSize, int* matColSize, int* returnSize);

/**
 * 728.Self Dividing Numbers
 * @param left
 * @param right
 * @param returnSize
 * @return
 */
int* selfDividingNumbers(int left, int right, int* returnSize);

/// <summary>
/// 1991. Find the Middle Index in Array
/// </summary>
/// <param name="nums"></param>
/// <param name="numsSize"></param>
/// <returns></returns>
int pivotIndex(int *nums, int numsSize);

#endif // LEETCODEC_SOLUTION_H
