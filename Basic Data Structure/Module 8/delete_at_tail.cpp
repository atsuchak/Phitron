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

void delete_at_tail(Node* &head, Node* &tail) {
    Node* delNode = tail;
    
    tail = tail->prev;
    delete delNode;
    
    if(tail == NULL) {
        head = NULL;
        return;
    }
    tail->next = NULL;
}

void print_forward(Node* &head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
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
    Node* b = new Node(10);

    head->next = a;
    a->prev = head; 

    a->next = b; 
    b->prev = a;
    
    delete_at_tail(head, b);

    print_forward(head);

    return 0;
}