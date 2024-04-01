//
// Created by trickyrat on 8/24/2022.
//

#pragma once

#include <stdbool.h>
#include <stdlib.h>

#include "data_structures.h"

#define ARRAY(T, ...) \
    (T[]) { __VA_ARGS__ }

#define MATRIX(T, VAR, ROW, COLUMN, ...) \
    (T VAR[ROW][COLUMN]) { __VA_ARGS__ }

#define MATRIX_POINTER(T, VARIABLE) (T **) VARIABLE

int binary_search(const int *arr, int arrSize, int x) {
    int low = 0, high = arrSize - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] >= x) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return low;
}

void reverse(int *nums, int start, int end) {
    while (start < end) {
        swap_int(&nums[start], &nums[end]);
        start++;
        end--;
    }
}

TreeNode *generate_tree_node(int val, TreeNode *left, TreeNode *right) {
    TreeNode *node = (TreeNode *) malloc(sizeof(TreeNode));
    node->val = val;
    node->left = left;
    node->right = right;
    return node;
}

char **split(const char *str, char separator, int *returnSize) {
    int n = strlen(str);
    char **words = (char **) malloc(sizeof(char *) * n);
    int wordsSize = 0, pos = 0;
    while (pos < n) {
        while (pos < n && str[pos] == separator) {
            pos++;
        }
        if (pos < n) {
            int curr = pos;
            while (pos < n && str[pos] != separator) {
                pos++;
            }
            int alloc_size = sizeof(char) * (pos - curr + 1);
            words[wordsSize] = (char *) malloc(alloc_size);
            strncpy_s(words[wordsSize], alloc_size, str + curr, pos - curr);
            words[wordsSize++][pos - curr] = '\0';
        }
    }
    *returnSize = wordsSize;
    return words;
}

ListNode *create_list_node(int *nums, int numsSize) {
    ListNode *head = (ListNode *) malloc(sizeof(ListNode));
    head->val = 0;
    ListNode *dummy = head;
    for (int i = 0; i < numsSize; ++i) {
        ListNode *node = (ListNode *) malloc(sizeof(ListNode));
        node->val = nums[i];
        if (i == numsSize - 1) {
            node->next = NULL;
        }
        dummy->next = node;
        dummy = dummy->next;
    }
    return head->next;
}

int *convert_list_node_to_array(const ListNode *head, int *returnSize) {
    ListNode *dummy1 = (ListNode *) malloc(sizeof(ListNode));
    ListNode *dummy2 = (ListNode *) malloc(sizeof(ListNode));
    memcpy(dummy1, head, sizeof(ListNode));
    memcpy(dummy2, head, sizeof(ListNode));
    int count = 0;
    while (dummy1) {
        count++;
        dummy1 = dummy1->next;
    }
    int *res = (int *) malloc(sizeof(int) * count);
    for (int i = 0; i < count; ++i) {
        res[i] = dummy2->val;
        dummy2 = dummy2->next;
    }
    *returnSize = count;
    return res;
}

bool is_same_list_node(const ListNode *lhs, const ListNode *rhs) {
    if ((lhs == NULL && rhs != NULL) || (lhs != NULL && rhs == NULL)) {
        return false;
    }
    ListNode *dummy1 = (ListNode *) malloc(sizeof(ListNode));
    ListNode *dummy2 = (ListNode *) malloc(sizeof(ListNode));
    memcpy(dummy1, lhs, sizeof(ListNode));
    memcpy(dummy2, rhs, sizeof(ListNode));

    while (dummy1 && dummy2) {
        if (dummy1->val != dummy2->val) {
            return false;
        }
        dummy2 = dummy2->next;
        dummy1 = dummy1->next;
        if ((dummy1 == NULL && dummy2 != NULL) || (dummy1 != NULL && dummy2 == NULL)) {
            return false;
        }
    }

    return true;
}

int **initialize_matrix(int *nums, int row, int column) {
    int **matrix = (int **) malloc(row * sizeof(int *));
    for (int i = 0; i < row; i++) {
        matrix[i] = (int *) malloc(column * sizeof(int));
    }
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < column; ++j) {
            matrix[i][j] = *nums++;
        }
    }
    return matrix;
}
