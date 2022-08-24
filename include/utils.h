//
// Created by wangj on 8/24/2022.
//

#ifndef LEETCODEC_UTILS_H
#define LEETCODEC_UTILS_H

inline int cmp(const void *pa, const void *pb) {
  return *(int *) pa - *(int *) pb;
}

inline int cmp_s(const void* context, const void *pa, const void *pb) {
  return *(int *) pa - *(int *) pb;
}

inline int cmp_with_order(const void* context, const void *pa, const void *pb) {
  int order = *(int*)context;
  int result = *(int *) pa - *(int *) pb;
  if(order) {
    result *= -1;
  }
  return result;
}

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}

#endif//LEETCODEC_UTILS_H
