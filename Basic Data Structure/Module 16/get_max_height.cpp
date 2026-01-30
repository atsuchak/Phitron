#include <bits/stdc++.h>
using namespace std;

class Node {
    
    public: 
        int val;
        Node* left;
        Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_node() {
    int val; cin >> val;

    Node* root;
    val == -1? root = NULL : root = new Node(val);

    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()) {
        Node* tmp = q.front();
        q.pop();

        int l, r; cin >> l >> r;
        Node *lft, *rght;

        l == -1? lft = NULL : lft = new Node(l);
        r == -1? rght = NULL : rght = new Node(r);
        tmp->left = lft;
        tmp->right = rght;

        if(tmp->left) q.push(tmp->left);
        if(tmp->right) q.push(tmp->right);
    }

    return root;
}

int max_height(Node* root) {
    if(!root || (!root->left && !root->right)) return 0;

    int l = max_height(root->left);
    int r = max_height(root->right);

    return max(l, r) + 1;
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* root = input_node();

    cout << "Max heigth: " << max_height(root) << endl;

    return 0;
}