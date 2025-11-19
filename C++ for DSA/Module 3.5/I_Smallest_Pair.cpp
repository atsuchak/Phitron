#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int mn = INT_MAX;
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            mn = min((a[i]+a[j]+j-i), mn);
        }
    }

    cout << mn << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    int t_case = 1;
    cin >> t_case;

    while (t_case--) {
        solve();
    }

    return 0;
}