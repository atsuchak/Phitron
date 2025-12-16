#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;

    vector<int> a(n);
    for(auto &it : a) cin >> it;

    reverse(a.begin(), a.end());
    for(auto it : a) cout << it << " ";

    return 0;
}