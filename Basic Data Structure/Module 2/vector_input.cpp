#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;

    vector<int> a(n);  //initialize with size
    for(auto &i : a) cin >> i;
    cout << "With initialized size: ";
    for(auto i : a) cout << i << " ";
    cout << endl;

    
    vector<int> v;  //initialize with size
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        v.push_back(x);
    }
    cout << "Without initialized size: ";
    for(auto i : v) cout << i << " ";
    cout << endl;

    return 0;
}