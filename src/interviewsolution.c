//
// Created by wangj on 9/30/2022.
//

#include "interviewsolution.h"
#include <malloc.h>
#include <stdio.h>
#include <string.h>

bool is_flipped_string(char* s1, char* s2) {
    int m = strlen(s1), n = strlen(s2);
    if (m != n) {
        return false;
    }
    char *str = (char*)malloc(sizeof (char)*(m+n+1));
    sprintf(str, "%s%s", s2, s2);
    return strstr(str, s1) != NULL;
}