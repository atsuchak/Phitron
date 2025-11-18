#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);

    int t_case = 1;
    // cin >> t_case;

    while (t_case--) {
        int a, b, c;
        cin >> a >> b >> c;

        cout << min(min(a, b), c) << " " << max(max(a, b), c);
    }

    return 0;
}