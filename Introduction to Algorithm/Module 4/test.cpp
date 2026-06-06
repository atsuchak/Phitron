//Problem link: https://www.hackerrank.com/contests/a1-algorithm-b8/challenges/connected-or-not-1-1

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


vector<int> adj_list[1005];
bool vis[1005];

void bfs(int s, int d) {
    queue<int> q;
    q.push(s);
    vis[s] = 1;

    while(!q.empty()) {
        int par = q.front();
        q.pop();


        for(auto child : adj_list[par]) {
            if(!vis[child]) {
                q.push(child);
                vis[child] = 1;
            }
        }
    }

    !vis[d]? no : yes;
}

void solve() {
    int n, e; cin >> n >> e;

    for(int i = 0; i < e; i++) {
        int a, b; cin >> a >> b;

        adj_list[a].push_back(b);
    }
    
    int x; cin >> x;
    while(x--) {
        memset(vis, 0, sizeof(vis));
        int s, d; cin >> s >> d;
        bfs(s, d);
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