#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n = 30;  // tc -> O(1)

    for(int i = 1; i <= n; i *= 2)  // tc -> O(logn)
        cout << "Logn time" << endl;  // tc -> O(logn)

    for(int i = n; i > 0; i /= 2)  // tc -> O(logn)
        cout << "Logn time" << endl;  // tc -> O(logn)

    cout << endl;  // tc -> O(1)

    /*
        Total tc -> O(logn);
    */

    return 0;
}