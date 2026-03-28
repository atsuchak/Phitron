#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n; cin >> n;

    set<int> st;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        st.insert(x);  // O(logn)
    }

    cout << "Print set: ";
    for(auto it : st) cout << it << " ";
    cout << endl;

    // find an element from a set
    auto it = st.find(3);  // O(logn)
    if(it != st.end()) cout << "Found" << endl;
    else cout << "Not Found" << endl;

    // erase an element from a set
    if(st.find(4) != st.end()) st.erase(4);
    cout << "St.erase(4): ";
    for(auto it : st) cout << it << " ";
    cout << endl;

    // return 1 or 0 if a element exists in a set
    cout << "Count(2): " << st.count(2) << endl;  // O(logn)

    // clear the whole set
    st.clear();
    cout << "St.clear(): ";
    for(auto it : st) cout << it << " ";
    cout << endl;

    for(int i = 3; i <= 8; i++) st.insert(i);
    for(auto it : st) cout << it << " ";
    cout << endl;

    // Lower bound: return exact or imediate upper value
    it = st.lower_bound(3);
    if(it != st.end()) cout << "Lower bound(3): " << *it << endl;
    else cout << "Not found" << endl;

    // Lower bound: return imediate upper value
    it = st.upper_bound(4);
    if(it != st.end()) cout << "Upper bound(4): " << *it << endl;
    else cout << "Not found" << endl;

    return 0;
}