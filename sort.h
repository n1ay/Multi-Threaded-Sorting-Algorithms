//
// Created by kamil on 01.10.18.
//

#ifndef MULTI_THREADED_SORTING_ALGORITHMS_SORT_H
#define MULTI_THREADED_SORTING_ALGORITHMS_SORT_H

#include <stdlib.h>

void quick_sort(int* tab, size_t size);
void mth_quick_sort(int* tab, size_t size, int max_threads);

void merge_sort(int* tab, size_t size);
void mth_merge_sort(int* tab, size_t size, int max_threads);

#endif //MULTI_THREADED_SORTING_ALGORITHMS_SORT_H
