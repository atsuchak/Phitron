// Time Complexity: O(nm)
#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
bool vis[105][105];
int level[105][105];
vector<pair<int, int>> vec = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m; 
bool valid(int i, int j) {
    if(i < 0 || i >= n || j < 0 || j >= m) return 0;

    return 1;
}

void bfs(int si, int sj) {
    queue<pair<int, int>> q; 
    q.push({si, sj});
    vis[si][sj] = 1;
    level[si][sj] = 0;

    while(!q.empty()) {
        pair<int,int> par = q.front();
        q.pop();

        cout << par.first << " " << par.second << endl;

        for(int i = 0; i < 4; i++) {
            int ci, cj;
            ci = par.first + vec[i].first;
            cj = par.second + vec[i].second;
            if(!vis[ci][cj] && valid(ci, cj)) {
                q.push({ci, cj});
                vis[ci][cj] = 1;

                level[ci][cj] = level[par.first][par.second] + 1;
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

    cin >> n >> m;

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) cin >> grid[i][j];

    int srcI, scrJ, distI, distJ; cin >> srcI >> scrJ >> distI >> distJ;

    memset(vis, 0, sizeof(vis));
    memset(level, -1, sizeof(level));
    bfs(srcI, scrJ);

    cout << level[distI][distJ] << endl;

    return 0;
}