//
// Created by wangj on 2022/3/16.
//

#ifndef DATA_STRUCTURES_H__
#define DATA_STRUCTURES_H__


typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;

typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;

#endif //DATA_STRUCTURES_H__
