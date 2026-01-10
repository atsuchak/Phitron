#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    list<int> ll = {10, 20, 30};
    list<int> ll2;

    // ll2 = ll;
    ll2.assign(ll.begin(), ll.end());
    for(int val : ll2) cout << val << " ";
    cout << endl;

    ll2.push_back(307);
    ll2.push_front(500);
    cout << "Push back/front: ";
    for(int val : ll2) cout << val << " ";
    cout << endl;

    ll2.pop_back();
    ll2.pop_front();
    cout << "Pop back/front: ";
    for(int val : ll2) cout << val << " ";
    cout << endl;

    cout << "Access any node from list: ";
    cout << *next(ll2.begin(), 2) << endl;  //get 2nd element of the list

    cout << "Insert at any pos: ";
    ll2.insert(next(ll2.begin(), 2), 100);  //insent 100 at index 2
    for(int val: ll2) cout << val << " ";
    cout << endl;

    list<int> temp = {400, 404, 408};
    cout << "Insert at any pos(multiple): ";
    ll2.insert(next(ll2.begin(), 2), temp.begin(), temp.end());  //insent temp list's element at index 2
    for(int val: ll2) cout << val << " ";
    cout << endl;

    cout << "Delete index 3: ";
    ll2.erase(next(ll2.begin(), 3));  //delete index 3's element;
    for(int val: ll2) cout << val << " ";
    cout << endl;

    cout << "Delete index 2 to 4: ";
    ll2.erase(next(ll2.begin(), 2), next(ll2.begin(), 5));  //delete index 2 to 6-1
    for(int val: ll2) cout << val << " ";
    cout << endl;

    ll2 = {10, 20, 10, 50, 10, 30, 10};
    cout << "Replace 10 to 99: ";
    replace(ll2.begin(), ll2.end(), 10, 99);
    for(int val: ll2) cout << val << " ";
    cout << endl;

    cout << "Find function: ";
    auto it = find(ll2.begin(), ll2.end(), 20);
    (it == ll2.end())? cout << "Not found" << endl : cout << "Found" << endl;

    return 0;
}