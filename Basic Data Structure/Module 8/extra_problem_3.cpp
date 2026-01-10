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

bool check_palindrome(Node* head, Node* tail) {
    Node* temp1 = head;
    Node* temp2 = tail;
    while(temp1 != temp2) {
        if(temp1->val != temp2->val) return 0;

        temp1 = temp1->next;
        temp2 = temp2->prev;
    }
    return 1;
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

    check_palindrome(head, tail)? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}