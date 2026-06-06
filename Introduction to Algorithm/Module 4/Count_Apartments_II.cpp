//Problem link: https://www.hackerrank.com/contests/a1-algorithm-b8/challenges/count-apartments-ii

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


int n, m;
char mat[1005][1005];
bool vis[1005][1005];

vector<pair<int, int>> vec = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool valid(int i, int j) {
    return (i >= 0 || i < n || j >= 0 || j < m);
}

int dfs(int si, int sj) {
    vis[si][sj] = 1;
    int cnt = 1; 

    for (int i = 0; i < 4; i++) {
        int ci = si + vec[i].first;
        int cj = sj + vec[i].second;

        if (valid(ci, cj) && mat[ci][cj] == '.' && !vis[ci][cj]) {
            cnt += dfs(ci, cj); 
        }
    }
    return cnt;
}

void solve() {
    cin >> n >> m;

    for (int i = 0; i < n; i++) 
        for (int j = 0; j < m; j++) cin >> mat[i][j];

    vector<int> apt;
    memset(vis, 0, sizeof(vis));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (mat[i][j] == '.' && !vis[i][j]) {
                int s = dfs(i, j);
                apt.push_back(s);
            }
        }
    }

    if (apt.empty()) cout << 0 << endl;
    else {
        sort(all(apt));
        for (int i = 0; i < apt.size(); i++) 
            cout << apt[i] << " ";
    }
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