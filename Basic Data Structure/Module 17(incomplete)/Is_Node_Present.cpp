// Problem link: https://www.naukri.com/code360/problems/code-find-a-node_5682

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode {
   public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

bool isNodePresent(BinaryTreeNode<int>* root, int x) {
    if(root == NULL) return 0;
    if(root->data == x) return 1;

    bool l = isNodePresent(root->left, x);
    bool r = isNodePresent(root->right, x);

    return l || r;
    return 0; 
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    // main code

    return 0;
}