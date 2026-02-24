// ======================================================== //
// ==      Logic works — until the judge executes       === //
// ======================================================== //

//Problem link: https://vjudge.net/contest/791112#problem/B

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define dbg(x) cerr << "["#x"]: " << x << endl

const int MOD = 1e9 + 7; const ll INF = 1e18;


void solve() {
    int n; cin >> n;
 
    string st; cin >> st;
    int a = 0, b = 0;
 
    for(int i = 0; i < n; i++) 
        if(st[i] == 'B') {a = i; break;}
 
        
    for(int i = n-1; i >= 0; i--) 
        if(st[i] == 'B') {b = i; break;}
 
    cout << b - a + 1 << endl;
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