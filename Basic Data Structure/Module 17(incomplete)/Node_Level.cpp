// Problem link: https://www.naukri.com/code360/problems/node-level_920383

#include <bits/stdc++.h>
using namespace std;

#include <bits/stdc++.h>

template <typename T>
class TreeNode {
   public:
    T val;
    bool isOriginal;
    TreeNode<T>* left;
    TreeNode<T>* right;

    TreeNode(T val) {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

int nodeLevel(TreeNode<int>* root, int searchedValue) {
    queue<pair<TreeNode<int>*, int>> q;
    if(root) q.push(make_pair(root, 1));

    while(!q.empty()) {
        pair<TreeNode<int>*, int> parent = q.front();
        q.pop();  
        
        TreeNode<int>* node = parent.first;
        int level = parent.second;

        if(node->val == searchedValue) return level;

        if(node->left) q.push(make_pair(node->left, level+1));
        if(node->right) q.push(make_pair(node->right, level+1));
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    // main code

    return 0;
}