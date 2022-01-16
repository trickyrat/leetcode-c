//
// Created by wangj on 2022-01-08.
//

#ifndef LEETCODEC_SOLUTION_H
#define LEETCODEC_SOLUTION_H

#include <malloc.h>
#include <assert.h>
struct ListNode {
  int val;
  struct ListNode *next;
};

typedef struct {
  struct ListNode *head;
} Solution;

Solution *solutionCreate(struct ListNode *head) {
  Solution *obj = (Solution *) malloc(sizeof(Solution));
  assert(obj != NULL);
  obj->head = head;
  return obj;
}

int solutionGetRandom(Solution *obj) {
  int i = 1, ans = 0;
  for (struct ListNode *curr = obj->head; curr; curr = curr->next) {
    if (rand() % i == 0) {
      ans = curr->val;
    }
    ++i;
  }
  return ans;
}

void solutionFree(Solution* obj) {
  free(obj);
}

int search(int *nums, int numSize, int target);

#endif //LEETCODEC_SOLUTION_H
