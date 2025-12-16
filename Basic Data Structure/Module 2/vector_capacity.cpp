#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    vector<int> a;
    cout << "Capacity: " << a.capacity() << endl;
    a.push_back(5);
    cout << "Capacity: " << a.capacity() << endl;
    a.push_back(1);
    a.push_back(7);
    cout << "Capacity: " << a.capacity() << endl;

    cout << "Before resize: ";
    for(int i : a) cout << i << " ";
    cout << endl;

    a.resize(5, 0);
    cout << "After resize: ";
    for(int i : a) cout << i << " ";
    cout << endl;

    cout << "Before clear: " << a.size() << endl;
    a.clear();  //Just clear the size, not delete the value
    cout << "After clear: " << a.size() << endl;

    

    return 0;
}