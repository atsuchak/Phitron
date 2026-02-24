// ======================================================== //
// ==      Logic works — until the judge executes       === //
// ======================================================== //

//Problem link: https://vjudge.net/contest/791112#problem/C

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define dbg(x) cerr << "["#x"]: " << x << endl

const int MOD = 1e9 + 7; const ll INF = 1e18;


void solve() {
    int n; cin >> n;
    cin.ignore();

    vector<string> st(n);
    for(int i = 0; i < n; i++) getline(cin, st[i]);

    sort(all(st));
    int cnt = 1;
    for(int i = 0; i < n-1; i++) 
        if(st[i] != st[i+1]) cnt++;

    cout << cnt << endl;
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