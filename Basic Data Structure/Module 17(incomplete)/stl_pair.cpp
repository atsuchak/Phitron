#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;

    vector<pair<int, int>> vec(n);
    for(int i = 0; i < n; i++) cin >> vec[i].first >> vec[i].second;
    
    for(int i = 0; i < n; i++) cout << vec[i].first << " " << vec[i].second << endl;

    return 0;
}