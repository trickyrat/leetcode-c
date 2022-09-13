//
// Created by wangj on 2022/8/29.
//

#ifndef LEETCODEC_SOLUTIONUTILS_H
#define LEETCODEC_SOLUTIONUTILS_H

#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MIN(a, b) ((a) > (b) ? (b) : (a))

inline int cmp_asc(const void *pa, const void *pb) {
    return *(int *) pa - *(int *) pb;
}

inline int cmp_desc(const void *pa, const void *pb) {
    return *(int *) pb - *(int *) pa;
}

inline int cmp_asc_s(const void *context, const void *pa, const void *pb) {
    return *(int *) pa - *(int *) pb;
}

inline int cmp_desc_s(const void *context, const void *pa, const void *pb) {
    return *(int *) pb - *(int *) pa;
}

inline int cmp_array_of_array(const void *pa, const void *pb) {
    return (*(int **) pa)[1] - (*(int **) pb)[1];
}

inline int cmp_with_order(const void *context, const void *pa, const void *pb) {
    int order = *(int *) context;
    int result = *(int *) pa - *(int *) pb;
    if (order) {
        result *= -1;
    }
    return result;
}

inline void swap_int(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

inline void swap_char(char *a, char *b) {
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

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

TreeNode *create_treenode(int val, const TreeNode *left, const TreeNode *right) {
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
            words[wordsSize] = (char *) malloc(sizeof(char) * (pos - curr + 1));
            strncpy(words[wordsSize], str + curr, pos - curr);
            words[wordsSize++][pos - curr] = '\0';
        }
    }
    *returnSize = wordsSize;
    return words;
}

#endif//LEETCODEC_SOLUTIONUTILS_H
