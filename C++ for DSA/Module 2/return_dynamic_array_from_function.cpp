#include <bits/stdc++.h>
using namespace std;

int* func() {
    int* a = new int[5];  // dynamic array

    for (int i = 0; i < 5; i++)
        cin >> a[i];

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
        int* a = func();

        for (int i = 0; i < 5; i++)
            cout << a[i] << " ";
    }

    return 0;
}