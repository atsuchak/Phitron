// ======================================================== //
// ==      Logic works — until the judge executes       === //
// ======================================================== //

//Problem link: https://vjudge.net/contest/791112#problem/I

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define dbg(x) cerr << "["#x"]: " << x << endl

const int MOD = 1e9 + 7; const ll INF = 1e18;


void solve() {
    int n; cin >> n;

    vector<string> a(n);
    for(auto &it : a) cin >> it;

    set<string> st;
    for(int i = n-1; i >= 0; i--) {
        if(st.find(a[i]) == st.end()) {
            cout << a[i] << endl;
            st.insert(a[i]);
        }
    }

}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("D:/File/input.txt", "r", stdin); freopen("D:/File/output.txt", "w", stdout);
    #endif

    int t = 1;
    // cin >> t;

    for(int i = 0; i < t; i++) solve();

    return 0;
} 

// coded by আহনাফ তাজওয়ার সুচক