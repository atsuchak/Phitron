#include <bits/stdc++.h>
using namespace std;

class Node {
    
    public: 
        int val;
        Node* next;
        Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }

    cout << endl;
}

void print_backward(Node* &tail) {
    Node* temp = tail;

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }

    cout << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* head = new Node(20);
    Node* a = new Node(80);
    Node* tail = new Node(10);

    head->next = a;
    a->prev = head; 

    a->next = tail; 
    tail->prev = a;

    print_forward(head);
    print_backward(tail);

    return 0;
}