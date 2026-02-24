// ======================================================== //
// ==      Logic works — until the judge executes       === //
// ======================================================== //

//Problem link: https://vjudge.net/contest/791112#problem/Q

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define dbg(x) cerr << "["#x"]: " << x << endl

const int MOD = 1e9 + 7; const ll INF = 1e18;


void solve() {
    string st; cin >> st;

    map<char, int> mp;
    for(auto it : st) mp[it]++; 

    int cnt = 0;
    string lft, rght, mid;
    for(auto it : mp) {
        if(it.second % 2 == 0) {
            for(int i = 0; i < it.second/2; i++) lft.push_back(it.first), rght.push_back(it.first);
        }else {
            cnt++;
            if(cnt > 1) {cout << "NO SOLUTION" << endl; return;}
            
            for(int i = 0; i < it.second; i++) mid.push_back(it.first);
        }
    }

    reverse(all(rght));
    cout << lft << mid << rght << endl;
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