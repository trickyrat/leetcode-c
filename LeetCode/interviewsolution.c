//
// Created by wangj on 9/30/2022.
//

#include "interviewsolution.h"
#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

bool is_flipped_string(char *s1, char *s2) {
    int m = strlen(s1), n = strlen(s2);
    if (m != n) {
        return false;
    }
    int size = sizeof(char) * (m + n + 1);
    char *str = (char *) malloc(size);
    sprintf_s(str, size, "%s%s", s2, s2);
    return strstr(str, s1) != NULL;
}

int get_kth_magic_number(int k) {
    int *dp = (int *) malloc(sizeof(int) * (k + 1));
    dp[1] = 1;
    int p3 = 1, p5 = 1, p7 = 1;
    for (int i = 2; i <= k; ++i) {
        int num3 = dp[p3] * 3, num5 = dp[p5] * 5, num7 = dp[p7] * 7;
        dp[i] = fmin(fmin(num3, num5), num7);
        if (dp[i] == num3) {
            p3++;
        }
        if (dp[i] == num5) {
            p5++;
        }
        if (dp[i] == num7) {
            p7++;
        }
    }
    return dp[k];
}