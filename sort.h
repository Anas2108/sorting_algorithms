#ifndef SORT_H
#define SORT_H


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void print_array(const int *array, size_t size);
void bubble_sort(int *array, size_t size);
void swap(int *num1, int *num2);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);


#endif
