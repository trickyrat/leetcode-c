//
// Created by trcikyrat on 2022-01-08.
//

#ifndef LEETCODEC_SOLUTION_H
#define LEETCODEC_SOLUTION_H

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
int *two_sum(int *nums, int numsSize, int target, int *returnSize);

/**
 * 2. Add Two Numbers
 * @param l1
 * @param l2
 * @return
 */
ListNode *add_two_numbers(ListNode *l1, ListNode *l2);

/**
 * 27. Remove Element
 * @param nums
 * @param val
 * @return
 */
int remove_element(int *nums, int numsSize, int val);

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
void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n);

/**
 * 100. Same Tree
 * @param p
 * @param q
 * @return
 */
bool is_same_tree(TreeNode *p, TreeNode *q);

/**
 * 206. Reverse Linked List
 * @param head
 * @return
 */
struct ListNode *reverse_list(ListNode *head);

/**
 * 357. Count Numbers with Unique Digits
 * @param n
 * @return
 */
int count_numbers_with_unique_digits(int n);

/**
 * 386. Lexicographical Numbers
 * @param n
 * @param returnSize
 * @return
 */
int *lexical_order(int n, int *returnSize);

/**
 * 467. Unique Substrings in Wraparound String
 * @param p
 * @return
 */
int find_substring_in_wraparound_string(char *p);

/**
 * 498.Diagonal Traverse
 * @param mat
 * @param matSize
 * @param matColSize
 * @param returnSize
 * @return
 */
int *find_diagonal_order(int **mat, int matSize, int *matColSize, int *returnSize);

/**
 * 658. Find K Closest Elements
 * @param arr
 * @param arrSize
 * @param k
 * @param x
 * @param returnSize
 * @return
 */
int *find_closest_elements(int* arr, int arrSize, int k, int x, int *returnSize);

/**
 * 662. Maximum Width of Binary Tree
 * @param root
 * @return
 */
int width_of_binary_tree(struct TreeNode* root);

/**
 * 728.Self Dividing Numbers
 * @param left
 * @param right
 * @param returnSize
 * @return
 */
int *self_dividing_numbers(int left, int right, int *returnSize);

/**
 * 744. Find Smallest Letter Greater Than Target
 * @param letters
 * @param letterSize
 * @param target
 * @return
 */
char next_greatest_letter(char *letters, int letterSize, char target);

/**
 * 793. Preimage Size of Factorial Zeroes Function
 * @param k
 * @return
 */
int preimage_size_fzf(int k);

/**
 * 804. Unique Morse Code Words
 * @param words
 * @param wordsSize
 * @return
 */
int unique_morse_representations(char **words, int wordsSize);

/**
 * 806. Number of Lines To Write String
 * @param widths
 * @param widthsSize
 * @param s
 * @param returnSize
 * @return
 */
int *number_of_lines(int *widths, int widthsSize, char *s, int *returnSize);

/**
 * 883. Projection Area of 3D Shapes
 * @param grid
 * @param gridSize
 * @param gridColSize
 * @return
 */
int projection_area(int **grid, int gridSize, int *gridColSize);

/**
 * 905. Sort Array By Parity
 * @param nums
 * @param numsSize
 * @param returnSize
 * @return
 */
int *sort_array_by_parity(int *nums, int numsSize, int *returnSize);

/**
 * 942. DI String Match
 * @param s
 * @param sSize
 * @param returnSize
 * @return
 */
int *di_string_match(char *s, int *returnSize);

/**
 * 944. Delete Columns to Make Sorted
 * @param strs
 * @param strsSize
 * @return
 */
int min_deletion_size(char **strs, int strsSize);

/**
 * 946. Validate Stack Sequences
 * @param pushed
 * @param pushedSize
 * @param popped
 * @param poppedSize
 * @return
 */
bool validate_stack_sequences(int *pushed, int pushedSize, int *popped, int poppedSize);

/**
 * 953. Verifying an Alien Dictionary
 * @param words
 * @param wordsSize
 * @param order
 * @return
 */
bool is_alien_sorted(char **words, int wordsSize, char *order);

/**
 * 965. Univalued Binary Tree
 * @param root
 * @return
 */
bool is_unival_tree(TreeNode *root);

/**
 * 998. Maximum Binary Tree II
 * @param root
 * @param val
 * @return
 */
struct TreeNode* insert_into_max_tree(struct TreeNode* root, int val);

/**
 * 1108. Defanging an IP Address
 * @param address
 * @return
 */
char *defang_ip_addr(char *address);

/**
 * 1403. Minimum Subsequence in Non-Increasing Order
 * @param nums
 * @param numsSize
 * @param returnSize
 * @return
 */
int *min_subsequence(int *nums, int numsSize, int *returnSize);

/**
 * 1408. String Matching in an Array
 * @param words
 * @param wordsSize
 * @param returnSize
 * @return
 */
char **string_matching(char **words, int wordsSize, int *returnSize);

/**
 * 1450. Number of Students Doing Homework at a Given Time
 * @param startTime
 * @param startTimeSize
 * @param endTime
 * @param endTimeSize
 * @param queryTime
 * @return
 */
int busy_student(int *startTime, int startTimeSize, int *endTime, int endTimeSize, int queryTime);

/**
 * 1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence
 * @param sentence
 * @param searchWord
 * @return
 */
int is_prefix_of_word(char *sentence, char *searchWord);

/**
 * 1460. Make Two Arrays Equal by Reversing Sub-arrays
 * @param target
 * @param targetSize
 * @param arr
 * @param arrSize
 * @return
 */
bool can_be_equal(int* target, int targetSize, int* arr, int arrSize);

/**
 * 1464. Maximum Product of Two Elements in an Array
 * @param nums
 * @param numsSize
 * @return
 */
int max_product(int* nums, int numsSize);

/**
 * 1470. Shuffle the Array
 * @param nums
 * @param numsSize
 * @param n
 * @return
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize);

/**
 * 1475. Final Prices With a Special Discount in a Shop
 * @param prices
 * @param pricesSize
 * @param returnSize
 * @return
 */
int* final_prices(int* prices, int pricesSize, int* returnSize);

/**
 * 1672. Richest Customer Wealth
 * @param accounts
 * @param accountsSize
 * @param accountsColSize
 * @return
 */
int maximum_wealth(int **accounts, int accountsSize, int *accountsColSize);

/**
 * 1823. Find the Winner of the Circular Game
 * @param n
 * @param k
 * @return
 */
int find_the_winner(int n, int k);

/**
 * 1991. Find the Middle Index in Array
 * @param nums
 * @param numsSize
 * @return
 */
int pivot_index(int *nums, int numsSize);

#endif// LEETCODEC_SOLUTION_H
