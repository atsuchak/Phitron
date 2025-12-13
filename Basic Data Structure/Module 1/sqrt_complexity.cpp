#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n = 36;  // tc -> O(1)

    for(int i = 1; i <= sqrt(n); i++)  // tc -> O(sqrt(n))
        if(n%i == 0) cout << i << " " << n/i << " ";  // tc -> O(sqrt(n))

    cout << endl;  // tc -> O(1)

    for(int i = 1; i*i <= n; i++)  // tc -> O(sqrt(n))
        if(n%i == 0) cout << i << " " << n/i << " ";  // tc -> O(sqrt(n))

    /*
        Total tc -> O(sqrt(n))
    */

    return 0;
}