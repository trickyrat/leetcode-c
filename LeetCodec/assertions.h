//
// Created by wangj on 8/24/2022.
//

#pragma once

#include <stdio.h>

#define EXPECT_EQ_BASE(equality, expect, actual, format)                      \
    do {                                                                      \
        test_count++;                                                         \
        if (equality) {                                                       \
            test_pass++;                                                      \
        } else {                                                              \
            fprintf(stderr, "%s:%d: expect: " format " actual: " format "\n", \
                    __FILE__, __LINE__, expect, actual);                      \
        }                                                                     \
    } while (0)

#define EXPECT_EQ_INT(expect, actual) \
    EXPECT_EQ_BASE((expect) == (actual), expect, actual, "%d")

#define EXPECT_EQ_CHAR(expect, actual) \
    EXPECT_EQ_BASE((expect) == (actual), expect, actual, "%c")

#define EXPECT_EQ_TRUE(actual) \
    EXPECT_EQ_BASE(1 == (actual), 1, actual, "%d")

#define EXPECT_EQ_FALSE(actual) \
    EXPECT_EQ_BASE(0 == (actual), 0, actual, "%d")

#if defined(_MSC_VER)
#define EXPECT_EQ_SIZE_T(expect, actual) \
    EXPECT_EQ_BASE((expect) == (actual), (size_t) expect, (size_t) actual, "%Iu")
#else
#define EXPECT_EQ_SIZE_T(expect, actual) \
    EXPECT_EQ_BASE((expect) == (actual), (size_t) expect, (size_t) actual, "%Iu")
#endif

#define EXPECT_EQ_STRING(expect, actual)                                \
    EXPECT_EQ_BASE(strlen(expect) == strlen(actual) &&                  \
                           memcmp(expect, actual, strlen(actual)) == 0, \
                   expect, actual, "%s")

#define EXPECT_EQ_STRING_ARRAY(expect, expect_size, actual, actual_size) \
    EXPECT_EQ_SIZE_T(expect_size, actual_size);                          \
    for (int i = 0; i < (expect_size); ++i) {                            \
        EXPECT_EQ_STRING((expect)[i], (actual)[i]);                      \
    }

#define EXPECT_EQ_INT_ARRAY(expect, expected_size, actual, actual_size) \
    EXPECT_EQ_SIZE_T(expected_size, actual_size);                       \
    for (int i = 0; i < expected_size; ++i) {                           \
        EXPECT_EQ_INT((expect)[i], (actual)[i]);                        \
    }

#define TEST_MATRIX_BASE(input_data, row_size) \
    int *mat[(row_size)];                      \
    for (int i = 0; i < (row_size); ++i) {     \
        mat[i] = (input_data)[i];              \
    }

#define EXPECT_EQ_MATRIX(expected, expectedRowSize, actual, actualRowSize)                   \
    EXPECT_EQ_INT((expectedRowSize), (actualRowSize));                                       \
    for (int i = 0; i < (actualRowSize); ++i) {                                              \
        EXPECT_EQ_INT_ARRAY((expected)[i], (expectedRowSize), (actual)[i], (actualRowSize)); \
    }

#define TEST_FIND_DIAGONAL_ORDER(input_data, row_size, col_size, expected, expected_size) \
    do {                                                                                  \
        TEST_MATRIX_BASE(input_data, row_size);                                           \
        int return_size = 0;                                                              \
        int col = col_size;                                                               \
        int *actual = find_diagonal_order(mat, (row_size), &col, &return_size);           \
        EXPECT_EQ_INT_ARRAY(expected, expected_size, actual, return_size);                \
    } while (0)


#define TEST_NUMBER_OF_LINES(widths, widths_size, s, expected, expected_size)     \
    do {                                                                          \
        int return_size = 0;                                                      \
        int *ans = number_of_lines((widths), (widths_size), (s), &(return_size)); \
        EXPECT_EQ_INT_ARRAY(expected, (expected_size), ans, (return_size));       \
    } while (0)


#define TEST_MATRIX_INT(function, input_data, row_size, col_size, expected) \
    do {                                                                    \
        TEST_MATRIX_BASE((input_data), (row_size));                         \
        int col_size_ = (col_size);                                         \
        EXPECT_EQ_INT((expected), function(mat, (row_size), &col_size_));   \
    } while (0)
