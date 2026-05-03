#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, e; cin >> n >> e;

    vector<pair<int, int>> adj_edge;

    for(int i = 0; i < e; i++) {
        int a, b; cin >> a >> b;

        adj_edge.push_back({a, b});
    }

    for(auto it : adj_edge) cout << it.first << " " << it.second << endl;

    return 0;
}