// ========================================================= //
// ==       Logic works — until the judge executes       === //
// ========================================================= //

//Problem link: https://vjudge.net/contest/791112#problem/H

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define dbg(x) cerr << "["#x"]: " << x << nl

typedef vector<int> vi; typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii; typedef vector<char> vc;
typedef vector<pair<int, int>> vpii;

template<typename T> istream &operator>>(istream &it, vector<T> &v) { for (auto &i : v) it >> i; return it; }
template<typename T> ostream &operator<<(ostream &it, const vector<T> &v) {
    for (int i = 0; i < v.size(); i++) it << v[i] << (i == v.size() - 1 ? "" : " "); return it << nl; }

const int MOD = 1e9 + 7; const int INF = 1e18;


void solve() {
    int n; cin >> n;
    string st; cin >> st;

    vi a(n);
    int sum = 0;
    for(int i = 0; i < n; i++) {
        if(st[i] == 'L') a[i] = i;
        else a[i] = n-i-1;
        
        sum += a[i];
    }

    vi ans;
    for(int i = 0; i < n; i++){
        int mx = max(n-i-1, i);
        if(mx > a[i]) ans.push_back(mx-a[i]);
    }

    sort(rall(ans));
    vi res;
    for(int i = 0; i < n; i++) {
        if(i < ans.size()) sum += ans[i];
        res.push_back(sum);
    }

    cout << res;
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("D:/File/input.txt", "r", stdin); freopen("D:/File/output.txt", "w", stdout);
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