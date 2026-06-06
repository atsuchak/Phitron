//Problem link: https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-08/challenges/cycle-of-edges

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

int par[1000005];
int group_size[1000005];

int find(int node) {
    if(par[node] == -1) return node;

    par[node] = find(par[node]);
    return find(par[node]);
}

void dsu_union(int node1, int node2) {
    int leader1 = find(node1);
    int leader2  = find(node2);

    if(group_size[leader1] >= group_size[leader2]) {
        par[leader2] = leader1;
        group_size[leader1] += group_size[leader2];
    } else {
        par[leader1] = leader2;
        group_size[leader2] += group_size[leader1];
    }
}

void solve() {
    int n, e; cin >> n >> e;

    for(int i = 0; i <= n; i++) {
        par[i] = -1;
        group_size[i] = 1;
    }

    int cnt = 0;
    while(e--) {
        int a, b; cin >> a >> b;

        int leaderA = find(a);
        int leaderB = find(b);

        if(leaderA == leaderB) cnt++;
        else dsu_union(a, b);
    }

    cout << cnt << nl;
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