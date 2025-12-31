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

int ll_size(Node* head) {
    Node* temp = head;

    int cnt = 0;
    while(temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    
    return cnt;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Node* head = NULL;
    Node* tail = NULL;

    int ll1, ll2;
    while(1) {
        cin >> ll1;
        if(ll1 == -1) break;

        insert_tail(head, tail, ll1);
    }

    int sz1 = ll_size(head);
    head = NULL;
    tail = NULL;
    
    while (1) {
        cin >> ll2;
        if(ll2 == -1) break;

        insert_tail(head, tail, ll2);
    }

    int sz2 = ll_size(head);

    if(sz1 == sz2) cout << "YES" << endl;
    else cout << "NO" << endl;
    



    return 0;
}