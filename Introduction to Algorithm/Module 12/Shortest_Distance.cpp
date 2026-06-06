//Problem link: https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-08/challenges/shortest-distance-2

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


void solve() {
    int n, e; cin >> n >> e;

    vvi adj_mat(n+1, vi(n+1, INF));
    for(int i = 1; i <= n; i++) adj_mat[i][i] = 0;

    while(e--) {
        int a, b, c; cin >> a >> b >> c;
        
        if(c < adj_mat[a][b]) adj_mat[a][b] = c;
    }

    for(int k = 1; k <= n; k++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= n; j++) {
                if(adj_mat[i][k] != INF && adj_mat[k][j] != INF && adj_mat[i][k] + adj_mat[k][j] < adj_mat[i][j]) 
                    adj_mat[i][j] = adj_mat[i][k] + adj_mat[k][j];  
            }
        }
    }

    int q; cin >> q;
    while(q--) {
        int x, y; cin >> x >> y;
        
        if(adj_mat[x][y] == INF) cout << -1 << nl;
        else cout << adj_mat[x][y] << nl;
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