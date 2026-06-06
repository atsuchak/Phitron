//Problem link: https://www.hackerrank.com/contests/assignment-02-a-introduction-to-algorithms-a-batch-08/challenges/can-go-again

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

long long dis[1005];

class Edge {
    public: 
    int a, b, c;

    Edge(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }
};

void solve() {
    int n, e; cin >> n >> e;
    vector<Edge> edge_list;

    while(e--) {
        int a, b, c; cin >> a >> b >> c;

        edge_list.push_back(Edge(a, b, c));
    }

    int x; cin >> x;
    for(int i = 1; i <= n; i++) dis[i] = INF;

    dis[x] = 0;
    for(int i = 0; i < n; i++) {
        for(auto ed : edge_list) {
            int a = ed.a;
            int b = ed.b;
            int c = ed.c;

            if(dis[a] != INF && dis[a] + c < dis[b]) dis[b] = dis[a] + c;
        }
    }

    bool cycle = false;
    for(auto ed : edge_list) {
        int a = ed.a;
        int b = ed.b;
        int c = ed.c;

        if(dis[a] != INF && dis[a] + c < dis[b]) {
            cycle = true; 
            break;
        }
    }

    if(cycle) cout << "Negative Cycle Detected" << nl; 
    else {
        int t; cin >> t;
        while(t--) {
            int d; cin >> d;
            
            if(dis[d] == INF) cout << "Not Possible" << nl;
            else cout << dis[d] << nl;
        }
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