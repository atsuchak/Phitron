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

void delete_at_any_pos(Node* &head, int idx) {
    Node* temp = head;

    for(int i = 1; i < idx; i++) temp = temp->next;

    Node* delNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;

    delete delNode;
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

    Node* head = new Node(5);
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(7);

    head->next = a;
    a->prev = head;

    a->next = b; 
    b->prev = a;

    b->next = c;
    c->prev = b;

    delete_at_any_pos(head, 2);

    print_ll(head);

    return 0;
}