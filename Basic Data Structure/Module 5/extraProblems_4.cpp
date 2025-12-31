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

bool check(Node* &head) {
    Node* prev = head;

    while(prev != NULL) {
        Node* curr = prev->next;

        while(curr != NULL){
            if(curr->val < prev->val) return 1;
            curr = curr->next;
        }
        prev = prev->next;
    }
    return 0;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* head = new Node(5);  
    Node* a = new Node(6);  
    Node* b = new Node(8);
    Node* c = new Node(16);
    Node* d = new Node(17);
    Node* e = new Node(100);
    
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    if(check(head)) cout << "NO" << endl;
    else cout << "YES" << endl;

    return 0;
}