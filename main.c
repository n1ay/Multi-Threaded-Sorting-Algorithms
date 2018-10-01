#include "utils.h"

int main() {
    srand((unsigned int) time(NULL));
    int* tab = init_tab(SIZE);
    print_tab(tab, SIZE);
    printf("Sorted: %d\n", check_sorted(tab, SIZE));

    free(tab);
    return 0;
}