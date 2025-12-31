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

void insert_at_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }else {
        tail->next = newNode;
        tail = newNode;
    }
}

void delete_at_head(Node* &head) {
    Node* store = head;

    head = head->next;
    delete store;
}

void print_ll(Node* &tmp) {
    if(tmp == NULL) return;

    cout << tmp->val << " ";
    print_ll(tmp->next);
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

    cout << "Before delete: ";
    print_ll(head);
    cout << endl;
    
    delete_at_head(head);

    cout << "After delete: ";
    print_ll(head);

    return 0;
}