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

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* head = new Node(50);
    Node* a = new Node(90);
    Node* b = new Node(30);
    Node* c = new Node(70);
    Node* d = new Node(10);

    head->next =  a;
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = b; 

    Node* slow = head;
    Node* fast = head;

    bool flag = 0;
    while(fast !=  NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;

        if(slow == fast) {
            flag = 1;
            break;
        }

    }

    flag? cout << "Cycle detected" << endl : cout << "Cycle not detected" << endl;

    return 0;
}