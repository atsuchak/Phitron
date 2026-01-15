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

class myQueue {
    
    public: 
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0; 

    void push(int val) {  //O(1)
        sz++;
        Node* newNode = new Node(val);

        if(head == NULL) {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;
    }

    void pop() {  //O(1)
        sz--;
        head = head->next;
        
        if(head == NULL) tail = NULL;
    }

    int front() {  //O(1)
        return head->val;
    }
    
    int back() {  //O(1)
        return tail->val;
    }

    int size() {
        return sz;
    }

    bool empty() {
        return head == NULL;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    

    return 0;
}