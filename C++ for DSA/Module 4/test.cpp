#include <bits/stdc++.h>
using namespace std;

void solve() {
    char ch[100001];

    while (cin.getline(ch, 100001)) {
        int len = strlen(ch);

        sort(ch, ch + len);
        for (int i = 0; i < len; i++)
            if (ch[i] != ' ') cout << ch[i];
        cout << endl;
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