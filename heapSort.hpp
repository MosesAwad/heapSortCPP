#ifndef HEAPSORT_HPP
# define HEAPSORT_HPP

#include <iostream>
#include <cstdlib>
#include "treeNode.hpp"
#include "utils.hpp"

#define ARR_LEN 17

void    heapify(int* arr, const int& arrSpan, const int& index);
void    buildMaxHeap(int* arr, const int& arrSpan, const int& index = 0);
void    heapSort(int* arr);

#endif