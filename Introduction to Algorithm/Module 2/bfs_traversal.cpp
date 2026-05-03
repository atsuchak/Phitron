#include <bits/stdc++.h>
using namespace std;

vector<int> adj_list[1005];  //global diclaration
bool vis[1005];

void bfs(int src) {
    queue<int> q;
    q.push(src);
    vis[src] = 1;

    while(!q.empty()) {
        //queue theke node ber kore ana
        int par = q.front();
        q.pop();

        //node niye kaj kora
        cout << par << " ";

        //children gula queue te push kora
        for(auto child : adj_list[par]) {
            if(!vis[child]) {
                q.push(child);
                vis[child] = 1;
            }
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

    for(int i = 0; i < e; i++) {
        int a, b; cin >> a >> b;

        adj_list[i].push_back(a);
        adj_list[i].push_back(b);
    }

    memset(vis, 0, sizeof(vis));
    bfs(0);

    // for(int i = 0; i < e; i++) {
    //     cout << i << " => ";
    //     for(auto it : adj_list[i]) cout << it << " ";
    //     cout << endl;
    // }

    return 0;
}