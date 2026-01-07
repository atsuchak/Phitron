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

void insert_head(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
}

void insert_tail(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }else {
        tail->next = newNode;
        tail = newNode;
    }
}

void del_any_pos(Node* &head, Node* &tail, int idx) {
    Node* temp = head;

    if(head == NULL) return;

    if(idx == 0) {
        Node* delNode = head;
        head = head->next;

        delete delNode;

        if(head == NULL) tail = NULL;
        return;
    }

    for(int i = 1; i < idx; i++) {
        if(temp == NULL ) break;
        temp = temp->next;
    }

    if(temp == NULL || temp->next == NULL) return;
    if(temp->next->next == NULL) {
        temp->next = NULL;
        tail = temp;
        return;
    }
    
    temp->next = temp->next->next;
    
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
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* head = NULL;
    Node* tail = NULL;

    int n; cin >> n; 
    while(n--) {
        int x, val; cin >> x >> val;

        if(x == 0) insert_head(head, tail, val);
        else if(x == 1) insert_tail(head, tail, val);
        else del_any_pos(head, tail, val);

        print_ll(head);
    }

    return 0;
}