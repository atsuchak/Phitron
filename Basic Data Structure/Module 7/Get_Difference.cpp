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

void insert_node(Node* &head, Node* &tail, int val) {
    Node* newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        tail = newNode;
    }else {
        tail->next = newNode;
        tail = newNode;
    }
}

int mx_val(Node* &head) {
    Node* temp = head;

    int mx = INT_MIN;
    while(temp != NULL) {
        if(temp->val > mx) mx = temp->val;
        temp = temp->next;
    }

    return mx;
}

int mn_val(Node* &head) {
    Node* temp = head;

    int mn = INT_MAX;
    while(temp != NULL) {
        if(temp->val < mn) mn = temp->val;
        temp = temp->next;
    }

    return mn;
}

int main() {
#ifndef ONLINE_JUDGE
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(1) {
        cin >> val;
        if(val == -1) break;

        insert_node(head, tail, val);
    }

    cout << mx_val(head) - mn_val(head) << endl;

    return 0;
}