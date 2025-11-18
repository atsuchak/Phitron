#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);

    int t_case = 1;
    // cin >> t_case;

    while (t_case--) {
        int n;
        cin >> n;

        int* a = new int[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        int k;
        cin >> k;

        int* b = new int[k];
        for (int i = 0; i < n; i++) b[i] = a[i];

        for (int i = n; i < k; i++) cin >> b[i];

        delete a;
        for (int i = 0; i < k; i++) cout << b[i] << " ";
    }

    return 0;
}