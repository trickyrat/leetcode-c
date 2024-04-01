//
// Created by wangj on 2022/5/6.
//

#pragma once

#include <stdlib.h>

typedef struct {
    int *queue;
    int capability;
    int head;
    int tail;
} RecentCounter;

RecentCounter *recent_counter_create() {
    RecentCounter *obj = (RecentCounter *) malloc(sizeof(RecentCounter));
    if (obj) {
        obj->capability = 10001;
        obj->queue = (int *) malloc(sizeof(int) * obj->capability);
        obj->head = 0;
        obj->tail = 0;
    }

    return obj;
}

int recent_counter_ping(RecentCounter *obj, int t) {
    obj->queue[obj->tail++] = t;
    while (obj->queue[obj->head] < t - 3000) {
        obj->head++;
    }
    return obj->tail - obj->head;
}

void recent_counter_free(RecentCounter *obj) {
    free(obj->queue);
    free(obj);
}
