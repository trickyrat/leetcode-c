//
// Created by wangj on 8/24/2022.
//

#ifndef LEETCODEC_TESTUTILS_H
#define LEETCODEC_TESTUTILS_H

#define ARRAY(T, ...) (T[]){__VA_ARGS__}

#define MATRIX(T, VAR, ROW, COLUMN, ...) (T VAR[ROW][COLUMN]){__VA_ARGS__}

#define MATRIX_POINTER(T, VARIABLE) (T**)VARIABLE


#endif//LEETCODEC_TESTUTILS_H
