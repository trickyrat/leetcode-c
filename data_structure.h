//
// Created by wangj on 2022/3/16.
//

#ifndef LEETCODEC_DATA_STRUCTURE_H
#define LEETCODEC_DATA_STRUCTURE_H


typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;

typedef struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
}TreeNode;

#endif //LEETCODEC_DATA_STRUCTURE_H
