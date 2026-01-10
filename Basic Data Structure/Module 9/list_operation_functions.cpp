#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    list<int> ll = {20, 30, 10, 50, 20, 40};

    cout << "Before sort: ";
    for(int val: ll) cout << val << " ";
    cout << endl;

    ll.sort();
    cout << "After sort(Ascending): ";
    for(int val : ll) cout << val << " ";
    cout << endl;

    ll.sort(greater<int>());
    cout << "After sort(Decending): ";
    for(int val : ll) cout << val << " ";
    cout << endl;

    ll.unique();  //only work when the linked list is sorted
    cout << "Unique node: ";
    for(int val: ll) cout << val << " ";
    cout << endl;

    ll.reverse();
    cout << "Reverse linked list: ";
    for(int val : ll) cout << val << " ";
    cout << endl;

    cout << "Linked list head: " << ll.front() << endl;
    cout << "Linked list tail: " << ll.back() << endl;
    cout << "Linked list tail: " << *next(ll.begin(), 2) << endl;  //index 2 value

    return 0;
}