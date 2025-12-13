#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n;  //sc -> O(1)
    int sum = 0;  //sc -> O(1)

    for(int i = 0; i < n; i++)  //sc -> O(1)
        cout << i << endl;

    int a[n];  //sc -> O(n)
    int b[n][n];  //sc -> O(n^2)

    for(int i = 0; i < n; i++)
        cin >> a[i];  //sc -> O(n)

    return 0;
}