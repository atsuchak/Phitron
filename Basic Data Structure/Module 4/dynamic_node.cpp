#include <bits/stdc++.h>
using namespace std;

class Node {
    
    public: 
        int val;
        Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* head = new Node(87);
    Node* a = new Node(34);

    head->next = a;

    cout << "Head value: " << head->val << endl;
    cout << "Head next value: " << head->next->val << endl;
    return 0;
}