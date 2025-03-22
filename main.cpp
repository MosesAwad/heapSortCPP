
#include "heapSort.hpp"

int main(int argc, char *argv[]) {
    if (argc != ARR_LEN + 1) {
        std::cout << "please input only " << ARR_LEN << " numbers" << std::endl;
        return (1);
    }
    int i = 0;
    int arr[ARR_LEN];
    while (argv[i + 1] != NULL) {
        arr[i] = atoi(argv[i + 1]); 
        i++;
    }

    for (int i = 0; i < ARR_LEN; i++) {
        std::cout << arr[i] << ", ";
    }
    std::cout << std::endl;

    // // Build Tree
    // treeNode* tree = treeNode::buildTree(0, arr, ARR_LEN);
    // if (!tree) {
    //     std::cout << "FAIL" << std::endl;
    // }
    // printTree(tree, 0);

    heapSort(arr);
    printArr(arr, ARR_LEN);
}

/*
    STEPS

        Step 1: Build Tree

        Step 2 (On tree and array): Build max heap (parent > child so by default would push the max value to the root of the tree)

        Step 3 (On tree and array): Swap with the root of the tree (now index 0 on array) with the last unordered item in the array 
                                    (delete the last item now ordered from the tree).

        Step 4: Shrink the array (vis-a-vis sending arrSpan to the heapify function; if you notice we are passing 'i' as the argument to 
                arrSpan and not full ARR_LEN), now we are back to having an unordered tree NOT A HEAP, because of the swap we made earlier. 
                We now pushed the last unoredered item to the front of the array. So now, that new root is not necessarily larger than the 
                child. Thus we now call heapify. 
*/