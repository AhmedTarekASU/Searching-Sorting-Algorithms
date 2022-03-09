#ifndef ALGORITHMS_H
#define ALGORITHMS_H
#include "Algorithms.c"

int jumpSearch(int const *array, int const *arraySize, int const *RequiredElement);
void insertionSort(int *array, int const *arraySize);
void selectionSort(int *array, int const *arraySize);
int binarySearch(int *array, int const *arraySize, int const *requiredNumber);

#endif