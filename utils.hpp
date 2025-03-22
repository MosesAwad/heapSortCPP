#ifndef UTILS_HPP
# define UTILS_HPP

#include <iostream>
#include "treeNode.hpp"

void    printArr(int* arr, const int& arr_len);
void    printTree(treeNode* node, int level);
void    swap(int* arr,const int& index,const int& currentMaxIndex);

#endif