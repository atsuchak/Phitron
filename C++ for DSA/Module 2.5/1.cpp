#include <bits/stdc++.h>
using namespace std;

int* get_array(int n) {
    int* a = new int[n];
    for (int i = 0; i < n; i++) cin >> a[i];

    return a;
}

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

        int* a = get_array(n);

        for (int i = 0; i < n; i++) cout << a[i] << " ";
    }

    return 0;
}