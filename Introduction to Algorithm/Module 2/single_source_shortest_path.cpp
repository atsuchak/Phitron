#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList(1005);
bool vis[1005];
int dist[1005];

void bfs(int src) {
    queue<int> q;
    q.push(src);

    vis[src] = 1;
    dist[src] = 0;

    while(!q.empty()) {
        int tmp = q.front();
        q.pop();

        cout << tmp << " ";

        for(auto it : adjList[tmp]) {
            if(!vis[it]) {
                q.push(it);
                vis[it] = 1;
                dist[it] = dist[tmp] + 1;
            }
        }
    }
    cout << endl;
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
    memset(dist, -1, sizeof(dist));

    int src, dis; cin >> src >> dis;
    bfs(src);

    cout << "src" << "\t\t" << "Dist" << endl;
    for(int i = 0; i < n; i++) cout << i << " \t->\t " << dist[i] << endl;

    cout << "Distination from " << src << " to " << dis << ": ";
    cout << dist[dis] << endl;

    return 0;
}