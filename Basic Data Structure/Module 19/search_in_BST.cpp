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

Node* binary_input() {
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

bool search(Node* root, int val) {
    if(!root) return 0;
    if(root->val == val) return 1;

    return (root->val > val)? search(root->left, val) : search(root->right, val);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* root = binary_input();

    int val; cin >> val;
    search(root, val)? cout << "Paisi" << endl : cout << "Pai nai" << endl;

    return 0;
}