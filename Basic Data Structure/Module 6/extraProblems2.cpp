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

void print_reverse(Node* &head) {
    Node* temp = head;
    if(temp == NULL) return;

    print_reverse(temp->next);
    cout << temp->val << " ";
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

        if(val == -1) break;;

        insert_node(head, tail, val);
    }

    print_reverse(head);

    return 0;
}