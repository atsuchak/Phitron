#include <bits/stdc++.h>
using namespace std;

class Node {
   
    public:
    int val;
    Node* next;
};

int main() {
#ifndef ONLINE_JUDGE
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    Node a, b, c;

    a.val = 5;
    b.val = 15;
    c.val = 22;

    cout << "Print using val:" << endl;
    cout << a.val << " " << b.val << " " << c.val << endl;

    a.next = &b;
    b.next = &c; 
    c.next = NULL;

    cout << "Print using node: " << endl;
    cout << (*a.next).val << " " << (*b.next).val << " " << (*c.next).val << endl;

    return 0;
}