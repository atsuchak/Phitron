// Time Complexity: O(nm)
#include <bits/stdc++.h>
using namespace std;

char grid[105][105];
bool vis[105][105];
vector<pair<int, int>> vec = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m; 
bool valid(int i, int j) {
    if(i < 0 || i >= n || j < 0 || j >= m) return 0;

    return 1;
}

void dfs(int si, int sj) {
    cout << si << " " << sj << endl;
    vis[si][sj] = 1;

    for(int i = 0; i < 4; i++) {
        int ci, cj;

        ci = si + vec[i].first;
        cj = sj + vec[i].second;

        if(valid(ci, cj) && !vis[ci][cj]) dfs(ci, cj);
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

    int srcI, scrJ; cin >> srcI >> scrJ;

    memset(vis, 0, sizeof(vis));
    dfs(srcI, scrJ);

    return 0;
}