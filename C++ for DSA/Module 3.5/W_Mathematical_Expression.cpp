#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    char oparetor, equal;
    cin >> a >> oparetor >> b >> equal >> c;

    if (oparetor == '+') {
        if (a + b == c)
            cout << "Yes" << endl;
        else
            cout << a + b << endl;
    } else if (oparetor == '-') {
        if (a - b == c)
            cout << "Yes" << endl;
        else
            cout << a - b << endl;
    } else if (oparetor == '*') {
        if (a * b == c)
            cout << "Yes" << endl;
        else
            cout << a * b << endl;
    }
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