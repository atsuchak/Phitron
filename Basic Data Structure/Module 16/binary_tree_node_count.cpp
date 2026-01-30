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

int count_node(Node* root) {
    if(!root) return 0;

    int l = count_node(root->left);
    int r = count_node(root->right);

    return l+r+1;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* root = input_node();

    cout << "Total node: " << count_node(root) << " ";

    return 0;
}