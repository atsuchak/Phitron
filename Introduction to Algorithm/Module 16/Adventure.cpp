//Problem link: https://www.hackerrank.com/contests/final-exam-a-introduction-to-algorithms-a-batch-08/challenges/adventure-1

#include <bits/stdc++.h>
using namespace std;

#define int long long

typedef vector<int> vi; typedef vector<string> vs;
typedef vector<vector<int>> vvi;
typedef pair<int, int> pii; typedef vector<char> vc;
typedef vector<pair<int, int>> vpii;

#define nl '\n'
#define yes cout << "YES" << nl
#define no cout << "NO" << nl
#define ret(x) {cout << x << nl; return;}
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#ifndef ONLINE_JUDGE
    #define dbg(x) cerr << "["#x"]: " << x << nl
#else
    #define dbg(x)
#endif

template<typename T> istream &operator>>(istream &it, vector<T> &v) { for (auto &i : v) it >> i; return it; }
template<typename T> ostream &operator<<(ostream &it, const vector<T> &v) {
    for (int i = 0; i < v.size(); i++) it << v[i] << (i == v.size() - 1 ? "" : " "); return it << nl; }

const int MOD = 1e9 + 7; const int INF = 1e18;

int val[1005], weight[1005];
int dp[1005][1005];

int knapsack(int i, int mx_weight) {
    if(i < 0 || mx_weight <= 0) return 0;
    if(dp[i][mx_weight] != -1) return dp[i][mx_weight];

    if(weight[i] <= mx_weight){
        int op1 = knapsack(i-1, mx_weight - weight[i]) + val[i];
        int op2 = knapsack(i-1, mx_weight);
        
        dp[i][mx_weight] = max(op1, op2);
        return dp[i][mx_weight];
    }else{ 
        dp[i][mx_weight] = knapsack(i-1, mx_weight);
        return dp[i][mx_weight];
    }
}

void solve() {
    int n, mx_weight; cin >> n >> mx_weight;

    for(int i = 0; i < n; i++) cin >> weight[i];
    for(int i = 0; i < n; i++) cin >> val[i];
    
    for(int i = 0; i <= n; i++) 
        for(int j = 0; j <= mx_weight; j++) dp[i][j] = -1;
        
    cout << knapsack(n-1, mx_weight) << "\n";
}

int32_t main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin); freopen("output.txt", "w", stdout);
    #endif

    int t = 1;
    cin >> t;

    for(int i = 1; i <= t; i++) {
        // cout << "Case " << i << ": ";
        solve();
    }

    return 0;
} 

// coded by আহনাফ তাজওয়ার সুচক