#include "utils.hpp"

void    printArr(int* arr, const int& arr_len)
{
    std::cout << "[";
    for (int i = 0; i < arr_len; i++) {
        std::cout << arr[i];
        if (i < arr_len - 1) {
            std::cout << ", ";
        }
    }
    std::cout << "]" << std::endl;
}

void    printTree(treeNode* node, int level) {
    if (!node)
        return ;

    printTree(node->getLeftBranch(), level + 1);
    std::string padding = "\t";
    int i = 0;
    while (i < level) {
        std::cout << padding;
        i++;
    }
    std::cout << node->getValue() << std::endl;
    printTree(node->getRightBranch(), level + 1);
}

void    swap(int* arr,const int& index,const int& currentMaxIndex)
{
    int temp = arr[index];
    arr[index] = arr[currentMaxIndex];
    arr[currentMaxIndex] = temp;
}
