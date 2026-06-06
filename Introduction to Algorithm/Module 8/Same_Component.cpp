//Problem link: https://www.hackerrank.com/contests/mid-term-exam-a-introduction-to-algorithms-a-batch-08/challenges/same-component

#include <bits/stdc++.h>
using namespace std;

#define int long long

typedef vector<int> vi; typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii; typedef vector<char> vc;
typedef vector<pair<int, int>> vpii;

#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define ret(x) {cout << x << nl; return;}
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#ifndef ONLINE_JUDGE
    #define dbg(x) cerr << "["#x"]: " << x << nl
#else
    #define dbg(x)
#endif

template<typename T> istream &operator>>(istream &it, vector<T> &v) { for (auto &i : v) it >> i; return it; }
template<typename T> ostream &operator<<(ostream &it, const vector<T> &v) {
    for (int i = 0; i < v.size(); i++) it << v[i] << (i == v.size() - 1 ? "" : " "); return it << nl; }

const int MOD = 1e9 + 7; const int INF = 1e18;

char grid[1005][1005]; 
bool vis[1005][1005];
vpii vec = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

int n, m; 

bool valid(int i, int j) {
    if(i < 0 || i >= n || j < 0 || j >= m) return 0;
    if(grid[i][j] == '-') return 0;

    return 1;
}

void dfs(int si, int sj) {
    vis[si][sj] = 1;

    for(int i = 0; i < 4; i++) {
        int ci = si + vec[i].first;
        int cj = sj + vec[i].second;

        if(valid(ci, cj) && !vis[ci][cj]) 
            dfs(ci, cj);

    }
}

void solve() {
    cin >> n >> m;

    for(int i = 0; i < n; i++) 
        for(int j = 0; j < m; j++) cin >> grid[i][j];

    int si, sj, di, dj; cin >> si >> sj >> di >> dj;

    memset(vis, 0, sizeof(vis));
    dfs(si, sj);

    vis[di][dj]? cout << "YES" << nl : cout << "NO" << nl;
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin >> t;

    for(int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        solve();
    }

    return 0;
} 

// coded by আহনাফ তাজওয়ার সুচক