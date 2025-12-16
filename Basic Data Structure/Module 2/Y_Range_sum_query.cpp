#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    int n, q; cin >> n >> q;

    vector<int> a(n);
    for(auto &it : a) cin >> it;

    vector<int> x(q);
    vector<int> y(q);
    for(int i = 0; i < q; i++) cin >> x[i] >> y[i];

    for(int i = 0, j = 0; i < n; i++) {
        auto fnd = find(a.begin(), a.end(), x[j]);
        if(fnd != a.end())
    }

    return 0;
}