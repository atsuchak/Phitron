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

void insert_at_any_pos(Node* &head, Node* &tail, int val, int idx) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    }

    Node* temp = head;
    for(int i = 0; i < idx-1; i++) temp = temp->next;

    if(temp != NULL) {
        newNode->next = temp->next;
        temp->next->prev = newNode;

        temp->next = newNode;
        newNode->prev = temp;

    }else cout << "Position out of bound" << endl;
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

    head->next = a;
    a->prev = head;

    a->next = b; 
    b->prev = a;

    insert_at_any_pos(head, b, 89, 1);
    insert_at_any_pos(head, b, 8, 3);

    print_ll(head);

    return 0;
}