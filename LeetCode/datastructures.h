//
// Created by wangj on 2022/3/16.
//

#pragma once

#define MAX_NODE_SIZE 3000

typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;

typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;

typedef struct {
    struct TreeNode *node;
    unsigned long long index;
} Pair;

