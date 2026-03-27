// ========================================================= //
// ==       Logic works — until the judge executes       === //
// ========================================================= //

//Problem link: https://vjudge.net/contest/791112#problem/M

#include <bits/stdc++.h>
using namespace std;

#define nl '\n'
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
    string s1, s2; cin >> s1 >> s2;


    int cnt1 = 0, cnt2 = 0;
    for(int i = 0; i < n; i++) {
        if(i%2 == 0) {
            if(s1[i] == '1') cnt1--;
            if(s2[i] == '0') cnt2++;
        }else {
            if(s1[i] == '1') cnt2--;
            if(s2[i] == '0') cnt1++;
        }
    }

    (cnt1 >= 0 && cnt2 >= 0)? cout << "YES" << nl : cout << "NO" << nl;
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