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

class Student {

    public:
    string name;
    int roll, marks;
};

void solve() {
    int n; cin >> n;

    Student st[n];
    for(int i = 0; i < n; i++) cin >> st[i].name >> st[i].roll >> st[i].marks;

    reverse(st, st+n);
    for(int i = 0; i < n; i++) cout << st[i].name << " " << st[i].roll << " " << st[i].marks << endl;
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