#include "treeNode.hpp"

treeNode::treeNode(int& value, treeNode* left, treeNode* right)
{
    this->value = value;
    this->left = left;
    this->right = right;
}

treeNode* treeNode::buildTree(const int& i, int *arr, const int& arr_len) {
    if (i >= arr_len) {
        return NULL;
    }
    treeNode* left = buildTree(2 * i + 1, arr, arr_len);
    treeNode* right = buildTree(2 * i + 2, arr, arr_len);
    
    treeNode* newNode;
    newNode = new treeNode(arr[i], left, right);

    return newNode;
};

int& treeNode::getValue() {
    return (this->value);
}

treeNode* treeNode::getLeftBranch() {
    return (this->left);
}

treeNode* treeNode::getRightBranch() {
    return (this->right);
}

void treeNode::setValue(int& value) {
    this->value = value;
}
