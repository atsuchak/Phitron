//Problem link: https://vjudge.net/contest/793768#problem/H

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
    int n; cin >> n;
    vi a(n); cin >> a;

    map<int, int> mp;
    for (int i = 0; i < n; i++) mp[a[i]] = i;

    int cnt = 0;
    int i = 0;
    while (i < n) {
        cnt++;
        int mn = mp[a[i]]; 
        int j = i;
        while (j < n) {
            if (mp[a[j]] < mn) mn = mp[a[j]];
            
            if (j >= mn) {
                i = n;
                break;
            }
            
            if (j + 1 < n && j < mn) {
                j++;
                if (j < mn) {
                    i = j;
                    break;
                }
            } else {
                i = n;
                break;
            }
        }
    }
    cout << cnt << nl;
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;

    for(int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        solve();
    }

    return 0;
} 

// coded by আহনাফ তাজওয়ার সুচক