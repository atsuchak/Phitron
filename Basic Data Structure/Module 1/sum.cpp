#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;

    int sum = 0;

    // //using loop // tc -> O(n)
    // for(int i = 1; i <= n; i++) sum += i;


    //using formula // tc -> O(1)
    sum = n*(n+1)/2;
    cout << sum << endl;

    return 0;
}