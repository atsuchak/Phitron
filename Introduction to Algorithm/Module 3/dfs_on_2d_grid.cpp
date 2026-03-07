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

void dfs(int srcI, int srcJ) {
    cout << srcI << " " << srcJ << endl;
    vis[srcI][srcJ] = 1;
    
    for(int i = 0; i < 4; i++) {
        int ci = srcI + d[i].first;
        int cj = srcJ + d[i].second;

        if(valid(ci, cj) && !vis[ci][cj]) {
            dfs(ci, cj);
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
    dfs(srcI, srcJ);

    return 0;
}