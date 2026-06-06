#include <bits/stdc++.h>
using namespace std;

bool vis[105];
int parent[105];
vector<int> adj_list[105];
bool cycle;

void dfs(int src) {
    vis[src] = true;
    for(int child : adj_list[src]) {
        if(vis[child] && parent[src] != child)
            cycle = true; 

        if(!vis[child]) {
            parent[child] = src;
            dfs(child);
        }
    }
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
        adj_list[b].push_back(a);
    }

    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    cycle = false;

    for(int i = 0; i < n; i++) 
        if(!vis[i]) dfs(i);

    for(int i = 0; i < n; i++) 
        cout << i << " parent=> " << parent[i] << endl;
    
    cycle? cout << "Cycle detected" << endl : cout << "Cycle not detected" << endl;

    return 0;
}