#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n; cin >> n;

    int fibo[n+1];
    fibo[0] = 0;
    fibo[1] = 1;

    for(int i = 2; i <= n; i++) 
        fibo[i] = fibo[i-1] + fibo[i-2];
    
    cout << fibo[n] << endl;

    return 0;
}