#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    sort(a, a+n);
    for(int i = 0; i< n; i++) cout << a[i] << " ";
    cout << endl;

    sort(a, a+n, greater<int>());
    for(int i = 0; i< n; i++) cout << a[i] << " ";
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    int t_case = 1;
    // cin >> t_case;

    while (t_case--) {
        solve();
    }

    return 0;
}