#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;
    cin.ignore();

    vector<string> v(n);
    for(int i = 0; i < n; i++) {
        getline(cin, v[i]);
    }

    for(auto it : v) cout << it << endl;

    return 0;
}