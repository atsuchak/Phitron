#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    vector<int> a = {1, 2, 3, 4, 5};
    
    vector<int> v;
    v = a;  //copy a to v
    cout << "Before pop back: ";
    for(int i : v) cout << i << " ";
    cout << endl;

    v.pop_back();  //remove value from vector's last
    cout << "After pop back: ";
    for(int i : v) cout << i << " ";
    cout << endl;

    v.push_back(100);  //add value to vector's last
    cout << "After push back: ";
    for(int i : v) cout << i << " ";
    cout << endl;

    v.insert(v.begin()+2, 500);  //insert value at index 2
    cout << "After insert: ";
    for(int i : v) cout << i << " ";
    cout << endl;

    vector<int> tmp = {99, 98, 97};
    v.insert(v.begin()+3, tmp.begin(), tmp.end());  //insert multiple values index 3
    cout << "Insert multiple: ";
    for(int i : v) cout << i << " ";
    cout << endl;

    v.erase(v.begin()+2);  //erase value from index 2
    cout << "After erase: ";
    for(int i : v) cout << i << " ";
    cout << endl;

    v.erase(v.begin()+2, v.end()-1);  //erase multiple values from index 2
    cout << "Erase multiple: ";
    for(int i : v) cout << i << " ";
    cout << endl;

    v.push_back(7);
    v.insert(v.begin(), 7);
    v.push_back(7);

    cout << "Before replace: ";
    for(int i : v) cout << i << " ";
    cout << endl;

    replace(v.begin(), v.end(), 7, 0);  //replace value from index 0
    cout << "After replace: ";
    for(int i : v) cout << i << " ";
    cout << endl;

    auto it = find(v.begin(), v.end(), 100);
    if(it == v.end()) cout << "Not found" << endl;
    else cout << "Found" << endl;


    return 0;
}