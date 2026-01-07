#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;

    vector<long long> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vector<long long> preSum(n, 0);
    preSum[0] = a[0];
    for(int i = 1; i < n; i++)
        preSum[i] = a[i] + preSum[i-1]; 

    reverse(preSum.begin(), preSum.end());
    for(int i = 0; i < n; i++) cout << preSum[i] << " ";

    return 0;
}