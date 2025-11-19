#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0, j = n - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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