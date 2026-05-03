#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, e; cin >> n >> e;

    vector<int> adj_list[n];  //array of vector
    for(int i = 0; i < e; i++) {
        int a, b; cin >> a >> b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);
    }

    for(int i = 0; i < n; i++) {
        cout << i << " => ";

        for(auto it: adj_list[i]) cout << it << ", ";
        cout << endl;
    }

    return 0;
}