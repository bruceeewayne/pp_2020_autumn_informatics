// Copyright 2020 Brice ASSEMIEN
#ifndef MODULES_TASK_1_BRICE_A_MATRIX_MAX_VALUE_MATRIX_MAX_VALUE_H_
#define MODULES_TASK_1_BRICE_A_MATRIX_MAX_VALUE_MATRIX_MAX_VALUE_H_
#include <vector>

std::vector<int> generateMatrix(int rows, int cols);
int sequentialFind(std::vector<int> matrix, int rows, int cols);
int parallelFind(std::vector<int> matrix, int rows, int cols);

#endif  // MODULES_TASK_1_BRICE_A_MATRIX_MAX_VALUE_MATRIX_MAX_VALUE_H_
