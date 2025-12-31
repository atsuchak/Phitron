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

void insert_at_tail(Node* &head, int val) {
    Node* newNode = new Node(val);
    Node* temp = head;

    if(head == NULL) head = newNode;
    else {
        while(temp->next != NULL) temp = temp->next;
        temp->next = newNode;
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
    
    head->next = a;
    a->next = b;

    insert_at_tail(head, 14);
    insert_at_tail(head, 17);

    print_ll(head);

    return 0;
}