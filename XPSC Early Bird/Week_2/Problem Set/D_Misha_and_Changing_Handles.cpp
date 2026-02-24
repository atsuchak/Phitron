// ======================================================== //
// ==      Logic works — until the judge executes       === //
// ======================================================== //

// Problem link: https://vjudge.net/contest/791112#problem/D

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define dbg(x) cerr << "[" #x "]: " << x << endl

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n; cin >> n;

    map<string, string> ans, tmp;
    while (n--) {
        string a, b; cin >> a >> b;

        if (tmp.find(a) != tmp.end()) {
            string st = tmp[a];
            ans[st] = b;
            tmp.erase(a);
            tmp[b] = st;
        } else {
            ans[a] = b;
            tmp[b] = a;
        }
    }

    cout << ans.size() << endl;
    for (auto it : ans) cout << it.first << " " << it.second << endl;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int t = 1;
    // cin >> t;

    for (int i = 0; i < t; i++) solve();

    return 0;
}

// coded by আহনাফ তাজওয়ার সুচক