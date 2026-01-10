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

void insert_at_tail(Node* &head, Node* &tail, int val) {
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

void reverse_doubly_ll(Node* &head, Node* &tail, Node* temp) {
    for(Node* i = head, *j = tail; i < j; i = i->next, j = j->prev)
        swap(i->val, j->val);
}

void print_ll(Node* head) {
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

    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(1) {
        cin >> val;
        if(val == -1) break;

        insert_at_tail(head, tail, val);
    }

    reverse_doubly_ll(head, tail, head);
    print_ll(head);

    return 0;
}