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

void print_ll(Node* head) {
    Node* temp = head;

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_rev(Node* tail) {
    Node* temp = tail; 

    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int ll_size(Node* head) {
    Node* temp = head;

    int cnt = 0;
    while(temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void insert_at_head(Node* &head, Node* &tail, int idx, int val) {
    Node* newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;

        head = newNode;
    }
    print_ll(head);
    print_rev(tail);
}

void insert_at_tail(Node* &head, Node* &tail, int idx, int val) {
    Node* newNode = new Node(val);
    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }else {
        tail->next = newNode;
        newNode->prev = tail;

        tail = newNode;
    }
    print_ll(head);
    print_rev(tail);
}

void insert_at_any(Node* &head, Node* &tail, int idx, int val) {
    Node* newNode = new Node(val);
    
    if(idx == 0) insert_at_head(head, tail, idx, val);
    else if(idx == ll_size(head)) insert_at_tail(head, tail, idx, val);
    else if(idx > ll_size(head)) cout << "Invalid" << endl;
    else {
        Node* temp = head;
        for(int i = 1; i < idx; i++) temp = temp->next;

        newNode->next = temp->next;
        temp->next->prev = newNode;

        temp->next = newNode;
        newNode->prev = temp;
        
        print_ll(head);
        print_rev(tail);
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* head = NULL;
    Node* tail = NULL;

    int n; cin >> n;

    while(n--) {
        int idx, val;
        cin >> idx >> val;

        insert_at_any(head, tail, idx, val);

    }

    return 0;
}