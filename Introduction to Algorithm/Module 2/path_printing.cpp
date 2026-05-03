#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList(1005);
bool vis[1005];
int level[1005];
int parent[1005];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = 1;
    level[src] = 0;

    while(!q.empty()) {
        int par = q.front();
        q.pop();

        for(auto child : adjList[par]) {
            if(!vis[child]) {
                q.push(child);
                vis[child] = 1;
                level[child] = level[par] + 1;
                parent[child] = par;
            }
        }
    }    
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n, e; cin >> n >> e;

    for(int i = 0; i < e; i++) {
        int a, b; cin >> a >> b;

        adjList[a].push_back(b);
        adjList[b].push_back(a);
    }
    memset(vis, 0, sizeof(vis));
    memset(level, -1, sizeof(level));
    memset(parent, -1, sizeof(parent));

    int src, dis; cin >> src >> dis;
    bfs(src);

    vector<int> path;
    int node = dis;

    while(node != -1) {
        path.push_back(node);
        node = parent[node];
    }

    reverse(path.begin(), path.end());
    for(auto it : path) cout << it << " ";
    cout << endl;

    return 0;
}