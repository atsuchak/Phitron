#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    list<int> ll(10, 3);  //10 size list with value 3 in each node

    cout << "List size: " << ll.size() << endl;
    
    cout << "First val: " << *ll.begin() << endl;
    cout << "All val(iterator): ";
    for(auto it = ll.begin(); it != ll.end(); it++)  //using iterator 
        cout << *it << " ";
    cout << endl;

    cout << "All val(value): ";
    for(int val: ll)  //using value 
        cout << val << " ";
    cout << endl;

    list<int> ll2(ll);  //copy ll element to ll2  

    int arr[] = {10, 20, 30};
    list<int> ll_arr(arr, arr+3);  //copy array to linked list
    
    vector<int> vec = {10, 20, 30};
    list<int> ll_vec(vec.begin(), vec.end());  //copy vector to linked list

    ll2.resize(5);
    cout << "Resize to 5: ";
    for(int val: ll2) cout << val << " ";
    cout << endl;

    ll2.resize(15);
    cout << "Resize to 15: ";
    for(int val: ll2) cout << val << " ";
    cout << endl;
    
    ll2.clear();  //delete all element from the linked list
    cout << "List size(after clear): ";
    cout << ll2.size() << endl;

    return 0;
}