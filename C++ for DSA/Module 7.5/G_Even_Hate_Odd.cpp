#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair

using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

void solve() {
    int n; cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    if(n%2 != 0) {
        cout << -1 << endl;
        return;
    } 

    int ev_cnt = 0, odd_cnt = 0;
    for(int it : a) {
        if(it%2 == 0) ev_cnt++;
        else odd_cnt++;
    }

    if(ev_cnt == odd_cnt) cout << 0 << endl;
    else if(ev_cnt < odd_cnt) cout << (odd_cnt-ev_cnt)/2 << endl;
    else cout << (ev_cnt-odd_cnt)/2 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    int t_case = 1;
    cin >> t_case;

    while (t_case--) {
        solve();
    }

    return 0;
}