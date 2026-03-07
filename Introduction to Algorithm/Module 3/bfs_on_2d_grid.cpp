// Time Complexity: O(nm)

#include <bits/stdc++.h>
using namespace std;

int n, m; 
char grid[105][105];
bool vis[105][105];
vector<pair<int, int>> d = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j) {
    if(i < 0 || i >= n || j < 0 || j >= m) return 0;

    return 1;
}

void bfs(int srcI, int srcJ) {
    queue<pair<int, int>> q;
    q.push({srcI, srcJ});
    vis[srcI][srcJ] = 1;

    while(!q.empty()) {
        pair<int, int> par = q.front();
        q.pop();

        int parI = par.first;
        int parJ = par.second;

        cout << parI << " " << parJ << endl;

        for(int i = 0; i < 4; i++) {
            int ci = parI + d[i].first;
            int cj = parJ + d[i].second;

            if(valid(ci, cj) && !vis[ci][cj]) {
                q.push({ci, cj});
                vis[ci][cj] = 1;
            }
        }
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    cin >> n >> m;

    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++) cin >> grid[i][j];

    int srcI, srcJ; cin >> srcI >> srcJ;

    memset(vis, 0, sizeof(vis));
    bfs(srcI, srcJ);

    return 0;
}