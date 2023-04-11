//
// Created by trcikyrat on 2022-01-08.
//

#pragma once

#include <stdbool.h>

#include "datastructures.h"

/**
 *  1.Two Sum
 * @param nums
 * @param nums_size
 * @param target
 * @param return_size
 * @return
 */
int *two_sum(int *nums, int nums_size, int target, int *return_size);

/**
 * 2. Add Two Numbers
 * @param l1
 * @param l2
 * @return
 */
ListNode *add_two_numbers(ListNode *l1, ListNode *l2);

/**
 * 19. Remove Nth Node From End of List
 * @param head
 * @param n
 * @return
 */
ListNode *remove_nth_from_end(ListNode *head, int n);

/// <summary>
/// 26. Remove Duplicates from Sorted Array
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <returns></returns>
int remove_duplicates(int *nums, int nums_size);

/**
 * 27. Remove Element
 * @param nums
 * @param val
 * @return
 */
int remove_element(int *nums, int nums_size, int val);

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
 * 141. Linked List Cycle
 * @param head
 * @return
 */
bool has_cycle(ListNode *head);

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
 * @param return_size
 * @return
 */
int *lexical_order(int n, int *return_size);

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
 * @param return_size
 * @return
 */
int *find_diagonal_order(int **mat, int matSize, int *matColSize, int *return_size);

/**
 * 646. Maximum Length of Pair Chain
 * @param pairs
 * @param pairsSize
 * @param pairsColSize
 * @return
 */
int find_longest_chain(int **pairs, int pairsSize, int *pairsColSize);

/**
 * 658. Find K Closest Elements
 * @param arr
 * @param arrSize
 * @param k
 * @param x
 * @param return_size
 * @return
 */
int *find_closest_elements(int *arr, int arrSize, int k, int x, int *return_size);

/**
 * 662. Maximum Width of Binary Tree
 * @param root
 * @return
 */
int width_of_binary_tree(struct TreeNode *root);

/// <summary>
/// 665. Non-decreasing Array
/// </summary>
/// <param name="arr"></param>
/// <returns></returns>
bool check_possibility(int *nums, int nums_size);

/**
 * 667. Beautiful Arrangement II
 * @param n
 * @param k
 * @return
 */
int *construct_array(int n, int k, int *return_size);

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
 * @param return_size
 * @return
 */
int *self_dividing_numbers(int left, int right, int *return_size);

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
bool can_transform(char *start, char *end);

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
int min_swap(int *nums1, int nums1Size, int *nums2, int nums2Size);

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
 * @param return_size
 * @return
 */
int *number_of_lines(int *widths, int widthsSize, char *s, int *return_size);

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
 * @param return_size
 * @return
 */
int *advantage_count(int *nums1, int nums1Size, int *nums2, int nums2Size, int *return_size);

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
 * @param nums_size
 * @param return_size
 * @return
 */
int *sort_array_by_parity(int *nums, int nums_size, int *return_size);

/**
 * 915. Partition Array into Disjoint Intervals
 * @param nums
 * @param nums_size
 * @return
 */
int partition_disjoint(int *nums, int nums_size);

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
 * @param return_size
 * @return
 */
int *three_equal_parts(int *arr, int arrSize, int *return_size);

/**
 * 934. Shortest Bridge
 * @param grid
 * @param gridSize
 * @param gridColSize
 * @return
 */
int shortest_bridge(int **grid, int gridSize, int *gridColSize);

/**
 * 940. Distinct Subsequences II
 * @param s
 * @return
 */
int distinct_subseq_ii(char *s);

/**
 * 942. DI String Match
 * @param s
 * @param sSize
 * @param return_size
 * @return
 */
int *di_string_match(char *s, int *return_size);

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
struct TreeNode *insert_into_max_tree(struct TreeNode *root, int val);

/**
 * 1108. Defanging an IP Address
 * @param address
 * @return
 */
char *defang_ip_addr(char *address);

/**
 * 1403. Minimum Subsequence in Non-Increasing Order
 * @param nums
 * @param nums_size
 * @param return_size
 * @return
 */
int *min_subsequence(int *nums, int nums_size, int *return_size);

/**
 * 1408. String Matching in an Array
 * @param words
 * @param wordsSize
 * @param return_size
 * @return
 */
char **string_matching(char **words, int wordsSize, int *return_size);

/**
 * 1441. Build an Array With Stack Operations
 * @param target
 * @param targetSize
 * @param n
 * @param return_size
 * @return
 */
char **build_array(int *target, int targetSize, int n, int *return_size);

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
bool can_be_equal(int *target, int targetSize, int *arr, int arrSize);

/**
 * 1464. Maximum Product of Two Elements in an Array
 * @param nums
 * @param nums_size
 * @return
 */
int max_product(int *nums, int nums_size);

/**
 * 1470. Shuffle the Array
 * @param nums
 * @param nums_size
 * @param n
 * @return
 */
int *shuffle(int *nums, int nums_size, int n, int *return_size);

/**
 * 1475. Final Prices With a Special Discount in a Shop
 * @param prices
 * @param pricesSize
 * @param return_size
 * @return
 */
int *final_prices(int *prices, int pricesSize, int *return_size);

/**
 * 1582. Special Positions in a Binary Matrix
 * @param mat
 * @param matSize
 * @param matColSize
 * @return
 */
int num_special(int **mat, int matSize, int *matColSize);

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
 * @param nums_size
 * @return
 */
int special_array(int *nums, int nums_size);

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
 * 1658. Minimum Operations to Reduce X to Zero
 * @param num
 * @param nums_size
 * @param x
 * @return
 */
int min_operations_2(int *nums, int nums_size, int x);

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
char *reformat_number(char *number);

/**
 * 1750. Minimum Length of String After Deleting Similar Ends
 * @param s
 * @return
 */
int minimum_length(char *s);

/**
 * 1768. Merge Strings Alternately
 * @param word1
 * @param word2
 * @return
 */
char *merge_alternately(char *word1, char *word2);

/**
 * 1779. Find Nearest Point That Has the Same X or Y Coordinate
 * @param x
 * @param y
 * @param points
 * @param pointsSize
 * @param pointsColSize
 * @return
 */
int nearest_valid_point(int x, int y, int **points, int pointsSize, int *pointsColSize);

/**
 * 1784. Check if Binary String Has at Most One Segment of Ones
 * @param s
 * @return
 */
bool check_ones_segment(char *s);

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
 * @param nums_size
 * @return
 */
int max_ascending_sum(int *nums, int nums_size);

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
 * @param nums_size
 * @return
 */
int find_middle_index(int *nums, int nums_size);

/**
 * 2011. Final Value of Variable After Performing Operations
 * @param operations
 * @param operationsSize
 * @return
 */
int final_value_after_operations(char **operations, int operationsSize);

/**
 * 2027. Minimum Moves to Convert String
 * @param s
 * @return
 */
int minimum_moves(char *s);

/**
 * 2032. Two Out of Three
 * @param nums1
 * @param nums1Size
 * @param nums2
 * @param nums2Size
 * @param nums3
 * @param nums3Size
 * @return
 */
int *two_out_of_three(int *nums1, int nums1Size, int *nums2, int nums2Size, int *nums3, int nums3Size, int *return_size);

/**
 * 2037. Minimum Number of Moves to Seat Everyone
 * @param seats
 * @param seatsSize
 * @param students
 * @param studentsSize
 * @return
 */
int min_moves_to_seat(int *seats, int seatsSize, int *students, int studentsSize);

/**
 * 2042. Check if Numbers Are Ascending in a Sentence
 * @param s
 * @return
 */
bool are_number_ascending(char *s);

/**
 * 2180. Count Integers With Even Digit Sum
 * @param n
 * @return
 */
int count_even(int num);

/**
 * 2185. Counting Words With a Given Prefix
 * @param words
 * @param wordsSize
 * @param pref
 * @return
 */
int prefix_count(char **words, int wordsSize, char *pref);

/**
 * 2351. First Letter to Appear Twice
 * @param s
 * @return
 */
char repeated_character(char *s);