#include "include/uthash.h"

#define MAX_STR_LEN 64

struct HashTable {
  int key;
  int val;
  UT_hash_handle hh;
};

typedef struct {
    char key[MAX_STR_LEN];
    UT_hash_handle hh;
} HashItem;

struct HashTable *hashTable;

struct HashTable* find(int key) {
  struct HashTable *tmp;
  HASH_FIND_INT(hashTable, &key, tmp);
  return tmp;
}

void insert(int key, int val) {
  struct HashTable *it = find(key);
  if (it == NULL) {
    struct HashTable *tmp = malloc(sizeof(struct HashTable));
    tmp->key = key, tmp->val = val;
    HASH_ADD_INT(hashTable, key, tmp);
  } else {
    it->val = val;
  }
}