#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    long long n, q; cin >> n >> q;

    vector<long long> a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    vector<long long> prefix(n+1);
    prefix[1] = a[1];
    for(int i = 2; i <= n; i++) prefix[i] = prefix[i-1] + a[i]; 

    while(q--) {
        long long l, r; cin >> l >> r; 
        
        if(l == 1) cout << prefix[r] << endl;
        else cout << prefix[r] - prefix[l-1] << endl; 
    }

    return 0;
}