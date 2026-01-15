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
        this->prev= NULL;
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
        newNode->prev = tail;

        tail = newNode;
    }

    void pop() {  //O(1)
        sz--;
        head = head->next;

        if(head == NULL) {
            tail = NULL;
            return;
        }
        head->prev = NULL;
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

    myQueue qu;

    int n; cin >> n;
    while(n--) {
        int x; cin >> x;
        qu.push(x);
    }

    cout << "Queue front: " << qu.front() << endl; 
    cout << "Queue back: " << qu.back() << endl; 
    cout << "Queue size: " << qu.size() << endl; 

    cout << "Queue: " << endl;
    while(!qu.empty()) {
        cout << qu.front() << " ";
        qu.pop(); 
    }

    return 0;
}