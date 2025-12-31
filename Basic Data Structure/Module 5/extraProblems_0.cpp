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

void insert_at_head(Node* &head, int val) {
    Node* newNode = new Node(val);
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node* &head, int val) {  
    Node* newNode = new Node(val);
    Node* temp = head;

    if(head == NULL) head = newNode;
    else {
        while(temp->next != NULL) temp = temp->next;
        temp->next = newNode;
    }
}

void insert_at_any_pos(Node* &head, int idx, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) head = newNode;
    else {
        Node* temp = head;
        int cnt = 0;
        while(temp->next != NULL && cnt != idx-1) temp = temp->next, cnt++;

        if(temp == NULL) cout << "Index not found";
        else {
            newNode->next = temp->next;
            temp->next = newNode;
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

int size_ll(Node* &head) {
    Node* temp = head;
    int cnt = 0;

    while(temp != NULL) cnt++, temp = temp->next;
    return cnt;
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

    insert_at_head(head, 87);
    cout << "Insert at head: ";
    print_ll(head);

    insert_at_any_pos(head, 2, 8);
    cout << "Insert at any pos: ";
    print_ll(head);

    insert_at_tail(head, 14);
    cout << "Insert at tail: ";
    print_ll(head);

    cout << "size of the list: ";
    cout << size_ll(head);

    return 0;
}