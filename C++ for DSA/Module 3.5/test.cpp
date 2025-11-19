#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin >> n;

    if(n >= 38) {
        if((n+1)%5 == 0) n++;
        else if((n+2)%5 == 0) n += 2;
    }

    cout << n << endl;
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