#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n, m; cin >> n >> m;  // tc -> O(1)

    for(int i = 0; i < n; i++)  // tc -> O(n)
        for(int j = 1; j <= n; j *= 2)  // tc -> O(nlogn)
            cout << "Hello world" << endl;  // tc -> O(nlogn)

    /*
        Total tc -> O(nlogn)
    */

    return 0;
}