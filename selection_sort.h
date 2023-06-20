//
// Created by Nicolas Vaccari on 20/06/23.
//

#ifndef ALGO_SIMPLE_SELECTION_SORT_SELECTION_SORT_H
#define ALGO_SIMPLE_SELECTION_SORT_SELECTION_SORT_H

#include <stdio.h>

void sort(int *vec, int vec_size);

int min_element(int *vec, int vec_start, int vec_size);

/**
 * Prints a vector of integers to stdout
 * @param vec The vector to print
 * @param vec_size The size of the vector to print
 */
void print_vec(int *vec, int vec_size);

#endif //ALGO_SIMPLE_SELECTION_SORT_SELECTION_SORT_H
