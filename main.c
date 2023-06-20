//
// Created by Nicolas Vaccari on 20/06/23.
//
#include <stdio.h>

#include "selection_sort.h"

int main(int argc, char *argv[]) {
    int vec[] = {15, 14, 13, 12, 11};
    int vec_size = sizeof(vec) / sizeof(int);

    printf("Printing unordered vector: ");
    print_vec(vec, vec_size);
    printf("\n");

    sort(&vec, vec_size);

    printf("Printing ordered vector: ");
    print_vec(vec, vec_size);
    printf("\n");
}