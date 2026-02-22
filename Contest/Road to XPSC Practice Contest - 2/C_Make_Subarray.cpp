// ======================================================== //
// ==      Logic works — until the judge executes       === //
// ======================================================== //

//Problem link: https://vjudge.net/contest/790407#problem/C

#include <bits/stdc++.h>
using namespace std;

#define sz(x) (int)(x).size()
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define dbg(x) cerr << "["#x"]: " << x << endl

typedef long long ll; typedef vector<int> vi; typedef vector<ll> vll;
typedef vector<char> vc; typedef vector<string> vs;
typedef pair<int, int> pii; typedef vector<pii> vpii;

const int MOD = 1e9 + 7; const ll INF = 1e18;


void solve() {
    int n; cin >> n;
    string st; cin >> st; 

    int firstIdx = -1, lastIdx = -1;
    for(int i = 0; i < n; i++) 
        if(st[i] == '1') {firstIdx = i; break;}
    
    for(int i = n-1; i >= 0; i--) 
        if(st[i] == '1') {lastIdx = i; break;}
    
    int cnt = 0;
    for(int i = firstIdx; i < lastIdx; i++) 
        if(st[i] == '0') cnt++;
    
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