// ======================================================== //
// ==      Logic works — until the judge executes       === //
// ======================================================== //

//Problem link: https://vjudge.net/contest/791112#problem/R

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define dbg(x) cerr << "["#x"]: " << x << endl

const int MOD = 1e9 + 7; const ll INF = 1e18;


void solve() {
    ll n, k; cin >> n >> k;

    vector<ll> a(n);
    for(auto &it : a) cin >> it; 

    sort(rall(a));
    ll extra = 0, cnt = 0;
    for(auto it : a) {
        if(it >= k) extra += it-k, cnt++;
        else break;
    }

    for(auto it : a) 
        if(it < k && extra >= k-it) extra -= k-it, cnt++;

    cout << cnt << endl;
    
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