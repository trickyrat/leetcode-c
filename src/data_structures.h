#pragma once

typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;

typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
} TreeNode;

typedef struct {
    struct TreeNode *node;
    unsigned long long index;
} Pair;