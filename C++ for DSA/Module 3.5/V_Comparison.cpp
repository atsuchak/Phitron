#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    char ch;
    cin >> a >> ch >> b;

    if ((a > b && ch == '>') || (a < b && ch == '<') || (a == b && ch == '='))
        cout << "Right" << endl;
    else
        cout << "Wrong" << endl;
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