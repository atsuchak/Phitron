// --------------------------------------------------------------- //
// --------------------------------------------------------------- //
// -- If it works, don't touch it                              --- //
// -- Dedicated to the test case I forgot to consider          --- //
// -- Logic is a systematic way of going wrong with confidence --- //
// --------------------------------------------------------------- //
// --------------------------------------------------------------- //

//Problem link: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/same-or-not-4   

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


class Stack {

    public:
    list<int> ll;

    void push(int val) {
        ll.push_back(val);
    }

    void pop() {
        ll.pop_back();
    }

    bool empty() {
        return ll.empty();
    }

    int top() {
        return ll.back();
    }
};

class Queue {

    public:
    list<int> ll;

    void push(int val) {
        ll.push_back(val);
    }

    void pop() {
        ll.pop_front();
    }

    int front() {
        return ll.front();
    }

    bool empty() {
        return ll.empty();
    }

    int size() {
        return ll.size();
    }
};

void solve() {
    int n, m; cin >> n >> m;

    Stack st;
    Queue qu;

    while(n--) {
        int val; cin >> val;
        st.push(val);
    }
    
    while(m--) {
        int val; cin >> val;
        qu.push(val);
    }

    Queue tmp;
    while(!st.empty()) {
        tmp.push(st.top());
        st.pop();
    }

    bool flg = 0;
    if(tmp.size() >= qu.size()) {
        while(!tmp.empty()) {
            if((tmp.front() != qu.front()) || qu.empty()) {
                flg = 1;
                break;
            }
            tmp.pop();
            qu.pop();
        }
    }else {
        while(!qu.empty()) {
            if((tmp.front() != qu.front()) || tmp.empty()) {
                flg = 1;
                break;
            }
            tmp.pop();
            qu.pop();
        }
    }

    flg? cout << "NO" << endl : cout << "YES" << endl;
    
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