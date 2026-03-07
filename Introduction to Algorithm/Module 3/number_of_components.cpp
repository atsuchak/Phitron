#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList(1005);
bool vis[1005];

void dfs(int src) {
    // cout << src << " ";

    vis[src] = 1;
    for(auto it : adjList[src]) 
        if(!vis[it]) dfs(it);
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n, e; cin >> n >> e;

    for(int i = 0; i < e; i++) {
        int a, b; cin >> a >> b;

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    memset(vis, 0, sizeof(vis));

    int cnt = 0;
    for(int i = 0; i < n; i++) { 
        if(!vis[i]) {
            dfs(i);
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}