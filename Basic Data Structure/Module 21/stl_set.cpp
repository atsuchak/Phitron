#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;

    vector<int> a(n);
    for(auto &it : a) cin >> it;

    cout << "Vector: ";
    for(auto it : a) cout << it << " ";
    cout << endl;
    
    set<int> st;
    for(auto it: a) st.insert(it);  //O(logn)
    
    cout << "Set: ";
    for(auto it: st) cout << it << " ";
    cout << endl;

    st.count(6)? cout << "Present" << endl : cout << "Not present" << endl;

    return 0;
}