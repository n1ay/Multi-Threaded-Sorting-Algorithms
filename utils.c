//
// Created by kamil on 01.10.18.
//

#include "utils.h"

int* init_tab(size_t size) {
    int* tab = malloc(size*sizeof(int));
    for (int i = 0; i < size; i++) {
        tab[i] = rand() % (int) size;
    }

    return tab;
}

int check_sorted(int* tab, size_t size) {
    for (int i = 0; i < size - 1; i++) {
        if (tab[i + 1] < tab[i])
            return 0;
    }
    return 1;
}

void print_tab(int* tab, size_t size) {
    for (int i = 0; i < size; i++)
        printf("%d\n", tab[i]);
}