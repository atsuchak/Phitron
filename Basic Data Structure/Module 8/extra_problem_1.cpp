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

void print_ll(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

bool comp(Node* head1, Node* head2) {
    Node* temp1 = head1;
    Node* temp2 = head2;

    while(temp1 != NULL) {
        if(temp1->val != temp2->val) return 0;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if(temp2 != NULL) return 0;
    return 1;
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* head1 = NULL;
    Node* tail1 = NULL;
    
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val1, val2;
    while(1) {
        cin >> val1;
        if(val1 == -1) break;

        insert_at_tail(head1, tail1, val1);
    }

    while(1) {
        cin >> val2;
        if(val2 == -1) break;

        insert_at_tail(head2, tail2, val2);
    }

    comp(head1, head2)? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}