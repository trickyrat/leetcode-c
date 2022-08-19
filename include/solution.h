//
// Created by wangj on 2022-01-08.
//

#ifndef LEETCODEC_SOLUTION_H
#define LEETCODEC_SOLUTION_H

#include <assert.h>
#include <malloc.h>
#include <stdbool.h>

#include "datastructures.h"

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) > (b) ? (b) : (a))

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
 * 27. Remove Element
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
 * 48. Rotate Image
 * @param nums
 */
void rotate(int **matrix, int matrixSize, int *matrixColSize);

/**
 * 88. Merge Sorted Array
 * @param nums1
 * @param nums1Size
 * @param m
 * @param nums2
 * @param nums2Size
 * @param n
 */
void merge(int* nums1, int nums1Size, int m, int *nums2, int nums2Size, int n);

/**
 * 100. Same Tree
 * @param p
 * @param q
 * @return
 */
bool isSameTree(TreeNode *p, TreeNode *q);

/**
 * 206. Reverse Linked List
 * @param head
 * @return
 */
struct ListNode *reverseList(ListNode *head);

/**
 * 357. Count Numbers with Unique Digits
 * @param n
 * @return
 */
int countNumbersWithUniqueDigits(int n);

/**
 * 386. Lexicographical Numbers
 * @param n
 * @param returnSize
 * @return
 */
int *lexicalOrder(int n, int *returnSize);

/**
 * 467. Unique Substrings in Wraparound String
 * @param p
 * @return
 */
int findSubstringInWraparoundString(char *p);

/**
 * 498.Diagonal Traverse
 * @param mat
 * @param matSize
 * @param matColSize
 * @param returnSize
 * @return
 */
int *findDiagonalOrder(int **mat, int matSize, int *matColSize, int *returnSize);

/**
 * 728.Self Dividing Numbers
 * @param left
 * @param right
 * @param returnSize
 * @return
 */
int *selfDividingNumbers(int left, int right, int *returnSize);

/**
 * 744. Find Smallest Letter Greater Than Target
 * @param letters
 * @param letterSize
 * @param target
 * @return
 */
char nextGreatestLetter(char *letters, int letterSize, char target);

/**
 * 804. Unique Morse Code Words
 * @param words
 * @param wordsSize
 * @return
 */
int uniqueMorseRepresentations(char **words, int wordsSize);

/**
 * 806. Number of Lines To Write String
 * @param widths
 * @param widthsSize
 * @param s
 * @param returnSize
 * @return
 */
int *numberOfLines(int *widths, int widthsSize, char *s, int *returnSize);

/**
 * 883. Projection Area of 3D Shapes
 * @param grid
 * @param gridSize
 * @param gridColSize
 * @return
 */
int projectionArea(int **grid, int gridSize, int *gridColSize);

/**
 * 905. Sort Array By Parity
 * @param nums
 * @param numsSize
 * @param returnSize
 * @return
 */
int *sortArrayByParity(int *nums, int numsSize, int *returnSize);

/**
 * 942. DI String Match
 * @param s
 * @param sSize
 * @param returnSize
 * @return
 */
int *diStringMatch(char *s, int *returnSize);

/**
 * 944. Delete Columns to Make Sorted
 * @param strs
 * @param strsSize
 * @return
 */
int minDeletionSize(char **strs, int strsSize);

/**
 * 953. Verifying an Alien Dictionary
 * @param words
 * @param wordsSize
 * @param order
 * @return
 */
bool isAlienSorted(char **words, int wordsSize, char *order);

/**
 * 965. Univalued Binary Tree
 * @param root
 * @return
 */
bool isUnivalTree(TreeNode *root);

/**
 * 1108. Defanging an IP Address
 * @param address
 * @return
 */
char* defangIPaddr(char* address);

/**
 * 1403. Minimum Subsequence in Non-Increasing Order
 * @param nums
 * @param numsSize
 * @param returnSize
 * @return
 */
int* minSubsequence(int* nums, int numsSize, int* returnSize);

/**
 * 1408. String Matching in an Array
 * @param words
 * @param wordsSize
 * @param returnSize
 * @return
 */
char ** stringMatching(char ** words, int wordsSize, int* returnSize);

/**
 * 1450. Number of Students Doing Homework at a Given Time
 * @param startTime
 * @param startTimeSize
 * @param endTime
 * @param endTimeSize
 * @param queryTime
 * @return
 */
int busyStudent(int* startTime, int startTimeSize, int* endTime, int endTimeSize, int queryTime);

/**
 * 1672. Richest Customer Wealth
 * @param accounts
 * @param accountsSize
 * @param accountsColSize
 * @return
 */
int maximumWealth(int **accounts, int accountsSize, int *accountsColSize);

/**
 * 1823. Find the Winner of the Circular Game
 * @param n
 * @param k
 * @return
 */
int findTheWinner(int n, int k);

/**
 * 1991. Find the Middle Index in Array
 * @param nums
 * @param numsSize
 * @return
 */
int pivotIndex(int *nums, int numsSize);

#endif// LEETCODEC_SOLUTION_H
