// ======================================================== //
// ==      Logic works — until the judge executes       === //
// ======================================================== //

//Problem link: https://vjudge.net/contest/791112#problem/A

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define dbg(x) cerr << "["#x"]: " << x << endl

const int MOD = 1e9 + 7; const ll INF = 1e18;


void solve() {
    int n; cin >> n; 
 
    list<int> a;
    for(int i = 0; i < n; i++) {
        int k; cin >> k; a.push_back(k);
    }
 
    int x = 0, y = 0, z = n;
    for(int i = 0; i < n; i++) {
        if(i%2 == 0) {
            if(a.front() > a.back()) x += a.front(), a.pop_front();
            else x += a.back(), a.pop_back();
        }else {
            if(a.front() > a.back()) y += a.front(), a.pop_front();
            else y += a.back(), a.pop_back();
        }
    }
 
    cout << x << " " << y << endl;
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