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
 * 646. Maximum Length of Pair Chain
 * @param pairs
 * @param pairsSize
 * @param pairsColSize
 * @return
 */
int find_longest_chain(int** pairs, int pairsSize, int *pairsColSize);

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
 * 667. Beautiful Arrangement II
 * @param n
 * @param k
 * @return
 */
int *construct_array(int n, int k, int *returnSize);

/**
 * 669. Trim a Binary Search Tree
 * @param root
 * @param low
 * @param high
 * @return
 */
TreeNode *trim_bst(TreeNode *root, int low, int high);

/**
 * 670. Maximum Swap
 * @param num
 * @return
 */
int maximum_swap(int num);

/**
 * 687. Longest Univalue Path
 * @param root
 * @return
 */
int longest_univalue_path(TreeNode *root);

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
 * 769. Max Chunks To Make Sorted
 * @param arr
 * @param arrSize
 * @return
 */
int max_chunks_to_sorted(int *arr, int arrSize);

/**
 * 777. Swap Adjacent in LR String
 * @param start
 * @param end
 * @return
 */
bool can_transform(char* start, char* end);

/**
 * 793. Preimage Size of Factorial Zeroes Function
 * @param k
 * @return
 */
int preimage_size_fzf(int k);

/**
 * 801. Minimum Swaps To Make Sequences Increasing
 * @param nums1
 * @param nums1Size
 * @param nums2
 * @param nums2Size
 * @return
 */
int min_swap(int* nums1, int nums1Size, int* nums2, int nums2Size);

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
 * 828. Count Unique Characters of All Substrings of a Given String
 * @param s
 * @return
 */
int unique_letter_string(char *s);

/**
 * 856. Score of Parentheses
 * @param s
 * @return
 */
int score_of_parentheses(char *s);

/**
 * 870. Advantage Shuffle
 * @param nums1
 * @param nums1Size
 * @param nums2
 * @param nums2Size
 * @param returnSize
 * @return
 */
int *advantage_count(int *nums1, int nums1Size, int *nums2, int nums2Size, int *returnSize);

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
 * 921. Minimum Add to Make Parentheses Valid
 * @param s
 * @return
 */
int min_add_to_make_valid(char *s);

/**
 * 927. Three Equal Parts
 * @param arr
 * @param arrSize
 * @param returnSize
 * @return
 */
int* three_equal_parts(int *arr, int arrSize, int *returnSize);

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
 * 1582. Special Positions in a Binary Matrix
 * @param mat
 * @param matSize
 * @param matColSize
 * @return
 */
int num_special(int** mat, int matSize, int* matColSize);

/**
 * 1592. Rearrange Spaces Between Words
 * @param text
 * @return
 */
char *reorder_spaces(char *text);

/**
 * 1598. Crawler Log Folder
 * @param logs
 * @param logsSize
 * @return
 */
int min_operations(char **logs, int logsSize);

/**
 * 1608. Special Array With X Elements Greater Than or Equal X
 * @param nums
 * @param numsSize
 * @return
 */
int special_array(int *nums, int numsSize);

/**
 * 1619. Mean of Array After Removing Some Elements
 * @param arr
 * @param arrSize
 * @return
 */
double trim_mean(int *arr, int arrSize);

/**
 * 1624. Largest Substring Between Two Equal Characters
 * @param s
 * @return
 */
int max_length_between_equal_characters(char *s);

/**
 * 1672. Richest Customer Wealth
 * @param accounts
 * @param accountsSize
 * @param accountsColSize
 * @return
 */
int maximum_wealth(int **accounts, int accountsSize, int *accountsColSize);

/**
 * 1694. Reformat Phone Number
 * @param number
 * @return
 */
char *reformat_number(char* number);

/**
 * 1784. Check if Binary String Has at Most One Segment of Ones
 * @param s
 * @return
 */
bool check_ones_segment(char* s);

/**
 * 1790. Check if One String Swap Can Make Strings Equal
 * @param s1
 * @param s2
 * @return
 */
bool are_almost_equal(char *s1, char *s2);

/**
 * 1800. Maximum Ascending Subarray Sum
 * @param nums
 * @param numsSize
 * @return
 */
int max_ascending_sum(int *nums, int numsSize);

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
int find_middle_index(int *nums, int numsSize);

#endif// LEETCODEC_SOLUTION_H
