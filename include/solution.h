//
// Created by wangj on 2022-01-08.
//

#ifndef LEETCODEC_SOLUTION_H
#define LEETCODEC_SOLUTION_H

#include <assert.h>
#include <malloc.h>
#include <stdbool.h>

#include "datastructures.h"


/**
 *  1.Two Sum
 * @param nums
 * @param numsSize
 * @param target
 * @param returnSize
 * @return
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize);

/**
 * 27.移除元素
 * @param nums
 * @param val
 * @return
 */
int removeElement(int *nums, int numsSize, int val);

/**
 * 33. Search in Rotated Sorted Array
 * @param nums
 * @param numSize
 * @param target
 * @return
 */
int search(const int *nums, int numSize, int target);

/**
 * 100. Same Tree
 * @param p
 * @param q
 * @return
 */
bool isSameTree(TreeNode* p, TreeNode* q);

/**
 * 206. Reverse Linked List
 * @param head
 * @return
 */
struct ListNode *reverseList(ListNode *head);

/**
 * 357. 统计各位数字都不同的数字个数
 * @param n
 * @return
 */
int countNumbersWithUniqueDigits(int n);

/**
 * 498.Diagonal Traverse
 * @param mat
 * @param matSize
 * @param matColSize
 * @param returnSize
 * @return
 */
int* findDiagonalOrder(int** mat, int matSize, int* matColSize, int* returnSize);

/**
 * 728.Self Dividing Numbers
 * @param left
 * @param right
 * @param returnSize
 * @return
 */
int* selfDividingNumbers(int left, int right, int* returnSize);

/**
 * 744. Find Smallest Letter Greater Than Target
 * @param letters
 * @param letterSize
 * @param target
 * @return
 */
char nextGreatestLetter(char* letters, int letterSize, char target);

/**
 * 804. Unique Morse Code Words
 * @param words
 * @param wordsSize
 * @return
 */
int uniqueMorseRepresentations(char ** words, int wordsSize);

/**
 * 806. 写字符串需要的行数
 * @param widths
 * @param widthsSize
 * @param s
 * @param returnSize
 * @return
 */
int* numberOfLines(int* widths, int widthsSize, char* s, int* returnSize);

/**
 * 1672. Richest Customer Wealth
 * @param accounts
 * @param accountsSize
 * @param accountsColSize
 * @return
 */
int maximumWealth(int** accounts, int accountsSize, int* accountsColSize);

/**
 * 1991. Find the Middle Index in Array
 * @param nums
 * @param numsSize
 * @return
 */
int pivotIndex(int *nums, int numsSize);

#endif // LEETCODEC_SOLUTION_H
