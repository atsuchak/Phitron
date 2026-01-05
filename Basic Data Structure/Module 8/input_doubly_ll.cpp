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

Node* head = NULL;
Node* tail = NULL;

void insert_ll(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
     
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    newNode->next = head;
    head->prev = newNode;

    head = newNode;
}

void insert_ll_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
     
    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;

    tail = newNode;
}

void print_ll(Node* &head) {
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

    int val;
    while(1) {
        cin >> val;
        if(val == -1) break;

        insert_ll(head, tail, val);
        // insert_ll_tail(head, tail, val);
    }

    print_ll(head);

    return 0;
}