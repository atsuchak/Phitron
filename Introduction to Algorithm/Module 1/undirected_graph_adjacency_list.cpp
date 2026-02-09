#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n, e; cin >> n >> e;

    vector<vector<int>> adjList(n);

    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b;

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }

    for(int i = 0; i < n; i++) {
        cout << i << " -> ";
        
        for(auto it : adjList[i]) cout << it << " ";
        cout << endl;
    }

    return 0;
}