#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    int val; cin >> val;
    a.push_back(val);

    int curr_idx = a.size()-1; 

    while(curr_idx != 0) {
        int par_idx = (curr_idx-1)/2; 

        if(a[par_idx] < a[curr_idx]) swap(a[par_idx], a[curr_idx]);
        else break;

        curr_idx = par_idx;
    }

    for(int it : a) cout << it << " ";
    cout << endl;
    return 0;
}