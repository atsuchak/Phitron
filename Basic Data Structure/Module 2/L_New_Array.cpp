#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for(auto &i : a) cin >> i;
    for(auto &i : b) cin >> i;

    vector<int> c(b);
    for(auto it : c) cout << it << " ";
    
    c = a;
    for(auto it : c) cout << it << " ";

    return 0;
}