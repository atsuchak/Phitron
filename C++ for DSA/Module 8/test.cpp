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
    string st, tmp; cin >> st >> tmp;
    

    for(int i = 0; i < st.size(); i++) {
        string store;
        int k = 0;

        while(k < tmp.size() && st[i+k] == tmp[k]) {
            store.push_back(st[i+k]);
            k++;
        }

        if(store == tmp) st.replace(i, tmp.size(), "#");
        
    }

    // cout << tmp << " " << store << endl;
    cout << st << endl;
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