/*
Copyright (C) 2023, Advanced Micro Devices, Inc. All rights reserved.
SPDX-License-Identifier: MIT
*/

#include <cstdint>
int8_t B04[2048] = {-1, -9, 14, 2, 6, -4, -7, -10, 4, 2, 9, -11, -3, 1, -3, 2, 15, -6, 2, -8, 1, 7, 12, 6, 9, -11, 10, -9, 12, -10, 7, -11, -3, -1, 15, 12, -3, 12, 1, -1, 3, 13, 7, -3, -3, 4, 10, -2, -12, 5, 10, -5, -2, 5, -12, 15, 10, 7, 5, 8, -10, -11, 9, -9, -6, 0, 0, 0, 0, 0, 0, 0, 15, -4, 0, 0, 0, 0, 0, 0, -10, 3, 0, 0, 0, 0, 0, 0, 2, 11, 0, 0, 0, 0, 0, 0, -18, -2, 0, 0, 0, 0, 0, 0, 2, -8, 0, 0, 0, 0, 0, 0, 12, -8, 0, 0, 0, 0, 0, 0, -5, 6, 0, 0, 0, 0, 0, 0, 0, -8, 5, 7, 16, 0, 15, -18, -1, 17, -6, -12, 7, -8, -14, 8, 10, -7, 0, 1, -1, 10, 3, 0, -2, -2, -4, -2, 3, -4, 3, 20, 0, -13, 12, 2, 18, -9, 12, 10, -13, 10, -3, -12, 20, -10, -6, 22, 11, 9, 12, -3, 3, -7, 1, -8, -7, -9, -2, -6, 8, 10, -5, 3, -12, 10, 0, 0, 0, 0, 0, 0, 7, 13, 0, 0, 0, 0, 0, 0, 7, 6, 0, 0, 0, 0, 0, 0, 6, -17, 0, 0, 0, 0, 0, 0, 3, -12, 0, 0, 0, 0, 0, 0, -23, 9, 0, 0, 0, 0, 0, 0, -6, -5, 0, 0, 0, 0, 0, 0, 11, -11, 0, 0, 0, 0, 0, 0, 4, -15, 6, 11, -18, -2, -9, 1, 1, 6, -21, -11, 10, -5, 8, -10, -8, -6, -4, 5, 3, -8, -5, -2, -2, -7, 13, 3, -9, -4, -8, -6, -8, 4, -8, 3, -9, 4, -1, 9, -17, 2, -9, 3, 5, 12, -9, -6, -15, -2, -16, 13, 8, -1, -18, 7, -14, -13, -18, 14, 9, 12, -18, 7, 12, 5, 0, 0, 0, 0, 0, 0, 15, 9, 0, 0, 0, 0, 0, 0, 11, -5, 0, 0, 0, 0, 0, 0, 4, 4, 0, 0, 0, 0, 0, 0, 1, 6, 0, 0, 0, 0, 0, 0, 5, 9, 0, 0, 0, 0, 0, 0, 5, 9, 0, 0, 0, 0, 0, 0, -5, 24, 0, 0, 0, 0, 0, 0, 21, 10, -9, 7, 7, -12, 2, -9, -1, -2, 9, -14, -8, 3, 4, 0, 3, 7, -7, 6, 2, 14, -2, 6, -11, 13, -4, 12, -6, -11, -4, 8, -3, -4, -5, -7, 0, 0, -1, -5, 5, -4, 7, -4, 7, -4, -12, -3, 12, 14, -8, -9, -4, -3, -6, -10, 9, 8, 7, -9, 2, 1, -8, 8, -6, -5, 0, 0, 0, 0, 0, 0, 5, 8, 0, 0, 0, 0, 0, 0, -16, -10, 0, 0, 0, 0, 0, 0, 11, -19, 0, 0, 0, 0, 0, 0, 6, -7, 0, 0, 0, 0, 0, 0, -8, -6, 0, 0, 0, 0, 0, 0, 4, 8, 0, 0, 0, 0, 0, 0, -2, -16, 0, 0, 0, 0, 0, 0, 7, 0, 15, -4, -8, 7, 13, -11, 0, 4, 1, 6, -4, -2, -8, 7, 11, -6, -2, 15, -18, 7, 1, -7, -1, -2, 7, 2, 3, 7, 5, -8, 6, 22, 11, -4, -10, 8, -6, -11, 1, -6, 7, 24, -2, 13, -11, 0, 11, -10, 6, -14, -2, -15, -8, 11, 2, -4, 9, 19, -8, -11, 2, -1, 17, -14, 0, 0, 0, 0, 0, 0, -4, 7, 0, 0, 0, 0, 0, 0, 4, -5, 0, 0, 0, 0, 0, 0, -1, -3, 0, 0, 0, 0, 0, 0, -19, 2, 0, 0, 0, 0, 0, 0, -17, -2, 0, 0, 0, 0, 0, 0, -3, -4, 0, 0, 0, 0, 0, 0, 2, -5, 0, 0, 0, 0, 0, 0, -4, -13, 13, 21, -15, -7, -5, -5, -6, 11, -18, 8, 7, -1, -8, 9, -3, 9, 14, 3, -4, -6, 5, 11, -2, -9, -12, -2, 12, 3, 4, -6, 6, -5, -10, 1, -2, 10, -9, 10, 2, 1, 8, 13, -6, -14, -1, 1, 7, -3, -3, -3, -3, -3, -5, 7, -7, 8, -5, 14, 4, 11, 5, -4, 13, 0, 0, 0, 0, 0, 0, 0, -3, -2, 0, 0, 0, 0, 0, 0, -9, -13, 0, 0, 0, 0, 0, 0, 21, 19, 0, 0, 0, 0, 0, 0, -8, 7, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, -7, -8, 0, 0, 0, 0, 0, 0, 1, -2, -6, 3, -15, 10, -6, 11, 4, 2, 3, -8, 2, -4, 3, -4, -1, 9, 0, -6, 7, 4, -6, -13, -14, -5, -12, 22, 2, 21, -15, -14, -2, -6, 10, -3, -7, -10, 7, -8, 5, 0, 0, -7, 6, 0, -6, -5, 12, -2, -4, 15, -18, 9, -6, 4, -11, 1, -4, -6, 1, -25, 8, 6, -2, 20, 0, 0, 0, 0, 0, 0, -8, 0, 0, 0, 0, 0, 0, 0, 10, -17, 0, 0, 0, 0, 0, 0, -7, 4, 0, 0, 0, 0, 0, 0, -7, -5, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, -2, -1, 0, 0, 0, 0, 0, 0, 9, 13, 0, 0, 0, 0, 0, 0, -3, 3, -8, 3, -7, 9, -1, -11, 4, -3, 4, -2, -3, 2, -6, 15, 11, -8, 15, -5, -4, -5, 6, 5, 9, -7, -3, -11, 15, -2, -4, 15, -6, -7, -2, 7, 1, -6, -3, -3, -5, -17, 0, -5, -11, 15, 26, 10, 18, 10, 14, -5, -27, -14, -11, 16, -7, -2, -8, -4, 8, -9, -10, 2, 7, 1, 0, 0, 0, 0, 0, 0, -8, -14, 0, 0, 0, 0, 0, 0, -15, -3, 0, 0, 0, 0, 0, 0, -2, -18, 0, 0, 0, 0, 0, 0, 7, 6, 0, 0, 0, 0, 0, 0, 12, -13, 0, 0, 0, 0, 0, 0, 4, 2, 0, 0, 0, 0, 0, 0, -2, 14, 0, 0, 0, 0, 0, 0, -1, -7, 13, 20, -8, -12, -14, -4, 0, 3, -7, 14, 9, -6, 9, 0, -6, 5, -3, 3, 5, -1, 2, -7, -2, 6, -4, -4, 6, 3, -4, 3, -8, 4, -8, -14, 12, -2, 1, -5, 0, 7, -3, 2, 1, 8, -3, -5, 1, 14, -4, -21, 24, -17, 10, 6, -14, 12, 19, -13, 19, -21, -19, -5, 0, 15, 0, 0, 0, 0, 0, 0, -1, -14, 0, 0, 0, 0, 0, 0, 8, 4, 0, 0, 0, 0, 0, 0, 3, -5, 0, 0, 0, 0, 0, 0, 16, -9, 0, 0, 0, 0, 0, 0, -7, -15, 0, 0, 0, 0, 0, 0, -14, -1, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, -7, -6, -4, 7, -4, 4, -6, 10, 0, -2, -25, 5, 4, 7, 10, 8, 2, -3, 16, -6, -6, -6, -6, 11, -5, 10, 5, 11, -9, 8, 2, 6, 8, -9, -9, 5, -8, 10, 23, -19, 10, 4, 10, -18, -5, 2, -6, -10, 10, -1, -22, -7, -5, 15, 4, -7, -5, -12, 11, 0, 7, 18, 3, 10, 13, -18, 0, 0, 0, 0, 0, 0, -6, 7, 0, 0, 0, 0, 0, 0, 1, -6, 0, 0, 0, 0, 0, 0, -10, -10, 0, 0, 0, 0, 0, 0, 11, -12, 0, 0, 0, 0, 0, 0, 11, -4, 0, 0, 0, 0, 0, 0, 8, 1, 0, 0, 0, 0, 0, 0, -17, -4, 0, 0, 0, 0, 0, 0, -13, 0, 10, 19, -22, 1, -13, -1, -1, -9, -6, -15, 13, 24, -6, -9, 4, -6, 0, 3, 3, 9, -5, -2, -13, -7, 0, 14, 15, 1, -1, 1, 10, 1, -1, 5, 5, 10, -9, 11, 6, -2, -27, -7, -16, 13, 9, -6, -15, 9, 5, 3, 13, 11, 10, -7, 1, 16, -12, 9, 3, -6, 2, 15, 23, -5, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 9, 8, 0, 0, 0, 0, 0, 0, -4, 10, 0, 0, 0, 0, 0, 0, -9, -1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, -2, -28, 0, 0, 0, 0, 0, 0, -6, -11, 0, 0, 0, 0, 0, 0, 0, 20, -3, -12, 0, 17, -3, 3, 0, -9, -7, -17, 7, -16, -1, -4, 13, -15, 2, -8, -3, 2, -4, 2, -20, 3, 1, -8, -3, 12, -4, 9, -8, -4, -5, -6, 7, 5, 4, 10, -8, -2, -9, 9, 9, -4, 2, -14, -5, -5, 15, -12, -4, -3, -8, 2, 10, 9, -11, -9, -3, 1, 0, 0, -9, -5, 0, 0, 0, 0, 0, 0, 12, 17, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 0, 0, 0, 0, 6, 9, 0, 0, 0, 0, 0, 0, 8, -8, 0, 0, 0, 0, 0, 0, 5, -1, 0, 0, 0, 0, 0, 0, -8, 8, 0, 0, 0, 0, 0, 0, 3, -4, 0, 0, 0, 0, 0, 0, 9, 2, 13, -9, -5, 9, 1, 0, -7, 13, 11, 4, -9, -1, 7, -14, 10, -7, 17, 0, 2, -15, 6, -9, 17, -2, 16, -11, 5, 11, -9, -9, -5, -6, 2, 8, -4, -11, -7, 10, 3, -6, 12, 7, 0, 9, -2, -2, -8, 4, -3, 2, 15, -9, -9, -12, -3, -6, -1, -12, 11, 7, 5, -11, -18, -10, 0, 0, 0, 0, 0, 0, -4, -10, 0, 0, 0, 0, 0, 0, 13, -4, 0, 0, 0, 0, 0, 0, -2, -3, 0, 0, 0, 0, 0, 0, 10, -7, 0, 0, 0, 0, 0, 0, -17, -5, 0, 0, 0, 0, 0, 0, -7, 28, 0, 0, 0, 0, 0, 0, -9, -7, 0, 0, 0, 0, 0, 0, 0, 3, 13, 5, -8, -20, -2, 7, -9, 7, 2, -6, -6, 1, 18, 5, -5, -4, -4, -17, -18, 10, 31, -12, 12, -5, -13, 6, -12, 4, 2, 9, -17, -4, 16, 9, 10, -13, -8, 18, 13, -20, 3, 10, -12, 14, 2, -20, 2, 8, -6, -14, 2, -17, 7, 5, 2, 5, -6, -9, 2, -3, -8, 5, -7, 3, 0, 0, 0, 0, 0, 0, -14, -9, 0, 0, 0, 0, 0, 0, 9, -4, 0, 0, 0, 0, 0, 0, -10, -2, 0, 0, 0, 0, 0, 0, 11, -8, 0, 0, 0, 0, 0, 0, 19, 4, 0, 0, 0, 0, 0, 0, -11, 6, 0, 0, 0, 0, 0, 0, 6, -3, 0, 0, 0, 0, 0, 0, -3, 15, -17, -7, -11, 10, -9, 7, 3, 4, 7, -9, -4, -6, 2, -4, 0, 3, 6, 6, 2, -6, 1, -9, -13, 9, 5, -2, -13, -5, 0, -5, -7, 8, 1, 9, -10, 15, -3, -4, 7, 2, -8, -1, 17, -3, -12, 1, 11, 1, -8, 7, -1, -7, 3, -6, 2, 3, -6, -1, -11, -2, -4, 17, -10, 8, 0, 0, 0, 0, 0, 0, -16, 4, 0, 0, 0, 0, 0, 0, -6, 6, 0, 0, 0, 0, 0, 0, -2, 6, 0, 0, 0, 0, 0, 0, -7, -6, 0, 0, 0, 0, 0, 0, 1, 11, 0, 0, 0, 0, 0, 0, -22, -7, 0, 0, 0, 0, 0, 0, 1, -15, 0, 0, 0, 0, 0, 0, -1, 1, -1, 1, -4, -1, -6, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
