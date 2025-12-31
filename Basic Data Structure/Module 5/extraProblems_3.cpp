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

int size_ll(Node* &head) {
    Node* temp = head;
    int cnt = 0;

    while(temp != NULL) cnt++, temp = temp->next;
    return cnt;
}

void print_mid_ev(Node* &head, int idx) {
    Node* temp = head;

    for(int i = 0; i < idx-1; i++) temp = temp->next;

    cout << temp->val << " " << temp->next->val;
}
void print_mid_odd(Node* &head, int idx) {
    Node* temp = head;

    for(int i = 0; i < idx; i++) temp = temp->next;

    cout << temp->val;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* head = new Node(2);  
    Node* a = new Node(1);  
    Node* b = new Node(5);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(8);
    // Node* f = new Node(9);
    
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    // e->next = f;

    int tmp = size_ll(head)/2;

    if(size_ll(head)%2 == 0) print_mid_ev(head, tmp);
    else print_mid_odd(head, tmp);

    

    return 0;
}