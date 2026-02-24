// ======================================================== //
// ==      Logic works — until the judge executes       === //
// ======================================================== //

//Problem link: https://vjudge.net/contest/791112#problem/E

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define dbg(x) cerr << "["#x"]: " << x << endl

const int MOD = 1e9 + 7; const ll INF = 1e18;


void solve() {
    int n; cin >> n;

    vector<string> a(n), b(n), c(n);
    map<string, int> mp;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        mp[b[i]]++;
    }
    for(int i = 0; i < n; i++) {
        cin >> c[i];
        mp[c[i]]++;
    }

    int aCnt = 0, bCnt = 0, cCnt = 0;
    for(auto it : a) {
        if(mp[it] == 1) aCnt += 3;
        else if(mp[it] == 2) aCnt += 1;
    }
    for(auto it : b) {
        if(mp[it] == 1) bCnt += 3;
        else if(mp[it] == 2) bCnt += 1;
    }
    for(auto it : c) {
        if(mp[it] == 1) cCnt += 3;
        else if(mp[it] == 2) cCnt += 1;
    }

    cout << aCnt << " " << bCnt << " " << cCnt << endl;
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("D:/File/input.txt", "r", stdin); freopen("D:/File/output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;

    for(int i = 0; i < t; i++) solve();

    return 0;
} 

// coded by আহনাফ তাজওয়ার সুচক