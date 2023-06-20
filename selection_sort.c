//
// Created by Nicolas Vaccari on 20/06/23.
//

#include "selection_sort.h"

void sort(int *vec, int vec_size) {

    // We do vec_size -1 because the last element at the end of the process
    // will be the biggest number available
    for(int vec_start = 0; vec_start < vec_size - 1; vec_start++) {
        int minimum_element_index = vec_start;

        // Select the minimum element value present in the vector
        for (int j = vec_start; j < vec_size; j++) {
            if (vec[j] < vec[minimum_element_index]) {
                minimum_element_index = j;
            }
        }

        // Swap the minimum element with the vec_start
        int minimum_element = vec[minimum_element_index];
        vec[minimum_element_index] = vec[vec_start];
        vec[vec_start] = minimum_element;

        vec_start++;
    }
}

void print_vec(int *vec, int vec_size) {
    for (int i = 0; i < vec_size; i++) {
        // Print the number
        printf("%d ", vec[i]);

        // Go to a new line every 50 characters
        if (i % 50 == 0 && i != 0) {
            printf("\n");
        }
    }

    printf("\n");
}