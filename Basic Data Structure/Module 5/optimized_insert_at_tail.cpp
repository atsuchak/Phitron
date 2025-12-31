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

void opt_insert_at_tail(Node* &head, Node* &tail, int val) {  // TC -> O(1)
    Node* newNode = new Node(val);
    Node* temp = head;

    if(head == NULL) head = newNode;
    else {
        tail->next = newNode,
        tail = tail->next;
    }
}

void print_ll(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* head = new Node(5);  
    Node* a = new Node(1);  
    Node* b = new Node(6);
    Node* tail = b;
    
    head->next = a;
    a->next = tail;
    // b->next = tail;

    opt_insert_at_tail(head, tail, 14);
    opt_insert_at_tail(head, tail, 17);

    print_ll(head);

    return 0;
}