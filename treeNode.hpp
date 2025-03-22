#ifndef TREENODE_HPP
# define TREENODE_HPP

#include <cstdlib>

class treeNode {
    private:
        int value;
        treeNode* left;
        treeNode* right;
    public:
        treeNode(int& value, treeNode* left = NULL, treeNode* right = NULL);        
        int& getValue();
        treeNode* getLeftBranch();
        treeNode* getRightBranch();
        
        void setValue(int& value);

        static treeNode* buildTree(const int& i, int *arr, const int& arr_len);
};

#endif