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

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    list<int> ll1, ll2;

    int val;
    while(1) {
        cin >> val;
        if(val == -1) break;

        ll1.push_back(val);
    }
    
    while(1) {
        cin >> val;
        if(val == -1) break;

        ll2.push_back(val);
    }

    (ll1 == ll2)? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}