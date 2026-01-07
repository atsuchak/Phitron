#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    bool chk = 0;
    for(int i = 0; i < n; i++) 
        for(int j = i+1; j < n; j++) 
            if(a[i] == a[j]) chk = 1;

    if(chk) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}