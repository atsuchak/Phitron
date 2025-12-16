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

    int cnt = 0;
    for(auto it : a) {
        auto fnd = find(a.begin(), a.end(), it+1);
        if(fnd != a.end()) cnt++;
    }

    cout << cnt << endl;

    return 0;
}