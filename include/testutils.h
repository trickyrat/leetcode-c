//
// Created by wangj on 8/24/2022.
//

#ifndef LEETCODEC_TESTUTILS_H
#define LEETCODEC_TESTUTILS_H

#include "string.h"

#define ARRAY(T, ...) \
    (T[]) { __VA_ARGS__ }

#define MATRIX(T, VAR, ROW, COLUMN, ...) \
    (T VAR[ROW][COLUMN]) { __VA_ARGS__ }

#define MATRIX_POINTER(T, VARIABLE) (T **) VARIABLE


ListNode *create_listnode(int *nums, int numsSize) {
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

int *convert_listnode_to_array(const ListNode *head, int *returnSize) {
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

bool is_same_listnode(const ListNode *lhs, const ListNode *rhs) {
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

TreeNode *create_treenode(int *nums, int numsSize) {

}

#endif//LEETCODEC_TESTUTILS_H
