#include <bits/stdc++.h>
using namespace std;

vector<int> adjList[1005];
bool vis[1005];

void bfs(int src, int dist) {
    queue<int> q;
    q.push(src);
    vis[src] = 1;

    while(!q.empty()) {
        int tmp = q.front();
        q.pop();

        // cout << tmp << " ";

        for(auto it : adjList[tmp]) {
            if(!vis[it]) {
                q.push(it);
                vis[it] = 1;
            }
        }
    }

    if(!vis[dist]) cout << "Not connected" << endl;
    else cout << "Conneted" << endl;
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

    int srcNode, distNode; cin >> srcNode >> distNode;
    bfs(srcNode, distNode);

    cout << endl;
    vis[distNode]? cout << srcNode << " -> " << distNode << ": Possible" << endl : 
                cout << srcNode << " -> " << distNode << ": not possible" << endl;

    return 0;
}