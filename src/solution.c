//
// Created by wangj on 2022-01-08.
//
#include <assert.h>
#include <malloc.h>
#include <stdio.h>
#include <string.h>

#include "hashtable.h"
#include "solution.h"
#include "solutionutils.h"

int *two_sum(int *nums, int numsSize, int target, int *returnSize) {
    hashTable = NULL;
    for (int i = 0; i < numsSize; i++) {
        struct HashTable *it = find(target - nums[i]);
        if (it != NULL) {
            int *ret = malloc(sizeof(int) * 2);
            if (ret) {
                ret[0] = it->val, ret[1] = i;
                *returnSize = 2;
                return ret;
            }
        }
        insert(nums[i], i);
    }
    *returnSize = 0;
    return NULL;
}

ListNode *add_two_numbers(ListNode *l1, ListNode *l2) {
    ListNode *head = NULL, *tail = NULL;
    int carry = 0;
    while (l1 || l2) {
        int n1 = l1 ? l1->val : 0;
        int n2 = l2 ? l2->val : 0;
        int sum = n1 + n2 + carry;
        if (!head) {
            head = tail = malloc(sizeof(ListNode));
            tail->val = sum % 10;
            tail->next = NULL;
        } else {
            tail->next = malloc(sizeof(ListNode));
            tail->next->val = sum % 10;
            tail = tail->next;
            tail->next = NULL;
        }
        carry = sum / 10;
        if (l1) {
            l1 = l1->next;
        }
        if (l2) {
            l2 = l2->next;
        }
    }
    if (carry > 0) {
        tail->next = malloc(sizeof(ListNode));
        tail->next->val = carry;
        tail->next->next = NULL;
    }
    return head;
}

int remove_element(int *nums, int numsSize, int val) {
    int left = 0;
    for (int right = 0; right < numsSize; ++right) {
        if (nums[right] != val) {
            nums[left] = nums[right];
            left++;
        }
    }
    return left;
}

int search(const int *nums, int numSize, int target) {
    if (numSize < 1) {
        return -1;
    }
    if (numSize == 1) {
        return nums[0] == target ? 0 : -1;
    }
    int l = 0, r = numSize - 1;
    while (l <= r) {
        int mid = l + (r - l) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        if (nums[0] <= nums[mid]) {
            if (nums[0] <= target && target < nums[mid]) {
                r = mid - 1;
            } else {
                l = mid + 1;
            }
        } else {
            if (nums[mid] < target && target <= nums[numSize - 1]) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
    }
    return -1;
}

void rotate(int **matrix, int matrixSize, int *matrixColSize) {
    for (int i = 0; i < matrixSize / 2; ++i) {
        for (int j = 0; j < matrixSize; ++j) {
            swap(&matrix[i][j], &matrix[matrixSize - i - 1][j]);
        }
    }
    for (int i = 0; i < matrixSize; ++i) {
        for (int j = 0; j < i; ++j) {
            swap(&matrix[i][j], &matrix[j][i]);
        }
    }
}

void merge(int *nums1, int nums1Size, int m, int *nums2, int nums2Size, int n) {
    int p1 = m - 1, p2 = n - 1, tail = m + n - 1;
    int cur = 0;
    while (p1 >= 0 || p2 >= 0) {
        if (p1 == -1) {
            cur = nums2[p2--];
        } else if (p2 == -1) {
            cur = nums1[p1--];
        } else if (nums1[p1] > nums2[p2]) {
            cur = nums1[p1--];
        } else {
            cur = nums2[p2--];
        }
        nums1[tail--] = cur;
    }
}

bool is_same_tree(TreeNode *p, TreeNode *q) {
    if (p == NULL && q == NULL) {
        return true;
    } else if (p == NULL || q == NULL) {
        return false;
    } else if (p->val != q->val) {
        return false;
    } else {
        return is_same_tree(p->left, q->left) && is_same_tree(p->right, q->right);
    }
}

struct ListNode *reverse_list(struct ListNode *head) {
    struct ListNode *prev = NULL;
    struct ListNode *curr = head;
    while (curr) {
        struct ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int count_numbers_with_unique_digits(int n) {
    if (n == 0) {
        return 1;
    }
    if (n == 1) {
        return 10;
    }
    int ans = 10, cur = 9;
    for (int i = 0; i < n - 1; ++i) {
        cur *= 9 - i;
        ans += cur;
    }
    return ans;
}

int *lexical_order(int n, int *returnSize) {
    int *ret = (int *) malloc(sizeof(int) * n);
    int num = 1;
    for (int i = 0; i < n; ++i) {
        ret[i] = num;
        if (num * 10 <= n) {
            num *= 10;
        } else {
            while (num % 10 == 9 || num + 1 > n) {
                num /= 10;
            }
            num++;
        }
    }
    *returnSize = n;
    return ret;
}

int find_substring_in_wraparound_string(char *p) {
    int dp[26];
    int k = 0;
    int len = strlen(p);
    memset(dp, 0, sizeof(dp));
    for (int i = 0; i < len; ++i) {
        if (i > 0 && (p[i] - p[i - 1] + 26) % 26 == 1) {
            ++k;
        } else {
            k = 1;
        }
        dp[p[i] - 'a'] = MAX(dp[p[i] - 'a'], k);
    }
    int res = 0;
    for (int i = 0; i < 26; ++i) {
        res += dp[i];
    }
    return res;
}

int *find_diagonal_order(int **mat, int matSize, int *matColSize, int *returnSize) {
    if (matSize == 0) {
        return NULL;
    }
    int row = 0, col = 0;
    int direction = 1;
    int r = 0;
    int *ans = (int *) calloc(matSize * (*matColSize), sizeof(int));
    while (row < matSize && col < (*matColSize)) {
        ans[r++] = mat[row][col];
        int new_row = row + (direction == 1 ? -1 : 1);
        int new_col = col + (direction == 1 ? 1 : -1);
        if (new_row < 0 || new_row == matSize || new_col < 0 || new_col == (*matColSize)) {
            if (direction == 1) {
                row += (col == (*matColSize) - 1 ? 1 : 0);
                col += (col < (*matColSize) - 1 ? 1 : 0);
            } else {
                col += (row == matSize - 1 ? 1 : 0);
                row += (row < matSize - 1 ? 1 : 0);
            }
            direction = 1 - direction;
        } else {
            row = new_row;
            col = new_col;
        }
    }
    *returnSize = matSize * (*matColSize);
    return ans;
}

int find_longest_chain(int **pairs, int pairsSize, int *pairsColSize) {
    int curr = INT_MIN, res = 0;
    qsort(pairs, pairsSize, sizeof(int *), cmp_array_of_array);
    for (int i = 0; i < pairsSize; ++i) {
        if (curr < pairs[i][0]) {
            curr = pairs[i][1];
            res += 1;
        }
    }
    return res;
}

int *find_closest_elements(int *arr, int arrSize, int k, int x, int *returnSize) {
    int right = binary_search(arr, arrSize, x);
    int left = right - 1;
    while (k--) {
        if (left < 0) {
            right++;
        } else if (right >= arrSize || x - arr[left] <= arr[right] - x) {
            left--;
        } else {
            right++;
        }
    }
    int size = right - left - 1;
    int *res = (int *) malloc(sizeof(int) * size);
    memcpy(res, arr + left + 1, sizeof(int) * size);
    *returnSize = size;
    return res;
}

int width_of_binary_tree(struct TreeNode *root) {
    unsigned long long res = 1;
    Pair *arr = (Pair *) malloc(sizeof(Pair) * MAX_NODE_SIZE);
    Pair *tmp = (Pair *) malloc(sizeof(Pair) * MAX_NODE_SIZE);
    int arr_size = 0, tmp_size = 0;
    arr[arr_size].node = root;
    arr[arr_size].index = 1LL;
    arr_size++;
    while (arr_size > 0) {
        tmp_size = 0;
        for (int i = 0; i < arr_size; ++i) {
            if (arr[i].node->left) {
                tmp[tmp_size].node = arr[i].node->left;
                tmp[tmp_size].index = arr[i].index * 2;
                tmp_size++;
            }
            if (arr[i].node->right) {
                tmp[tmp_size].node = arr[i].node->right;
                tmp[tmp_size].index = arr[i].index * 2 + 1;
                tmp_size++;
            }
        }
        res = MAX(res, arr[arr_size - 1].index - arr[0].index + 1);
        arr_size = tmp_size;
        Pair *p = arr;
        arr = tmp;
        tmp = p;
    }
    return res;
}

int *construct_array(int n, int k, int *returnSize) {
    int *res = (int *) malloc(sizeof(int) * n);
    int index = 0;
    for (int i = 1; i < n - k; ++i) {
        res[index++] = i;
    }
    for (int i = n - k, j = n; i <= j; ++i, --j) {
        res[index++] = i;
        if (i != j) {
            res[index++] = j;
        }
    }
    *returnSize = n;
    return res;
}

TreeNode *trim_bst(TreeNode *root, int low, int high) {
    while (root && (root->val < low || root->val > high)) {
        if (root->val < low) {
            root = root->right;
        } else {
            root = root->left;
        }
    }
    if (root == NULL) {
        return NULL;
    }
    for (struct TreeNode* node = root; node->left; ) {
        if (node->left->val < low) {
            node->left = node->left->right;
        } else {
            node = node->left;
        }
    }
    for (struct TreeNode* node = root; node->right; ) {
        if (node->right->val > high) {
            node->right = node->right->left;
        } else {
            node = node->right;
        }
    }
    return root;
}

static int longest_univalue_path_dfs(TreeNode *root, int *res) {
    if (root == NULL) {
        return 0;
    }
    int left = longest_univalue_path_dfs(root->left, res), right = longest_univalue_path_dfs(root->right, res);
    int left1 = 0, right1 = 0;
    if (root->left && root->left->val == root->val) {
        left1 = left + 1;
    }
    if (root->right && root->right->val == root->val) {
        right1 = right + 1;
    }
    *res = MAX(*res, left1 + right1);
    return MAX(left1, right1);
}

int longest_univalue_path(TreeNode *root) {
    int res = 0;
    longest_univalue_path_dfs(root, &res);
    return res;
}

static bool isSelfDividing(int num) {
    int tmp = num;
    while (tmp > 0) {
        int digit = tmp % 10;
        if (digit == 0 || num % digit != 0) {
            return false;
        }
        tmp /= 10;
    }
    return true;
}

int *self_dividing_numbers(int left, int right, int *returnSize) {
    int *ans = (int *) malloc(sizeof(int) * (right - left + 1));
    int pos = 0;
    for (int i = left; i <= right; ++i) {
        if (isSelfDividing(i)) {
            ans[pos++] = i;
        }
    }
    *returnSize = pos;
    return ans;
}

char next_greatest_letter(char *letters, int lettersSize, char target) {
    if (target >= letters[lettersSize - 1]) {
        return letters[0];
    }
    int low = 0, high = lettersSize - 1;
    while (low < high) {
        int mid = (high - low) / 2 + low;
        if (letters[mid] > target) {
            high = mid;
        } else {
            low = mid + 1;
        }
    }
    return letters[low];
}

static long long zeta(long x) {
    long long res = 0;
    while (x != 0) {
        res += x / 5;
        x /= 5;
    }
    return res;
}

static long long nx(int k) {
    long long left = 0, right = 5LL * k;
    while (left <= right) {
        long mid = (left + right) / 2;
        if (zeta(mid) < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return right + 1;
}

int preimage_size_fzf(int k) {
    return nx(k + 1) - nx(k);
}

int unique_morse_representations(char **words, int wordsSize) {
    const char *MORSE[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.",
                             "....", "..", ".---", "-.-", ".-..", "--", "-.",
                             "---", ".--.", "--.-", ".-.", "...", "-", "..-",
                             "...-", ".--", "-..-", "-.--", "--.."};
    HashItem *seen = NULL;
    for (int i = 0; i < wordsSize; ++i) {
        HashItem *pEntry = NULL;
        int len = strlen(words[i]);
        int pos = 0;
        char code[MAX_STR_LEN];
        for (int j = 0; j < len; ++j) {
            pos += sprintf(code + pos, "%s", MORSE[words[i][j] - 'a']);
        }
        HASH_FIND_STR(seen, code, pEntry);
        if (NULL == pEntry) {
            pEntry = (HashItem *) malloc(sizeof(HashItem));
            strcpy(pEntry->key, code);
            HASH_ADD_STR(seen, key, pEntry);
        }
    }
    int ans = HASH_COUNT(seen);
    HashItem *curr = NULL, *tmp = NULL;
    HASH_ITER(hh, seen, curr, tmp) {
        HASH_DEL(seen, curr);
        free(curr);
    }
    return ans;
}

int *number_of_lines(int *widths, int widthsSize, char *s, int *returnSize) {
    const int MAX_WIDTH = 100;
    int lines = 1, width = 0, len = strlen(s);
    for (int i = 0; i < len; ++i) {
        int need = widths[s[i] - 'a'];
        width += need;
        if (width > MAX_WIDTH) {
            lines++;
            width = need;
        }
    }
    int *ans = (int *) malloc(sizeof(int) * 2);
    *returnSize = 2;
    ans[0] = lines;
    ans[1] = width;
    return ans;
}

int unique_letter_string(char *s) {
    ListNode **index = (ListNode **) malloc(sizeof(ListNode *) * 26);
    for (int i = 0; i < 26; ++i) {
        index[i] = NULL;
    }
    int len = strlen(s);
    for (int i = 0; i < len; ++i) {
        ListNode *node = (ListNode *) malloc(sizeof(ListNode));
        node->val = i;
        node->next = index[s[i] - 'A'];
        index[s[i] - 'A'] = node;
    }
    int res = 0;
    for (int i = 0; i < 26; ++i) {
        if (index[i]) {
            ListNode *curr = index[i];
            ListNode *prev = NULL;
            ListNode *next = curr->next;
            while (curr) {
                if (prev == NULL && next == NULL) {
                    res += (curr->val + 1) * (len - curr->val);
                } else if (prev == NULL) {
                    res += (curr->val - next->val) * (len - curr->val);
                } else if (next == NULL) {
                    res += (curr->val + 1) * (prev->val - curr->val);
                } else {
                    res += (curr->val - next->val) * (prev->val - curr->val);
                }
                prev = curr;
                curr = curr->next;
                if (next) {
                    next = next->next;
                }
            }
        }
    }
    for (int i = 0; i < 26; ++i) {
        if (index[i]) {
            ListNode *curr = NULL, *temp = NULL;
            for (curr = index[i]; curr;) {
                temp = curr;
                curr = curr->next;
                free(temp);
            }
        }
    }
    return res;
}

int projection_area(int **grid, int gridSize, int *gridColSize) {
    int xyArea = 0, yzArea = 0, zxArea = 0;
    for (int i = 0; i < gridSize; ++i) {
        int yzHeight = 0, zxHeight = 0;
        for (int j = 0; j < gridSize; ++j) {
            xyArea += grid[i][j] > 0 ? 1 : 0;
            yzHeight = MAX(yzHeight, grid[j][i]);
            zxHeight = MAX(zxHeight, grid[i][j]);
        }
        yzArea += yzHeight;
        zxArea += zxHeight;
    }
    return xyArea + yzArea + zxArea;
}

int *sort_array_by_parity(int *nums, int numsSize, int *returnSize) {
    int left = 0, right = numsSize - 1;
    while (left < right) {
        while (left < right && nums[left] % 2 == 0) {
            left++;
        }
        while (left < right && nums[right] % 2 == 1) {
            right--;
        }
        if (left < right) {
            int temp = nums[left];
            nums[left] = nums[right];
            nums[right] = temp;
            left++;
            right--;
        }
    }
    *returnSize = numsSize;
    return nums;
}

int *di_string_match(char *s, int *returnSize) {
    int n = strlen(s), lo = 0, hi = n;
    int *perm = (int *) malloc(sizeof(int) * (n + 1));
    for (int i = 0; i < n; ++i) {
        perm[i] = s[i] == 'I' ? lo++ : hi--;
    }
    perm[n] = lo;
    *returnSize = n + 1;
    return perm;
}

int min_deletion_size(char **strs, int strsSize) {
    int row = strsSize;
    int col = strlen(strs[0]);
    int ans = 0;
    for (int j = 0; j < col; ++j) {
        for (int i = 1; i < row; ++i) {
            if (strs[i - 1][j] > strs[i][j]) {
                ans++;
                break;
            }
        }
    }
    return ans;
}

bool validate_stack_sequences(int *pushed, int pushedSize, int *popped, int poppedSize) {
    int *stack = (int *) malloc(sizeof(int) * pushedSize);
    int top = 0;
    for (int i = 0, j = 0; i < pushedSize; ++i) {
        stack[top++] = pushed[i];
        while (top > 0 && stack[top - 1] == popped[j]) {
            top--;
            j++;
        }
    }
    free(stack);
    return top == 0;
}

bool is_alien_sorted(char **words, int wordsSize, char *order) {
    int index[26];
    for (int i = 0; i < strlen(order); ++i) {
        index[order[i] - 'a'] = i;
    }
    for (int i = 1; i < wordsSize; ++i) {
        bool valid = false;
        int len1 = strlen(words[i - 1]);
        int len2 = strlen(words[i]);
        int n = len1 < len2 ? len1 : len2;
        for (int j = 0; j < n; ++j) {
            int prev = index[words[i - 1][j] - 'a'];
            int curr = index[words[i][j] - 'a'];
            if (prev < curr) {
                valid = true;
                break;
            } else if (prev > curr) {
                return false;
            }
        }
        if (!valid) {
            if (len1 > len2) {
                return false;
            }
        }
    }
    return true;
}

bool is_unival_tree(TreeNode *root) {
    if (!root) {
        return true;
    }
    if (root->left) {
        if (root->val != root->left->val || !is_unival_tree(root->left)) {
            return false;
        }
    }

    if (root->right) {
        if (root->val != root->right->val || !is_unival_tree(root->right)) {
            return false;
        }
    }
    return true;
}

struct TreeNode *insert_into_max_tree(struct TreeNode *root, int val) {
    struct TreeNode *parent = NULL;
    struct TreeNode *curr = root;
    struct TreeNode *node = NULL;
    while (curr) {
        if (val > curr->val) {
            if (!parent) {
                return create_treenode(val, root, NULL);
            }
            parent->right = create_treenode(val, curr, NULL);
            return root;
        } else {
            parent = curr;
            curr = curr->right;
        }
    }
    parent->right = create_treenode(val, NULL, NULL);
    return root;
}

char *defang_ip_addr(char *address) {
    int len = strlen(address);
    int pos = 0;
    char *res = (char *) malloc(sizeof(char) * (len + 7));// [] [] []
    for (int i = 0; i < len; ++i) {
        if (address[i] == '.') {
            pos += sprintf(res + pos, "%s", "[.]");
        } else {
            res[pos++] = address[i];
        }
    }
    res[pos] = '\0';
    return res;
}

int *min_subsequence(int *nums, int numsSize, int *returnSize) {
    int total = 0;
    for (int i = 0; i < numsSize; ++i) {
        total += nums[i];
    }
    qsort_s(nums, numsSize, sizeof(int), cmp_s, NULL);
    int *ans = (int *) malloc(sizeof(int) * numsSize);
    int curr = 0, pos = 0;
    for (int i = numsSize - 1; i >= 0; --i) {
        curr += nums[i];
        ans[pos++] = nums[i];
        if (total - curr < curr) {
            break;
        }
    }
    *returnSize = pos;
    return ans;
}

char **string_matching(char **words, int wordsSize, int *returnSize) {
    char **res = (char **) malloc(sizeof(char *) * wordsSize);
    int pos = 0;
    for (int i = 0; i < wordsSize; ++i) {
        for (int j = 0; j < wordsSize; ++j) {
            if (i != j && strstr(words[j], words[i])) {
                res[pos++] = words[i];
                break;
            }
        }
    }
    *returnSize = pos;
    return res;
}

int busy_student(int *startTime, int startTimeSize, int *endTime, int endTimeSize, int queryTime) {
    int res = 0;
    for (int i = 0; i < startTimeSize; ++i) {
        if (startTime[i] <= queryTime && queryTime <= endTime[i]) {
            res++;
        }
    }
    return res;
}

static bool is_prefix(const char *sentence, int start, int end, const char *searchWord) {
    int len = strlen(searchWord);
    for (int i = 0; i < len; ++i) {
        if (start + i >= end || sentence[start + i] != searchWord[i]) {
            return false;
        }
    }
    return true;
}

int is_prefix_of_word(char *sentence, char *searchWord) {
    int n = strlen(sentence), index = 1, start = 0, end = 0;
    while (start < n) {
        while (end < n && sentence[end] != ' ') {
            end++;
        }
        if (is_prefix(sentence, start, end, searchWord)) {
            return index;
        }
        index++;
        end++;
        start = end;
    }
    return -1;
}

bool can_be_equal(int *target, int targetSize, int *arr, int arrSize) {
    int descending = 0;
    qsort_s(target, targetSize, sizeof(int), cmp_s, NULL);
    qsort_s(arr, arrSize, sizeof(int), cmp_s, NULL);
    return memcmp(target, arr, sizeof(int) * arrSize) == 0;
}

int max_product(int *nums, int numsSize) {
    int a = nums[0], b = nums[1];
    if (a < b) {
        int temp = a;
        a = b;
        b = temp;
    }
    for (int i = 2; i < numsSize; i++) {
        if (nums[i] > a) {
            b = a;
            a = nums[i];
        } else if (nums[i] > b) {
            b = nums[i];
        }
    }
    return (a - 1) * (b - 1);
}

int *shuffle(int *nums, int numsSize, int n, int *returnSize) {
    int *res = (int *) malloc(sizeof(int) * n * 2);
    for (int i = 0; i < n; ++i) {
        res[2 * i] = nums[i];
        res[2 * i + 1] = nums[n + i];
    }
    *returnSize = n * 2;
    return res;
}

int *final_prices(int *prices, int pricesSize, int *returnSize) {
    int *res = (int *) malloc(sizeof(int) * pricesSize);
    int *stack = (int *) malloc(sizeof(int) * pricesSize);
    int top = 0;
    for (int i = pricesSize - 1; i >= 0; --i) {
        while (top > 0 && stack[top - 1] > prices[i]) {
            top--;
        }
        res[i] = top == 0 ? prices[i] : prices[i] - stack[top - 1];
        stack[top++] = prices[i];
    }
    *returnSize = pricesSize;
    free(stack);
    return res;
}

int num_special(int **mat, int matSize, int *matColSize) {
    int m = matSize, n = matColSize[0];
    for (int i = 0; i < m; ++i) {
        int count = 0;
        for (int j = 0; j < n; ++j) {
            if (mat[i][j] == 1) {
                count++;
            }
        }
        if (i == 0) {
            count--;
        }
        if (count > 0) {
            for (int j = 0; j < n; ++j) {
                if (mat[i][j] == 1) {
                    mat[0][j] += count;
                }
            }
        }
    }
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        if (mat[0][i] == 1) {
            sum++;
        }
    }
    return sum;
}

char *reorder_spaces(char *text) {
    int length = strlen(text);
    int wordsSize = 0;
    char **words = split(text, ' ', &wordsSize);
    int spaceCount = length;
    int wordCount = 0;
    for (int i = 0; i < wordsSize; ++i) {
        int len = strlen(words[i]);
        if (len > 0) {
            spaceCount -= len;
            wordCount++;
        }
    }
    char *res = (char *) malloc(sizeof(char) * (length + 1));
    int pos = 0;
    if (wordsSize == 1) {
        pos += sprintf(res + pos, "%s", words[0]);
        for (int i = 0; i < spaceCount; ++i) {
            res[pos++] = ' ';
        }
        res[pos] = '\0';
        free(words[0]);
        free(words);
        return res;
    }

    int perSpace = spaceCount / (wordCount - 1);
    int restSpace = spaceCount % (wordCount - 1);
    for (int i = 0; i < wordsSize; i++) {
        if (strlen(words[i]) == 0) {
            continue;
        }
        if (pos > 0) {
            for (int j = 0; j < perSpace; j++) {
                res[pos++] = ' ';
            }
        }
        pos += sprintf(res + pos, "%s", words[i]);
    }
    for (int i = 0; i < restSpace; i++) {
        res[pos++] = ' ';
    }
    res[pos] = '\0';
    for (int i = 0; i < wordsSize; i++) {
        free(words[i]);
    }
    free(words);
    return res;
}

int min_operations(char **logs, int logsSize) {
    int depth = 0;
    for (int i = 0; i < logsSize; ++i) {
        if (!strcmp(logs[i], "./")) {
            continue;
        } else if (!strcmp(logs[i], "../")) {
            if (depth > 0) {
                depth--;
            }
        } else {
            depth++;
        }
    }
    return depth;
}

int maximum_wealth(int **accounts, int accountsSize, int *accountsColSize) {
    int maxWealth = 0;
    for (int i = 0; i < accountsSize; ++i) {
        int sum = 0;
        for (int j = 0; j < accountsColSize[0]; ++j) {
            sum += accounts[i][j];
        }
        maxWealth = MAX(maxWealth, sum);
    }
    return maxWealth;
}

int find_the_winner(int n, int k) {
    int winner = 1;
    for (int i = 2; i <= n; ++i) {
        winner = (k + winner - 1) % i + 1;
    }
    return winner;
}

int pivot_index(int *nums, int numsSize) {
    int total = 0;
    for (int i = 0; i < numsSize; i++) {
        total += nums[i];
    }
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        if (2 * sum + nums[i] == total) {
            return i;
        }
        sum += nums[i];
    }
    return -1;
}