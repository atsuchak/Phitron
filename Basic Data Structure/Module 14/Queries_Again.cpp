// --------------------------------------------------------------- //
// --------------------------------------------------------------- //
// -- If it works, don't touch it                              --- //
// -- Dedicated to the test case I forgot to consider          --- //
// -- Logic is a systematic way of going wrong with confidence --- //
// --------------------------------------------------------------- //
// --------------------------------------------------------------- //

//Problem link: https://www.hackerrank.com/contests/mid-term-exam-a-basic-data-structures-a-batch-08/challenges/queries-again-1

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


class Node {
    
    public: 
        int val;
        Node* next;
        Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int size(Node* head) {
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL) {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}

void print_L(Node* head) {
    Node* temp = head;

    cout << "L -> ";
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_R(Node* tail) {
    Node* temp = tail;

    cout << "R -> ";
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void push(Node* &head, Node* &tail, int idx, int val) {
    Node* newNode = new Node(val);

    if(idx > size(head)) {
        cout << "Invalid" << endl;
        return;
    }

    if(idx == 0) {
        if(head == NULL) {
            head = tail = newNode;
        }else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }else if(idx == size(head)) {
        if(head == NULL) {
            head = tail = newNode;
        }else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }else {
        Node* temp = head;
        for(int i = 0; i < idx-1; i++) temp = temp->next;

        newNode->next = temp->next;
        temp->next->prev = newNode;

        temp->next = newNode;
        newNode->prev = temp;
    }

    print_L(head);
    print_R(tail);
}

void solve() {
    Node* head = NULL;
    Node* tail = NULL;

    int n; cin >> n;
    while(n--) {
        int idx, val; cin >> idx >> val;
        push(head, tail, idx, val);
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