#include <bits/stdc++.h>
using namespace std;

bool vis[105];
bool pathvis[105];
vector<int> adj_list[105];
bool cycle;

void dfs(int src) {
    vis[src] = true;
    pathvis[src] = true;

    for(int child : adj_list[src]) {
        if(vis[child] && pathvis[child])
            cycle = true; 

        if(!vis[child]) {
            dfs(child);
        }
    }

    pathvis[src] = false;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, e; cin >> n >> e;

    while(e--) {
        int a, b; cin >> a >> b;

        adj_list[a].push_back(b);
    }

    memset(vis, false, sizeof(vis));
    memset(pathvis, false, sizeof(pathvis));
    cycle = false;

    for(int i = 0; i < n; i++) 
        if(!vis[i]) dfs(i);

    
    cycle? cout << "Cycle detected" << endl : cout << "Cycle not detected" << endl;

    return 0;
}