#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adjList(1005);
bool vis[1005];

void bfs_traversal(int src) {  // TC -> O(V + E)
    queue<int> q;
    q.push(src);
    vis[src] = 1;

    while(!q.empty()) {
        int tmp = q.front();
        q.pop();

        cout << tmp << " ";

        for(auto it : adjList[tmp]) {
            if(!vis[it]) {
                q.push(it);
                vis[it] = 1;
            }
        }
    }
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

    bfs_traversal(0);

    return 0;
}