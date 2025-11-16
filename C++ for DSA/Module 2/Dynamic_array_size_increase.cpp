#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);

    int t_case = 1;  // cin >> t_case;

    while (t_case--) {
        int* a = new int[3];

        for (int i = 0; i < 3; i++) cin >> a[i];

        int* b = new int[5];
        for (int i = 0; i < 3; i++)
            b[i] = a[i];

        b[3] = 40;
        b[4] = 50;

        delete[] a;  //delete array a

        for (int i = 0; i < 5; i++) cout << b[i] << " ";
    }

    return 0;
}