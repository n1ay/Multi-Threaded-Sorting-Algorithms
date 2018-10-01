//
// Created by kamil on 01.10.18.
//

#ifndef MULTI_THREADED_SORTING_ALGORITHMS_UTILS_H
#define MULTI_THREADED_SORTING_ALGORITHMS_UTILS_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <time.h>

#define SIZE 100

int* init_tab(size_t size);
void print_tab(int* tab, size_t size);
int check_sorted(int* tab, size_t size);

#endif //MULTI_THREADED_SORTING_ALGORITHMS_UTILS_H
