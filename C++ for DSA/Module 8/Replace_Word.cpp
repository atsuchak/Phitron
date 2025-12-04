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
    string store;

    int j = 0, k = 0;
    for(int i = 0; i < st.size(); i++) {
        if(st[i] == tmp[k]) {
            if(j == 0) j = i;

            store.push_back(st[i]);
            k++;
        }

        if(tmp == store) {
            st.replace(j, tmp.size(), "#");
            j = 0, k = 0;
            store = "";
        }
    }
    
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