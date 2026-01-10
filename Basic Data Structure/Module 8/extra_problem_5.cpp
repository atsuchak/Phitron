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

void sort_ll(Node* &head, Node* &tail) {

    for(Node* i = head; i != tail->prev; i = i->next) {
        for(Node* j = i->next; j != NULL; j = j->next) {
            if(i->val > j->val) swap(i->val, j->val);
        }
    }
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

    sort_ll(head, tail);
    print_ll(head);

    return 0;
}