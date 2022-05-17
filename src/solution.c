//
// Created by wangj on 2022-01-08.
//

#include "solution.h"
#include "hashtable.h"
#include <stdio.h>
#include <string.h>

void swap(int* a, int* b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
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

int removeElement(int *nums, int numsSize, int val) {
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

void rotate(int **matrix, int matrixSize, int* matrixColSize) {
  for (int i = 0; i < matrixSize / 2; ++i) {
    for (int j = 0; j < matrixSize; ++j) {
      swap(&matrix[i][j], &matrix[matrixSize-i-1][j]);
    }
  }
  for (int i = 0; i < matrixSize; ++i) {
    for (int j = 0; j < i; ++j) {
      swap(&matrix[i][j], &matrix[j][i]);
    }
  }
}


bool isSameTree(TreeNode *p, TreeNode *q) {
  if (p == NULL && q == NULL) {
    return true;
  } else if (p == NULL || q == NULL) {
    return false;
  } else if (p->val != q->val) {
    return false;
  } else {
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
  }
}

struct ListNode *reverseList(struct ListNode *head) {
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

int countNumbersWithUniqueDigits(int n) {
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

int *lexicalOrder(int n, int *returnSize) {
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

int *findDiagonalOrder(int **mat, int matSize, int *matColSize, int *returnSize) {
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

int *selfDividingNumbers(int left, int right, int *returnSize) {
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

char nextGreatestLetter(char *letters, int lettersSize, char target) {
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

int uniqueMorseRepresentations(char **words, int wordsSize) {
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

int *numberOfLines(int *widths, int widthsSize, char *s, int *returnSize) {
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

#define MAX(a, b) ((a) > (b) ? (a) : (b))

int maximumWealth(int **accounts, int accountsSize, int *accountsColSize) {
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

int projectionArea(int **grid, int gridSize, int *gridColSize) {
  int xyArea = 0, yzArea = 0, zxArea = 0;
  for(int i = 0; i < gridSize; ++i) {
    int yzHeight = 0, zxHeight = 0;
    for(int j = 0; j < gridSize; ++j) {
      xyArea += grid[i][j] > 0 ? 1 : 0;
      yzHeight = MAX(yzHeight, grid[j][i]);
      zxHeight = MAX(zxHeight, grid[i][j]);
    }
    yzArea += yzHeight;
    zxArea += zxHeight;
  }
  return xyArea + yzArea + zxArea;
}

int *sortArrayByParity(int *nums, int numsSize, int *returnSize) {
  int left = 0, right = numsSize - 1;
  while(left < right) {
    while(left < right && nums[left] % 2 == 0) {
      left++;
    }
    while(left < right && nums[right] % 2 == 1) {
      right--;
    }
    if(left < right) {
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

int *diStringMatch(char *s, int *returnSize) {
  int n = strlen(s), lo = 0, hi = n;
  int* perm = (int*) malloc(sizeof(int)*(n+1));
  for (int i = 0; i < n; ++i) {
    perm[i] = s[i] == 'I' ? lo++ : hi--;
  }
  perm[n] = lo;
  *returnSize = n + 1;
  return perm;
}

int minDeletionSize(char **strs, int strsSize) {
  int row = strsSize;
  int col = strlen(strs[0]);
  int ans = 0;
  for (int j = 0; j < col; ++j) {
    for (int i = 1; i < row; ++i) {
      if(strs[i - 1][j] > strs[i][j]) {
        ans++;
        break;
      }
    }
  }
  return ans;
}

int findTheWinner(int n, int k) {
  int winner = 1;
  for (int i = 2; i <= n; ++i) {
    winner = (k + winner - 1) % i + 1;
  }
  return winner;
}

int pivotIndex(int *nums, int numsSize) {
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