#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, e; cin >> n >> e;

    vector<pair<int, int>> adj_list[n];

    while(e--) {
        int a, b, c; cin >> a >> b >> c;

        adj_list[a].push_back({b, c});
        adj_list[b].push_back({a, c});
    }

    for(int i = 0; i < n; i++) {
        cout << i << " -> ";
        for(auto p : adj_list[i]) {
            cout << p.first << " " << p.second << ", ";
        }
        cout << endl;
    }

    return 0;
}