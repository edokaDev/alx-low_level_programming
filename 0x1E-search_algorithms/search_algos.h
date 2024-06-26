#ifndef SEARCH_H
#define SEARCH_H
#include <stdlib.h>
#include <stddef.h>

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int print_array(int *array, size_t size);
int jump_search(int *array, size_t size, int value);

#endif /*SEARCH_H*/
