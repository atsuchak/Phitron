#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    // vector<int> a;  //initialize without size
    // vector<int> a(5);  //inititalize with size
    // vector<int> a(5, -1);  //inititalize with -1
    // vector<int> v(a);  //copy vector a to vector v

    // int a[5] = {1, 2, 3, 4, 5};  //inititalize with -1
    // vector<int> v(a, a+5);  //copy array a to vector v

    vector<int> v = {1, 2, 3, 4, 5, 6};

    cout << "Size: " << v.size() << endl;
    for(int i : v) cout << i << " ";
    cout << endl; 

    return 0;
}