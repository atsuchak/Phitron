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
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* head = new Node(5);   
    Node* a = new Node(13);   
    Node* b = new Node(3);   
    Node* c = new Node(37);   

    head->next = a;
    a->next = b;
    b->next = c;

    insert_at_any_pos(head, 2, 144);
    insert_at_any_pos(head, 4, 44);

    print_ll(head);

    return 0;
}