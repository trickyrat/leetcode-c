#pragma once

#include <stdbool.h>

#include "data_structures.h"

/// <summary>
/// 1.Two Sum
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <param name="target"></param>
/// <param name="return_size"></param>
/// <returns></returns>
int *two_sum(int *nums, int nums_size, int target, int *return_size);

/**
 * 2. Add Two Numbers
 * @param l1
 * @param l2
 * @return
 */
ListNode *add_two_numbers(ListNode *l1, ListNode *l2);

/// <summary>
/// 19. Remove Nth Node From End of List
/// </summary>
/// <param name="head"></param>
/// <param name="n"></param>
/// <returns></returns>
ListNode *remove_nth_from_end(ListNode *head, int n);

/// <summary>
/// 26. Remove Duplicates from Sorted Array
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <returns></returns>
int remove_duplicates(int *nums, int nums_size);

/// <summary>
/// 27. Remove Element
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <param name="val"></param>
/// <returns></returns>
int remove_element(int *nums, int nums_size, int val);

/// <summary>
/// 33. Search in Rotated Sorted Array
/// </summary>
/// <param name="nums"></param>
/// <param name="numSize"></param>
/// <param name="target"></param>
/// <returns></returns>
int search(const int *nums, int numSize, int target);

/// <summary>
/// 48. Rotate Image
/// </summary>
/// <param name="matrix"></param>
/// <param name="matrix_size"></param>
/// <param name="matrix_col_size"></param>
void rotate_image(int **matrix, int matrix_size, int *matrix_col_size);

/// <summary>
/// 88. Merge Sorted Array
/// </summary>
/// <param name="nums1"></param>
/// <param name="nums1_size"></param>
/// <param name="m"></param>
/// <param name="nums2"></param>
/// <param name="nums2_size"></param>
/// <param name="n"></param>
void merge(int *nums1, int nums1_size, int m, int *nums2, int nums2_size, int n);

/// <summary>
/// 100. Same Tree
/// </summary>
/// <param name="p"></param>
/// <param name="q"></param>
/// <returns></returns>
bool is_same_tree(TreeNode *p, TreeNode *q);

/// <summary>
/// 137. Single Number II
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <returns></returns>
int single_number_ii(int *nums, int nums_size);

/// <summary>
/// 141. Linked List Cycle
/// </summary>
/// <param name="head"></param>
/// <returns></returns>
bool has_cycle(ListNode *head);

/// <summary>
/// 189. Rotate Array
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <param name="k"></param>
void rotate(int *nums, int nums_size, int k);

/// <summary>
/// 206. Reverse Linked List
/// </summary>
/// <param name="head"></param>
/// <returns></returns>
struct ListNode *reverse_list(ListNode *head);

/// <summary>
/// 331. Verify Preorder Serialization of a Binary Tree
/// </summary>
/// <param name="preorder"></param>
/// <returns></returns>
bool is_valid_serialization(const char *preorder);

/// <summary>
/// 357. Count Numbers with Unique Digits
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int count_numbers_with_unique_digits(int n);

/// <summary>
/// 386. Lexicographical Numbers
/// </summary>
/// <param name="n"></param>
/// <param name="return_size"></param>
/// <returns></returns>
int *lexical_order(int n, int *return_size);

/// <summary>
/// 467. Unique Substrings in Wraparound String
/// </summary>
/// <param name="p"></param>
/// <returns></returns>
int find_substring_in_wraparound_string(char *p);

/// <summary>
/// 498.Diagonal Traverse
/// </summary>
/// <param name="mat"></param>
/// <param name="mat_size"></param>
/// <param name="mat_col_size"></param>
/// <param name="return_size"></param>
/// <returns></returns>
int *find_diagonal_order(int **mat, int mat_size, int *mat_col_size, int *return_size);

/// <summary>
/// 518. Coin Change 2
/// </summary>
/// <param name="amount"></param>
/// <param name="coins"></param>
/// <param name="coins_size"></param>
/// <returns></returns>
int change(int amount, int *coins, int coins_size);

/// <summary>
/// 646. Maximum Length of Pair Chain
/// </summary>
/// <param name="pairs"></param>
/// <param name="pairs_size"></param>
/// <param name="pairs_col_size"></param>
/// <returns></returns>
int find_longest_chain(int **pairs, int pairs_size, int *pairs_col_size);

/// <summary>
/// 658. Find K Closest Elements
/// </summary>
/// <param name="arr"></param>
/// <param name="arr_size"></param>
/// <param name="k"></param>
/// <param name="x"></param>
/// <param name="return_size"></param>
/// <returns></returns>
int *find_closest_elements(int *arr, int arr_size, int k, int x, int *return_size);

/// <summary>
/// 662. Maximum Width of Binary Tree
/// </summary>
/// <param name="root"></param>
/// <returns></returns>
int width_of_binary_tree(struct TreeNode *root);

/// <summary>
/// 665. Non-decreasing Array
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <returns></returns>
bool check_possibility(int *nums, int nums_size);

/// <summary>
/// 667. Beautiful Arrangement II
/// </summary>
/// <param name="n"></param>
/// <param name="k"></param>
/// <param name="return_size"></param>
/// <returns></returns>
int *construct_array(int n, int k, int *return_size);

/// <summary>
/// 669. Trim a Binary Search Tree
/// </summary>
/// <param name="root"></param>
/// <param name="low"></param>
/// <param name="high"></param>
/// <returns></returns>
TreeNode *trim_bst(TreeNode *root, int low, int high);

/// <summary>
/// 670. Maximum Swap
/// </summary>
/// <param name="num"></param>
/// <returns></returns>
int maximum_swap(int num);

/// <summary>
/// 687. Longest Univalue Path
/// </summary>
/// <param name="root"></param>
/// <returns></returns>
int longest_univalue_path(TreeNode *root);

/// <summary>
/// 728.Self Dividing Numbers
/// </summary>
/// <param name="left"></param>
/// <param name="right"></param>
/// <param name="return_size"></param>
/// <returns></returns>
int *self_dividing_numbers(int left, int right, int *return_size);

/// <summary>
/// 741. Cherry Pickup
/// </summary>
/// <param name="grid"></param>
/// <param name="grid_size"></param>
/// <param name="grid_col_size"></param>
/// <returns></returns>
int cherry_pickup(int **grid, int grid_size, int *grid_col_size);

/// <summary>
/// 744. Find Smallest Letter Greater Than Target
/// </summary>
/// <param name="letters"></param>
/// <param name="letter_size"></param>
/// <param name="target"></param>
/// <returns></returns>
char next_greatest_letter(char *letters, int letter_size, char target);

/// <summary>
/// 769. Max Chunks To Make Sorted
/// </summary>
/// <param name="arr"></param>
/// <param name="arrSize"></param>
/// <returns></returns>
int max_chunks_to_sorted(int *arr, int arrSize);

/// <summary>
/// 777. Swap Adjacent in LR String
/// </summary>
/// <param name="start"></param>
/// <param name="end"></param>
/// <returns></returns>
bool can_transform(char *start, char *end);

/// <summary>
/// 793. Preimage Size of Factorial Zeroes Function
/// </summary>
/// <param name="k"></param>
/// <returns></returns>
int preimage_size_fzf(int k);

/// <summary>
/// 801. Minimum Swaps To Make Sequences Increasing
/// </summary>
/// <param name="nums1"></param>
/// <param name="nums1_size"></param>
/// <param name="nums2"></param>
/// <param name="nums2_size"></param>
/// <returns></returns>
int min_swap(int *nums1, int nums1_size, int *nums2, int nums2_size);

/// <summary>
/// 804. Unique Morse Code Words
/// </summary>
/// <param name="words"></param>
/// <param name="words_size"></param>
/// <returns></returns>
int unique_morse_representations(char **words, int words_size);

/// <summary>
/// 806. Number of Lines To Write String
/// </summary>
/// <param name="widths"></param>
/// <param name="widths_size"></param>
/// <param name="s"></param>
/// <param name="return_size"></param>
/// <returns></returns>
int *number_of_lines(int *widths, int widths_size, char *s, int *return_size);

/// <summary>
/// 828. Count Unique Characters of All Substrings of a Given String
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
int unique_letter_string(char *s);

/// <summary>
/// 856. Score of Parentheses
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
int score_of_parentheses(char *s);

/// <summary>
/// 870. Advantage Shuffle
/// </summary>
/// <param name="nums1"></param>
/// <param name="nums1_size"></param>
/// <param name="nums2"></param>
/// <param name="nums2_size"></param>
/// <param name="return_size"></param>
/// <returns></returns>
int *advantage_count(int *nums1, int nums1_size, int *nums2, int nums2_size, int *return_size);

/// <summary>
/// 883. Projection Area of 3D Shapes
/// </summary>
/// <param name="grid"></param>
/// <param name="grid_size"></param>
/// <param name="grid_col_size"></param>
/// <returns></returns>
int projection_area(int **grid, int grid_size, int *grid_col_size);

/// <summary>
/// 905. Sort Array By Parity
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <param name="return_size"></param>
/// <returns></returns>
int *sort_array_by_parity(int *nums, int nums_size, int *return_size);

/// <summary>
/// 915. Partition Array into Disjoint Intervals
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <returns></returns>
int partition_disjoint(int *nums, int nums_size);

/// <summary>
/// 921. Minimum Add to Make Parentheses Valid
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
int min_add_to_make_valid(char *s);

/// <summary>
/// 927. Three Equal Parts
/// </summary>
/// <param name="arr"></param>
/// <param name="arr_size"></param>
/// <param name="return_size"></param>
/// <returns></returns>
int *three_equal_parts(int *arr, int arr_size, int *return_size);

/// <summary>
/// 934. Shortest Bridge
/// </summary>
/// <param name="grid"></param>
/// <param name="grid_size"></param>
/// <param name="grid_col_size"></param>
/// <returns></returns>
int shortest_bridge(int **grid, int grid_size, int *grid_col_size);

/// <summary>
/// 940. Distinct Subsequences II
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
int distinct_sub_seq_ii(char *s);

/// <summary>
/// 942. DI String Match
/// </summary>
/// <param name="s"></param>
/// <param name="return_size"></param>
/// <returns></returns>
int *di_string_match(char *s, int *return_size);

/// <summary>
/// 944. Delete Columns to Make Sorted
/// </summary>
/// <param name="strs"></param>
/// <param name="strs_size"></param>
/// <returns></returns>
int min_deletion_size(char **strs, int strs_size);

/// <summary>
/// 946. Validate Stack Sequences
/// </summary>
/// <param name="pushed"></param>
/// <param name="pushed_size"></param>
/// <param name="popped"></param>
/// <param name="popped_size"></param>
/// <returns></returns>
bool validate_stack_sequences(int *pushed, int pushed_size, int *popped, int popped_size);

/// <summary>
/// 953. Verifying an Alien Dictionary
/// </summary>
/// <param name="words"></param>
/// <param name="words_size"></param>
/// <param name="order"></param>
/// <returns></returns>
bool is_alien_sorted(char **words, int words_size, char *order);

/// <summary>
/// 965. Univalued Binary Tree
/// </summary>
/// <param name="root"></param>
/// <returns></returns>
bool is_unival_tree(TreeNode *root);

/// <summary>
/// 998. Maximum Binary Tree II
/// </summary>
/// <param name="root"></param>
/// <param name="val"></param>
/// <returns></returns>
struct TreeNode *insert_into_max_tree(struct TreeNode *root, int val);

/// <summary>
/// 1108. Defanging an IP Address
/// </summary>
/// <param name="address"></param>
/// <returns></returns>
char *defang_ip_addr(char *address);

/// <summary>
/// 1403. Minimum Subsequence in Non-Increasing Order
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <param name="return_size"></param>
/// <returns></returns>
int *min_subsequence(int *nums, int nums_size, int *return_size);

/// <summary>
/// 1408. String Matching in an Array
/// </summary>
/// <param name="words"></param>
/// <param name="wordsSize"></param>
/// <param name="return_size"></param>
/// <returns></returns>
char **string_matching(char **words, int wordsSize, int *return_size);

/// <summary>
/// 1441. Build an Array With Stack Operations
/// </summary>
/// <param name="target"></param>
/// <param name="targetSize"></param>
/// <param name="n"></param>
/// <param name="return_size"></param>
/// <returns></returns>
char **build_array(int *target, int targetSize, int n, int *return_size);

/// <summary>
/// 1450. Number of Students Doing Homework at a Given Time
/// </summary>
/// <param name="start_time"></param>
/// <param name="start_time_size"></param>
/// <param name="end_time"></param>
/// <param name="end_time_size"></param>
/// <param name="query_time"></param>
/// <returns></returns>
int busy_student(int *start_time, int start_time_size, int *end_time, int end_time_size, int query_time);

/// <summary>
/// 1455. Check If a Word Occurs As a Prefix of Any Word in a Sentence
/// </summary>
/// <param name="sentence"></param>
/// <param name="search_word"></param>
/// <returns></returns>
int is_prefix_of_word(char *sentence, char *search_word);

/// <summary>
/// 1460. Make Two Arrays Equal by Reversing Sub-arrays
/// </summary>
/// <param name="target"></param>
/// <param name="target_size"></param>
/// <param name="arr"></param>
/// <param name="arr_size"></param>
/// <returns></returns>
bool can_be_equal(int *target, int target_size, int *arr, int arr_size);

/// <summary>
/// 1464. Maximum Product of Two Elements in an Array
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <returns></returns>
int max_product(int *nums, int nums_size);

/// <summary>
/// 1470. Shuffle the Array
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <param name="n"></param>
/// <param name="return_size"></param>
/// <returns></returns>
int *shuffle(int *nums, int nums_size, int n, int *return_size);

/// <summary>
/// 1475. Final Prices With a Special Discount in a Shop
/// </summary>
/// <param name="prices"></param>
/// <param name="prices_size"></param>
/// <param name="return_size"></param>
/// <returns></returns>
int *final_prices(int *prices, int prices_size, int *return_size);

/// <summary>
/// 1582. Special Positions in a Binary Matrix
/// </summary>
/// <param name="mat"></param>
/// <param name="mat_size"></param>
/// <param name="mat_col_size"></param>
/// <returns></returns>
int num_special(int **mat, int mat_size, int *mat_col_size);

/// <summary>
/// 1592. Rearrange Spaces Between Words
/// </summary>
/// <param name="text"></param>
/// <returns></returns>
char *reorder_spaces(char *text);

/// <summary>
/// 1598. Crawler Log Folder
/// </summary>
/// <param name="logs"></param>
/// <param name="logs_size"></param>
/// <returns></returns>
int min_operations(char **logs, int logs_size);

/// <summary>
/// 1608. Special Array With X Elements Greater Than or Equal X
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <returns></returns>
int special_array(int *nums, int nums_size);

/// <summary>
/// 1619. Mean of Array After Removing Some Elements
/// </summary>
/// <param name="arr"></param>
/// <param name="arr_size"></param>
/// <returns></returns>
double trim_mean(int *arr, int arr_size);

/// <summary>
/// 1624. Largest Substring Between Two Equal Characters
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
int max_length_between_equal_characters(char *s);

/// <summary>
/// 1658. Minimum Operations to Reduce X to Zero
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <param name="x"></param>
/// <returns></returns>
int min_operations_2(int *nums, int nums_size, int x);

/// <summary>
/// 1672. Richest Customer Wealth
/// </summary>
/// <param name="accounts"></param>
/// <param name="accounts_size"></param>
/// <param name="accounts_col_size"></param>
/// <returns></returns>
int maximum_wealth(int **accounts, int accounts_size, int *accounts_col_size);

/// <summary>
/// 1694. Reformat Phone Number
/// </summary>
/// <param name="number"></param>
/// <returns></returns>
char *reformat_number(char *number);

/// <summary>
/// 1750. Minimum Length of String After Deleting Similar Ends
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
int minimum_length(char *s);

/// <summary>
/// 1768. Merge Strings Alternately
/// </summary>
/// <param name="word1"></param>
/// <param name="word2"></param>
/// <returns></returns>
char *merge_alternately(char *word1, char *word2);

/// <summary>
/// 1779. Find Nearest Point That Has the Same X or Y Coordinate
/// </summary>
/// <param name="x"></param>
/// <param name="y"></param>
/// <param name="points"></param>
/// <param name="points_size"></param>
/// <param name="points_col_size"></param>
/// <returns></returns>
int nearest_valid_point(int x, int y, int **points, int points_size, int *points_col_size);

/// <summary>
/// 1784. Check if Binary String Has at Most One Segment of Ones
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
bool check_ones_segment(char *s);

/// <summary>
/// 1790. Check if One String Swap Can Make Strings Equal
/// </summary>
/// <param name="s1"></param>
/// <param name="s2"></param>
/// <returns></returns>
bool are_almost_equal(char *s1, char *s2);

/// <summary>
/// 1800. Maximum Ascending Subarray Sum
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <returns></returns>
int max_ascending_sum(int *nums, int nums_size);

/// <summary>
/// 1823. Find the Winner of the Circular Game
/// </summary>
/// <param name="n"></param>
/// <param name="k"></param>
/// <returns></returns>
int find_the_winner(int n, int k);

/// <summary>
/// 1991. Find the Middle Index in Array
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <returns></returns>
int find_middle_index(int *nums, int nums_size);

/// <summary>
/// 1997. First Day Where You Have Been in All the Rooms
/// </summary>
/// <param name="next_visit"></param>
/// <param name="next_visit_size"></param>
/// <returns></returns>
int first_day_been_in_all_rooms(int *next_visit, int next_visit_size);

/// <summary>
/// 2011. Final Value of Variable After Performing Operations
/// </summary>
/// <param name="operations"></param>
/// <param name="operations_size"></param>
/// <returns></returns>
int final_value_after_operations(char **operations, int operations_size);

/// <summary>
/// 2027. Minimum Moves to Convert String
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
int minimum_moves(char *s);

/// <summary>
/// 2032. Two Out of Three
/// </summary>
/// <param name="nums1"></param>
/// <param name="nums1_size"></param>
/// <param name="nums2"></param>
/// <param name="nums2_size"></param>
/// <param name="nums3"></param>
/// <param name="nums3_size"></param>
/// <param name="return_size"></param>
/// <returns></returns>
int *two_out_of_three(int *nums1, int nums1_size, int *nums2, int nums2_size, int *nums3, int nums3_size, int *return_size);

/// <summary>
/// 2037. Minimum Number of Moves to Seat Everyone
/// </summary>
/// <param name="seats"></param>
/// <param name="seats_size"></param>
/// <param name="students"></param>
/// <param name="students_size"></param>
/// <returns></returns>
int min_moves_to_seat(int *seats, int seats_size, int *students, int students_size);

/// <summary>
/// 2042. Check if Numbers Are Ascending in a Sentence
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
bool are_number_ascending(char *s);

/// <summary>
/// 2180. Count Integers With Even Digit Sum
/// </summary>
/// <param name="num"></param>
/// <returns></returns>
int count_even(int num);

/// <summary>
/// 2185. Counting Words With a Given Prefix
/// </summary>
/// <param name="words"></param>
/// <param name="words_size"></param>
/// <param name="pref"></param>
/// <returns></returns>
int prefix_count(char **words, int words_size, char *pref);

/// <summary>
/// 2351. First Letter to Appear Twice
/// </summary>
/// <param name="s"></param>
/// <returns></returns>
char repeated_character(char *s);

/// <summary>
/// 2529. Maximum Count of Positive Integer and Negative Integer
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <returns></returns>
int maximum_count(int *nums, int nums_size);

/// <summary>
/// 2580. Count Ways to Group Overlapping Ranges
/// </summary>
/// <param name="ranges"></param>
/// <param name="ranges_size"></param>
/// <param name="ranges_col_size"></param>
/// <returns></returns>
int count_ways(int **ranges, int ranges_size, int *ranges_col_size);

/// <summary>
/// 2908. Minimum Sum of Mountain Triplets I
/// </summary>
/// <param name="nums"></param>
/// <param name="nums_size"></param>
/// <returns></returns>
int minimum_sum(int *nums, int nums_size);

/// <summary>
/// 2952. Minimum Number of Coins to be Added
/// </summary>
/// <param name="coins"></param>
/// <param name="coins_size"></param>
/// <param name="target"></param>
/// <returns></returns>
int minimum_added_coins(int *coins, int coins_size, int target);