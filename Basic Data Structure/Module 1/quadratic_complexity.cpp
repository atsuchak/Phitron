#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n, m; cin >> n >> m;  // tc -> O(1)

    for(int i = 0; i < n; i++)  // tc -> O(n)
        for(int j = 0; j < n; j++)  // tc -> O(n^2)
            cout << "Hello world" << endl;  // tc -> O(n^2)

    /*
        Total tc -> O(n^2)
    */

    cout << endl;

    for(int i = 0; i < n; i++)  // tc -> O(n)
        for(int j = 0; j < m; j++)  // tc -> O(nm)
            cout << "Hello world" << endl;  // tc -> O(nm)

    /*
        Total tc -> O(nm)
    */

    cout << endl;

    for(int i = 0; i < n; i++)  // tc -> O(n)
        for(int j = 0; j < n; j++)  // tc -> O(n^2)
            for(int k = 0; k < n; k++)  // tc -> O(n^3)
                cout << "Hello world" << endl;  // tc -> O(n^3)

    /*
        Total tc -> O(n^3)
    */

    return 0;
}