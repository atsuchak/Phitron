#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n, m; cin >> n >> m;
    vector<vector<int>> vec(n, vector<int>(m, 3));  // fixed row column

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) cout << vec[i][j] << " ";
        cout << endl;
    }
    cout << endl;

    
    int p; cin >> p;
    vector<vector<int>> a;  // dynamic sized 2d vector
    
    for(int i = 0; i < p; i++) {
        int q; cin >> q;
        vector<int> b;
        
        for(int j = 0; j < q; j++) {
            int x; cin >> x; 
            b.push_back(x);
        }
        a.push_back(b);
    }
    for(int i = 0; i < p; i++) {
        for(int j = 0; j < a[i].size(); j++) cout << a[i][j] << " ";
        cout << endl;
    }
    

    return 0;
}