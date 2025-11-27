// //1
// #include <bits/stdc++.h>
// using namespace std;

// #define all(x) (x).begin(), (x).end()
// #define rall(x) (x).rbegin(), (x).rend()
// #define sz(x) (int)(x).size()
// #define pb push_back
// #define mp make_pair

// using ll = long long;
// using vi = vector<int>;
// using vl = vector<ll>;
// using pii = pair<int, int>;
// using pll = pair<ll, ll>;
// using vpii = vector<pii>;
// using vpll = vector<pll>;

// void solve() {
//     string st; cin >> st;

//     if(st.size() > 10)
//         cout << st.front() << st.size()-2 << st.back() << endl;
//     else cout << st << endl;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);

// #ifndef ONLINE_JUDGE
//     // freopen("D:/File/input.txt", "r", stdin);
//     // freopen("D:/File/output.txt", "w", stdout);
// #endif

//     int t_case = 1;
//     cin >> t_case;

//     while (t_case--) {
//         solve();
//     }

//     return 0;
// }


//2
#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair

using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vpii = vector<pii>;
using vpll = vector<pll>;

void solve() {
    int n; cin >> n; 

    string st; cin >> st;
    sort(st.begin(), st.end());

    int cnt = 0;
    for(auto it = st.begin(); it < st.end(); it++) 
        if(*it == 'A') cnt++;

    if(cnt > n/2) cout << "Anton" << endl;
    else if(cnt < n/2) cout << "Danik" << endl;
    else if(cnt == n/2 && n%2 == 0) cout << "Friendship" << endl;
    else cout << "Danik" << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    int t_case = 1;
    // cin >> t_case;

    while (t_case--) {
        solve();
    }

    return 0;
}