// --------------------------------------------------------------- //
// --------------------------------------------------------------- //
// -- If it works, don't touch it                              --- //
// -- Dedicated to the test case I forgot to consider          --- //
// -- Logic is a systematic way of going wrong with confidence --- //
// --------------------------------------------------------------- //
// --------------------------------------------------------------- //

//Problem link: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/browser-history-1

#include <bits/stdc++.h>
using namespace std;

#ifndef ONLINE_JUDGE
    #define debug(x) cerr << #x << " = "; _print(x); cerr << endl; 
#else 
    #define debug(x)
#endif

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()
#define pb push_back
#define mp make_pair
#define ff first
#define ss second

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef vector<string> vs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void _print(int n) {cerr << n;}
void _print(ll n) {cerr << n;}
void _print(double n) {cerr << n;}
void _print(char n) {cerr << n;}
void _print(string n) {cerr << n;}
void _print(bool n) {cerr << n;}

template<class T, class V> void _print(pair<T, V> p) {
    cerr << "("; _print(p.ff); cerr << ", "; _print(p.ss); cerr << ")";};
template<class T> void _print(vector<T> v) {
    cerr << "[ "; for(T i : v) {_print(i); cerr << " ";} cerr << "]";}
template<class T> void _print(set<T> s) {
    cerr << "[ "; for(T i : s) {_print(i); cerr << " ";} cerr << "]";}
template<class T, class V> void _print(map<T, V> m) {
    cerr << "[ "; for(auto i : m) {_print(i); cerr << " ";} cerr << "]";}


void solve() {
    list<string> st; 

    while(1) {
        string str; cin >> str;
        if(str == "end") break;

        st.push_back(str);
    }

    int n; cin >> n;
    auto curr = st.begin();
    while(n--) {
        string str; cin >> str;

        if (str == "visit") {
            string tmp; cin >> tmp;
            
            bool chk = 0;
            for(auto it = st.begin(); it != st.end(); it++) { 
                if(*it == tmp) {
                    curr = it; 
                    chk = 1;
                    break;
                }
            }
            chk? cout << *curr << endl : cout << "Not Available" << endl;

        }else if (str == "next") {
            auto tmp = curr;
            tmp++;

            if(tmp != st.end()) {
                curr++;
                cout << *curr << endl;
            }else cout << "Not Available" << endl;
            
        }else if (str == "prev") {
            if(curr != st.begin()) {
                curr--;
                cout << *curr << endl;
            }else cout << "Not Available" << endl;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    #ifndef ONLINE_JUDGE
        freopen("D:/File/input.txt", "r", stdin);
        freopen("D:/File/output.txt", "w", stdout);
        freopen("D:/File/error.txt", "w", stderr);
    #endif

    int t_case = 1;
    // cin >> t_case;

    while (t_case--) {
        solve();
    }

    return 0;
} 