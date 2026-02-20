// ======================================================== //
// ==      Logic works — until the judge executes       === //
// ======================================================== //

//Problem link: https://vjudge.net/contest/789038#problem/L

#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

typedef vector<int> vi; typedef long long ll; typedef vector<ll> vl;
typedef vector<char> vc; typedef vector<string> vs;
typedef pair<int, int> pii; typedef pair<ll, ll> pll;
typedef vector<pii> vpii; typedef vector<pll> vpll;

const int MOD = 1e9 + 7; const ll INF = 1e18;


void solve() {
    int n; cin >> n; 

    vi a(n);
    for(auto &it: a) cin >> it;

    for(int i = 0; i < n; i++) 
        cout << n+1-a[i] << " ";
    
    cout << endl;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("D:/File/input.txt", "r", stdin); freopen("D:/File/output.txt", "w", stdout);
    #endif

    int t_case = 1;
    cin >> t_case;

    while (t_case--) solve();

    return 0;
} 