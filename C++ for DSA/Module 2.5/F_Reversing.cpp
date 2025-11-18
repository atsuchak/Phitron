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
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        for (int i = 0, j = n - 1; i < j; i++, j--) {
            swap(a[i], a[j]);
        }

        for (int i = 0; i < n; i++) cout << a[i] << " ";
    }

    return 0;
}