
#include "heapSort.hpp"

void    heapify(int* arr, const int& arrSpan, const int& index)
{
    int leftInd = 2 * index + 1;
    int rightInd = 2 * index + 2;

    int currentMaxIndex = index;
    if (leftInd < arrSpan && arr[leftInd] > arr[currentMaxIndex]) {
        currentMaxIndex = leftInd;
    }
    if (rightInd < arrSpan && arr[rightInd] > arr[currentMaxIndex]) {
        currentMaxIndex = rightInd;
    }
    if (currentMaxIndex != index) {
        swap(arr, index, currentMaxIndex);
        heapify(arr, arrSpan, currentMaxIndex);
    }
}

void    buildMaxHeap(int* arr, const int& arrSpan, const int& index)
{
    if (index < (arrSpan / 2)) {
        buildMaxHeap(arr, arrSpan, index + 1);
    }
    heapify(arr, arrSpan, index);
}

void    heapSort(int* arr)
{
    buildMaxHeap(arr, ARR_LEN);

    for (int i = ARR_LEN - 1; i > 0; i--) {
        swap(arr, 0, i);
        heapify(arr, i ,0);
    }
}
