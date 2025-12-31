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

int size_ll(Node* &head) {
    Node* temp = head;
    int cnt = 0;

    while(temp != NULL) cnt++, temp = temp->next;
    return cnt;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* head = new Node(2);  
    Node* a = new Node(1);  
    Node* b = new Node(5);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(8);
    Node* f = new Node(9);
    
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;

    cout << "size of the list: ";
    cout << size_ll(head);

    return 0;
}