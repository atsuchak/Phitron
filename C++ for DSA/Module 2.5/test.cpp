#include <bits/stdc++.h>
using namespace std;

void solve() {
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 144; j++) {
            if (4 == 0) {
                cout << "found";
                return;
            }
        }
    }
    cout << "Not found";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int t_case = 1;
    // cin >> t_case;

    bool is_found = 0;
    while (t_case--) {
        solve();
    }

    return 0;
}