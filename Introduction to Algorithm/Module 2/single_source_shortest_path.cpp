#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList(1005);
bool vis[1005];
int level[1005];

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

    int src, dis; cin >> src >> dis;
    bfs(src);

    cout << level[dis];

    // cout << "src" << "\t\t" << "Dist" << endl;
    // for(int i = 0; i < n; i++) cout << i << " \t->\t " << dist[i] << endl;

    // cout << "Distination from " << src << " to " << dis << ": ";
    // cout << dist[dis] << endl;

    return 0;
}