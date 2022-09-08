#include "assertions.h"
#include "recentcounter.h"
#include "solution.h"
#include "testutils.h"

#include <assert.h>
#include <stdio.h>
#include <string.h>

static int main_ret = 0;
static int test_count = 0;
static int test_pass = 0;

static void test_two_sum() {
    int actualReturnSize = 0;
    int *actual = two_sum(ARRAY(int, 2, 7, 11, 15), 4, 9, &actualReturnSize);
    EXPECT_EQ_INT_ARRAY(ARRAY(int, 0, 1), 2, actual, actualReturnSize)
}

static void test_add_two_numbers() {
    ListNode *actual1 = add_two_numbers(create_listnode(ARRAY(int, 2, 4, 3), 3), create_listnode(ARRAY(int, 5, 6, 4), 3));
    ListNode *actual2 = add_two_numbers(create_listnode(ARRAY(int, 0), 1), create_listnode(ARRAY(int, 0), 1));
    ListNode *actual3 = add_two_numbers(create_listnode(ARRAY(int, 9, 9, 9, 9, 9, 9, 9), 7), create_listnode(ARRAY(int, 9, 9, 9, 9), 4));
    ListNode *expected1 = create_listnode(ARRAY(int, 7, 0, 8), 3);
    ListNode *expected2 = create_listnode(ARRAY(int, 0), 1);
    ListNode *expected3 = create_listnode(ARRAY(int, 8, 9, 9, 9, 0, 0, 0, 1), 8);
    EXPECT_EQ_TRUE(is_same_listnode(actual1, expected1));
    EXPECT_EQ_TRUE(is_same_listnode(actual2, expected2));
    EXPECT_EQ_TRUE(is_same_listnode(actual3, expected3));
}

static void test_remove_element() {
    EXPECT_EQ_INT(remove_element(ARRAY(int, 3, 2, 2, 3), 4, 3), 2);
    EXPECT_EQ_INT(remove_element(ARRAY(int, 0, 1, 2, 2, 3, 0, 4, 2), 8, 2), 5);
}

static void test_search() {
    EXPECT_EQ_INT(4, search(ARRAY(int, 4, 5, 6, 7, 0, 1, 2), 7, 0));
}

#define TEST_ROTATE(input_data, row_size, col_size, expected, expected_row_size) \
    do {                                                                         \
        TEST_MATRIX_BASE(input_data, row_size);                                  \
        int col = col_size;                                                      \
        rotate(mat, (row_size), &col);                                           \
        EXPECT_EQ_MATRIX((expected), (expected_row_size), (mat), (row_size));    \
    } while (0)

static void test_rotate() {
    int matrix1[3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};
    int matrix2[4][4] = {{5, 1, 9, 11},
                         {2, 4, 8, 10},
                         {13, 3, 6, 7},
                         {15, 14, 12, 16}};
    int expected1[3][3] = {{7, 4, 1},
                           {8, 5, 2},
                           {9, 6, 3}};
    int expected2[4][4] = {{15, 13, 2, 5},
                           {14, 3, 4, 1},
                           {12, 6, 8, 9},
                           {16, 7, 10, 11}};
    TEST_ROTATE(matrix1, 3, 3, expected1, 3);
    TEST_ROTATE(matrix2, 4, 4, expected2, 4);
}

static void test_merge() {
    int actual1[6] = {1, 2, 3, 0, 0, 0};
    int nums2[3] = {2, 5, 6};
    merge(actual1, 6, 3, nums2, 3, 3);
    int expected1[6] = {1, 2, 2, 3, 5, 6};
    EXPECT_EQ_INT_ARRAY(expected1, 6, actual1, 6);

    int actual2[1] = {1};
    int nums3[1];
    merge(actual2, 1, 1, nums3, 0, 0);
    int expected2[1] = {1};
    EXPECT_EQ_INT_ARRAY(expected2, 1, actual2, 1);

    int actual3[1] = {0};
    int nums4[1] = {1};
    merge(actual3, 0, 0, nums4, 1, 1);
    int expected3[1] = {1};
    EXPECT_EQ_INT_ARRAY(expected3, 1, actual3, 1);
};

static void test_is_same_tree() {
    TreeNode left1 = {2, NULL, NULL};
    TreeNode right1 = {3, NULL, NULL};
    TreeNode root1 = {1, &left1, &right1};
    TreeNode left2 = {2, NULL, NULL};
    TreeNode right2 = {3, NULL, NULL};
    TreeNode root2 = {1, &left2, &right2};
    EXPECT_EQ_TRUE(is_same_tree(&root1, &root2));
    EXPECT_EQ_TRUE(is_same_tree(NULL, NULL));
    EXPECT_EQ_FALSE(is_same_tree(&root1, NULL));
    EXPECT_EQ_FALSE(is_same_tree(NULL, &root1));
}

static void test_reverse_list() {
    ListNode *head1 = create_listnode(ARRAY(int, 1, 2, 3, 4, 5), 5);
    ListNode *actual1 = reverse_list(head1);
    ListNode *expected1 = create_listnode(ARRAY(int, 5, 4, 3, 2, 1), 5);
    EXPECT_EQ_TRUE(is_same_listnode(actual1, expected1));
}

static void test_count_numbers_with_unique_digits() {
    EXPECT_EQ_INT(91, count_numbers_with_unique_digits(2));
    EXPECT_EQ_INT(1, count_numbers_with_unique_digits(0));
}

static void test_lexical_order() {
    int expect1[13] = {1, 10, 11, 12, 13, 2, 3, 4, 5, 6, 7, 8, 9};
    int returnSize1 = 0;
    int *actual1 = lexical_order(13, &returnSize1);
    EXPECT_EQ_INT_ARRAY(expect1, 13, actual1, returnSize1);

    int expect2[2] = {1, 2};
    int returnSize2 = 0;
    int *actual2 = lexical_order(2, &returnSize2);
    EXPECT_EQ_INT_ARRAY(expect2, 2, actual2, returnSize2);
}

static void test_find_substring_in_wraparoundString() {
    EXPECT_EQ_INT(1, find_substring_in_wraparound_string("a"));
    EXPECT_EQ_INT(2, find_substring_in_wraparound_string("cac"));
    EXPECT_EQ_INT(6, find_substring_in_wraparound_string("zab"));
}

static void test_find_diagonal_order() {
    int matrix1[3][3] = {{1, 2, 3},
                         {4, 5, 6},
                         {7, 8, 9}};
    int matrix2[2][2] = {{1, 2},
                         {3, 4}};
    int expected1[9] = {1, 2, 4, 7, 5, 3, 6, 8, 9};
    int expected2[4] = {1, 2, 3, 4};

    TEST_FIND_DIAGONAL_ORDER(matrix1, 3, 3, expected1, 9);
    TEST_FIND_DIAGONAL_ORDER(matrix2, 2, 2, expected2, 4);
}

static void test_find_longest_chain() {
    int **pairs1 = initialize_matrix(ARRAY(int, 1, 2, 2, 3, 3, 4), 3, 2);
    int **pairs2 = initialize_matrix(ARRAY(int, 1, 2, 7, 8, 4, 5), 3, 2);
    int pairsColSize1 = 2;
    int pairsColSize2 = 2;
    EXPECT_EQ_INT(2, find_longest_chain(pairs1, 3, &pairsColSize1));
    EXPECT_EQ_INT(3, find_longest_chain(pairs2, 3, &pairsColSize2));
}

static void test_find_closest_elements() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 3, 4, 5};
    int returnSize1 = 0;
    int returnSize2 = 0;
    int expect1[] = {1, 2, 3, 4};
    int expect2[] = {1, 2, 3, 4};
    int *actual1 = find_closest_elements(arr1, 5, 4, 3, &returnSize1);
    int *actual2 = find_closest_elements(arr2, 5, 4, -1, &returnSize2);
    EXPECT_EQ_INT_ARRAY(expect1, 4, actual1, returnSize1);
    EXPECT_EQ_INT_ARRAY(expect2, 4, actual2, returnSize2);
}

static void test_width_of_binary_tree() {
    // TODO
}

static void test_longest_univalue_path() {
    // TODO
}

static void test_self_dividing_numbers() {
    int returnSize1 = 0;
    int *actual1 = self_dividing_numbers(1, 22, &returnSize1);
    int expect1[13] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 15, 22};
    EXPECT_EQ_INT_ARRAY(expect1, 13, actual1, returnSize1);
}

static void test_next_greatest_letter() {
    char letters[3] = {'c', 'f', 'j'};
    EXPECT_EQ_CHAR('c', next_greatest_letter(letters, 3, 'a'));
    EXPECT_EQ_CHAR('f', next_greatest_letter(letters, 3, 'c'));
    EXPECT_EQ_CHAR('f', next_greatest_letter(letters, 3, 'c'));
}

static void test_preimage_size_fzf() {
    EXPECT_EQ_INT(5, preimage_size_fzf(0));
    EXPECT_EQ_INT(0, preimage_size_fzf(5));
    EXPECT_EQ_INT(5, preimage_size_fzf(3));
}

static void test_unique_morse_representations() {
    char *words1[] = {"gin", "zen", "gig", "msg"};
    char *words2[] = {"a"};
    EXPECT_EQ_INT(2, unique_morse_representations(words1, 4));
    EXPECT_EQ_INT(1, unique_morse_representations(words2, 1));
}

static void test_number_of_lines() {
    int widths1[26] = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
                       10, 10};
    int widths2[26] = {4, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10,
                       10, 10};
    char *s1 = "abcdefghijklmnopqrstuvwxyz";
    char *s2 = "bbbcccdddaaa";
    int widths_size = 26;
    int expected1[2] = {3, 60};
    int expected2[2] = {2, 4};
    TEST_NUMBER_OF_LINES(widths1, widths_size, s1, expected1, 2);
    TEST_NUMBER_OF_LINES(widths2, widths_size, s2, expected2, 2);
}

static void test_unique_letter_string() {
    char *s1 = "ABC";
    char *s2 = "ABA";
    char *s3 = "LEETCODE";
    EXPECT_EQ_INT(10, unique_letter_string(s1));
    EXPECT_EQ_INT(8, unique_letter_string(s2));
    EXPECT_EQ_INT(92, unique_letter_string(s3));
}

static void test_is_alien_sorted() {
    char *words1[2] = {"hello", "leetcode"};
    char *words2[3] = {"word", "world", "row"};
    char *words3[2] = {"apple", "app"};
    char *order1 = "hlabcdefgijkmnopqrstuvwxyz";
    char *order2 = "worldabcefghijkmnpqstuvxyz";
    char *order3 = "abcdefghijklmnopqrstuvwxyz";
    EXPECT_EQ_TRUE(is_alien_sorted(words1, 2, order1));
    EXPECT_EQ_FALSE(is_alien_sorted(words2, 3, order2));
    EXPECT_EQ_FALSE(is_alien_sorted(words3, 2, order3));
}

static void test_defanging_IPadd() {
    char *actual1 = defang_ip_addr("1.1.1.1");
    char *actual2 = defang_ip_addr("255.100.50.0");

    EXPECT_EQ_STRING("1[.]1[.]1[.]1", actual1, strlen(actual1));
    EXPECT_EQ_STRING("255[.]100[.]50[.]0", actual2, strlen(actual2));
}

static void test_min_subsequence() {
    int input1[5] = {4, 3, 10, 9, 8};
    int input2[5] = {4, 4, 7, 6, 7};
    int input3[1] = {6};
    int expected1[2] = {10, 9};
    int expected2[3] = {7, 7, 6};
    int expected3[1] = {6};
    int returnSize1 = 0;
    int returnSize2 = 0;
    int returnSize3 = 0;
    int *actual1 = min_subsequence(input1, 5, &returnSize1);
    int *actual2 = min_subsequence(input2, 5, &returnSize2);
    int *actual3 = min_subsequence(input3, 1, &returnSize3);
    EXPECT_EQ_INT_ARRAY(expected1, 2, actual1, returnSize1);
    EXPECT_EQ_INT_ARRAY(expected2, 3, actual2, returnSize2);
    EXPECT_EQ_INT_ARRAY(expected3, 1, actual3, returnSize3);
}

static void test_string_matching() {
    char *words1[4] = {"mass", "as", "hero", "superhero"};
    char *words2[3] = {"leetcode", "et", "code"};
    char *words3[3] = {"blue", "green", "bu"};
    char *expected1[2] = {"as", "hero"};
    char *expected2[2] = {"et", "code"};
    char *expected3[] = {"\0"};
    int returnSize1 = 0;
    int returnSize2 = 0;
    int returnSize3 = 0;
    char **actual1 = string_matching(words1, 4, &returnSize1);
    char **actual2 = string_matching(words2, 3, &returnSize2);
    char **actual3 = string_matching(words3, 3, &returnSize3);
    EXPECT_EQ_STRING_ARRAY(expected1, 2, actual1, returnSize1);
    EXPECT_EQ_STRING_ARRAY(expected2, 2, actual2, returnSize2);
    EXPECT_EQ_STRING_ARRAY(expected3, 0, actual3, returnSize3);
}

static void test_busy_student() {
    int startTimes1[3] = {1, 2, 3};
    int endTimes1[3] = {3, 2, 7};
    int startTimes2[1] = {4};
    int endTimes2[1] = {4};
    EXPECT_EQ_INT(busy_student(startTimes1, 3, endTimes1, 3, 4), 1);
    EXPECT_EQ_INT(busy_student(startTimes2, 1, endTimes2, 1, 4), 1);
}

static void test_is_prefix_of_word() {
    char *sentence1 = "i love eating burger";
    char *sentence2 = "this problem is an easy problem";
    char *sentence3 = "i am tired";
    char *searchWord1 = "burg";
    char *searchWord2 = "pro";
    char *searchWord3 = "you";
    EXPECT_EQ_INT(4, is_prefix_of_word(sentence1, searchWord1));
    EXPECT_EQ_INT(2, is_prefix_of_word(sentence2, searchWord2));
    EXPECT_EQ_INT(-1, is_prefix_of_word(sentence3, searchWord3));
}

static void test_can_be_equal() {
    int target1[] = {1, 2, 3, 4};
    int target2[] = {7};
    int target3[] = {3, 7, 9};
    int arr1[] = {2, 1, 3, 4};
    int arr2[] = {7};
    int arr3[] = {3, 7, 11};
    EXPECT_EQ_TRUE(can_be_equal(target1, 4, arr1, 4));
    EXPECT_EQ_TRUE(can_be_equal(target2, 1, arr2, 1));
    EXPECT_EQ_FALSE(can_be_equal(target3, 3, arr3, 3));
}

static void test_max_product() {
    int nums1[] = {3, 4, 5, 2};
    int nums2[] = {1, 5, 4, 5};
    int nums3[] = {3, 7};
    EXPECT_EQ_INT(12, max_product(nums1, 4));
    EXPECT_EQ_INT(16, max_product(nums2, 4));
    EXPECT_EQ_INT(12, max_product(nums3, 2));
}

static void test_num_special() {
    int **mat1 = initialize_matrix(ARRAY(int, 1, 0, 0, 0, 0, 1, 1, 0, 0), 3, 3);
    int **mat2 = initialize_matrix(ARRAY(int, 1, 0, 0, 0, 1, 0, 0, 0, 1), 3, 3);
    int matColSize1 = 3;
    int matColSize2 = 3;
    EXPECT_EQ_INT(1, num_special(mat1, 3, &matColSize1));
    EXPECT_EQ_INT(3, num_special(mat2, 3, &matColSize2));
}

static void test_reorder_spaces() {
    char *actual1 = reorder_spaces("  this   is  a sentence ");
    char *actual2 = reorder_spaces(" practice   makes   perfect");
    EXPECT_EQ_STRING("this   is   a   sentence", actual1, strlen(actual1));
    EXPECT_EQ_STRING("practice   makes   perfect ", actual2, strlen(actual2));
}

static void test_maximum_wealth() {
    int accounts_array1[2][3] = {{1, 2, 3}, {3, 2, 1}};
    int accounts_array2[3][3] = {{1, 5}, {7, 3}, {3, 5}};
    int accounts_array3[3][3] = {{2, 8, 7}, {7, 1, 3}, {1, 9, 5}};
    TEST_MATRIX_INT(maximum_wealth, accounts_array1, 2, 3, 6);
    TEST_MATRIX_INT(maximum_wealth, accounts_array2, 3, 3, 10);
    TEST_MATRIX_INT(maximum_wealth, accounts_array3, 3, 3, 17);
}

static void test_shuffle() {
    int returnSize1 = 0;
    int returnSize2 = 0;
    int returnSize3 = 0;
    int *actual1 = shuffle(ARRAY(int, 2, 5, 1, 3, 4, 7), 6, 3, &returnSize1);
    int *actual2 = shuffle(ARRAY(int, 1, 2, 3, 4, 4, 3, 2, 1), 8, 4, &returnSize2);
    int *actual3 = shuffle(ARRAY(int, 1, 1, 2, 2), 4, 2, &returnSize3);
    EXPECT_EQ_INT_ARRAY(ARRAY(int, 2, 3, 5, 4, 1, 7), 6, actual1, returnSize1)
    EXPECT_EQ_INT_ARRAY(ARRAY(int, 1, 4, 2, 3, 3, 2, 4, 1), 8, actual2, returnSize2)
    EXPECT_EQ_INT_ARRAY(ARRAY(int, 1, 2, 1, 2), 4, actual3, returnSize3)
}

static void test_final_prices() {
    int returnSize1 = 0;
    int returnSize2 = 0;
    int returnSize3 = 0;
    int *actual1 = final_prices(ARRAY(int, 8, 4, 6, 2, 3), 5, &returnSize1);
    int *actual2 = final_prices(ARRAY(int, 1, 2, 3, 4, 5), 5, &returnSize2);
    int *actual3 = final_prices(ARRAY(int, 10, 1, 1, 6), 4, &returnSize3);
    EXPECT_EQ_INT_ARRAY(ARRAY(int, 4, 2, 4, 2, 3), 5, actual1, returnSize1)
    EXPECT_EQ_INT_ARRAY(ARRAY(int, 1, 2, 3, 4, 5), 5, actual2, returnSize2)
    EXPECT_EQ_INT_ARRAY(ARRAY(int, 9, 0, 1, 6), 4, actual3, returnSize3)
}

static void test_projection_area() {
    int grid1[2][2] = {{1, 2}, {3, 4}};
    int grid2[1][1] = {{2}};
    int grid3[2][2] = {{1, 0}, {0, 2}};
    TEST_MATRIX_INT(projection_area, grid1, 2, 2, 17);
    TEST_MATRIX_INT(projection_area, grid2, 1, 1, 5);
    TEST_MATRIX_INT(projection_area, grid3, 2, 2, 8);
}

static void test_sort_array_by_parity() {
    int returnSize1 = 0;
    int returnSize2 = 0;
    int *actual1 = sort_array_by_parity(ARRAY(int, 3, 1, 2, 4), 4, &returnSize1);
    int *actual2 = sort_array_by_parity(ARRAY(int, 0), 1, &returnSize2);
    EXPECT_EQ_INT_ARRAY(ARRAY(int, 4, 2, 1, 3), 4, actual1, returnSize1);
    EXPECT_EQ_INT_ARRAY(ARRAY(int, 0), 1, actual2, returnSize2);
}

static void test_di_string_match() {
    int returnSize1 = 0;
    int returnSize2 = 0;
    int returnSize3 = 0;
    int *actual1 = di_string_match("IDID", &returnSize1);
    int *actual2 = di_string_match("III", &returnSize2);
    int *actual3 = di_string_match("DDI", &returnSize3);
    EXPECT_EQ_INT_ARRAY(ARRAY(int, 0, 4, 1, 3, 2), 5, actual1, returnSize1);
    EXPECT_EQ_INT_ARRAY(ARRAY(int, 0, 1, 2, 3), 4, actual2, returnSize2);
    EXPECT_EQ_INT_ARRAY(ARRAY(int, 3, 2, 0, 1), 4, actual3, returnSize3);
}

static void test_min_deletion_size() {
    EXPECT_EQ_INT(1, min_deletion_size(ARRAY(char *, "cba", "daf", "ghi"), 3));
    EXPECT_EQ_INT(0, min_deletion_size(ARRAY(char *, "a", "b"), 2));
    EXPECT_EQ_INT(3, min_deletion_size(ARRAY(char *, "zyx", "wvu", "tsr"), 3));
}

static void test_validate_stack_sequences() {
    EXPECT_EQ_TRUE(validate_stack_sequences(ARRAY(int, 1, 2, 3, 4, 5), 5, ARRAY(int, 4, 5, 3, 2, 1), 5));
    EXPECT_EQ_FALSE(validate_stack_sequences(ARRAY(int, 1, 2, 3, 4, 5), 5, ARRAY(int, 4, 3, 5, 1, 2), 5));
}

static void test_find_the_winner() {
    EXPECT_EQ_INT(3, find_the_winner(5, 2));
    EXPECT_EQ_INT(1, find_the_winner(6, 5));
}

static void test_pivot_index() {
    int nums1[5] = {2, 3, -1, 8, 4};
    int nums2[3] = {1, -1, 4};
    int nums3[2] = {2, 5};
    EXPECT_EQ_INT(3, pivot_index(nums1, 5));
    EXPECT_EQ_INT(2, pivot_index(nums2, 3));
    EXPECT_EQ_INT(-1, pivot_index(nums3, 2));
}

static void test_recent_counter() {
    RecentCounter *obj = recentCounterCreate();
    EXPECT_EQ_INT(1, recentCounterPing(obj, 1));
    EXPECT_EQ_INT(2, recentCounterPing(obj, 100));
    EXPECT_EQ_INT(3, recentCounterPing(obj, 3001));
    EXPECT_EQ_INT(3, recentCounterPing(obj, 3002));
    recentCounterFree(obj);
}

int main() {
    test_two_sum();
    test_add_two_numbers();
    test_remove_element();
    test_search();
    test_rotate();
    test_merge();
    test_is_same_tree();
    test_reverse_list();
    test_count_numbers_with_unique_digits();
    test_lexical_order();
    test_find_substring_in_wraparoundString();
    test_find_diagonal_order();
    test_find_longest_chain();
    test_find_closest_elements();
    test_self_dividing_numbers();
    test_next_greatest_letter();
    test_preimage_size_fzf();
    test_unique_morse_representations();
    test_number_of_lines();
    test_unique_letter_string();
    test_projection_area();
    test_sort_array_by_parity();
    test_di_string_match();
    test_min_deletion_size();
    test_validate_stack_sequences();
    test_is_alien_sorted();
    test_defanging_IPadd();
    test_min_subsequence();
    test_string_matching();
    test_busy_student();
    test_is_prefix_of_word();
    test_can_be_equal();
    test_max_product();
    test_shuffle();
    test_final_prices();
    test_num_special();
    test_reorder_spaces();
    test_maximum_wealth();
    test_find_the_winner();
    test_pivot_index();
    test_recent_counter();
    printf("%d/%d (%3.2f%%) passed\n", test_pass, test_count, test_pass * 100.0 / test_count);
    return main_ret;
}
