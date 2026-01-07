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

void del_dup(Node* &head) {
    Node* temp = head;

    for(Node* i = temp; i != NULL; i = i->next) {
        for(Node* j = i; j->next != NULL; ) {
            if(i->val == j->next->val) {
                Node* del = j->next;
                j->next = j->next->next;
                
                delete del;
            }
            else j = j->next;
        }
    }
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

    int val;
    while(1) {
        cin >> val;
        if(val == -1) break;

        insert_node(head, tail, val);
    }

    del_dup(head);
    print_ll(head);

    return 0;
}