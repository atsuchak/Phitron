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
    string st; cin >> st;

    int e_cnt = 0, g_cnt = 0, y_cnt = 0, p_cnt = 0, t_cnt = 0;
    for(char ch : st) 
        if(ch == 'e' || ch == 'E') e_cnt++;
        else if(ch == 'g' || ch == 'G') g_cnt++;
        else if(ch == 'y' || ch == 'Y') y_cnt++;
        else if(ch == 'p' || ch == 'P') p_cnt++;
        else if(ch == 't' || ch == 'T') t_cnt++;

    cout << min(e_cnt, min(g_cnt, min(y_cnt, min(p_cnt, t_cnt)))) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    int t_case = 1;
    // cin >> t_case;

    while (t_case--) {
        solve();
    }

    return 0;
}