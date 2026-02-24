// ========================================================= //
// ==       Logic works — until the judge executes       === //
// ========================================================= //

//Problem link: https://vjudge.net/contest/791112#problem/P

#include <bits/stdc++.h>
using namespace std;

#define int long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define dbg(x) cerr << "["#x"]: " << x << endl

typedef vector<int> vi; typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii; typedef vector<char> vc;
typedef vector<pair<int, int>> vpii;

template<typename T> istream &operator>>(istream &it, vector<T> &v) { for (auto &i : v) it >> i; return it; }
template<typename T> ostream &operator<<(ostream &it, const vector<T> &v) {
    for (int i = 0; i < v.size(); i++) it << v[i] << (i == v.size() - 1 ? "" : " "); return it << endl; }

const int MOD = 1e9 + 7; const int INF = 1e18;


void solve() {
    int n; cin >> n;
    vi a(n); cin >> a;

    deque<int> deq;
    deq.push_back(a[0]);
    for(int i = 1; i < n; i++) 
        a[i] < deq.front()? deq.push_front(a[i]) : deq.push_back(a[i]);

    for(auto it : deq) cout << it << " ";
    cout << endl;
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