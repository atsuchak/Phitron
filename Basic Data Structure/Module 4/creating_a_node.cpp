#include <bits/stdc++.h>
using namespace std;

class Node {
    
public: 
    int val;
    Node* next;
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Node a, b, c;
    a.val = 4;
    b.val = 8;
    c.val = 3;

    a.next = &b;
    b.next = &c;
    c.next = NULL;
    
    cout << "a.val: " << a.val << endl;
    cout << "a.next val: " << a.next->val << endl;
    cout << "a.next.next val: " << a.next->next->val << endl;

    return 0;
}