#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n; cin >> n;

    multiset<int> mst;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        mst.insert(x);
    }

    cout << "Print multiset: ";
    for(auto it : mst) cout << it << " ";
    cout << endl;

    // find an element from a multiset
    auto it = mst.find(3);  // O(logn)
    cout << "mst.find(3): ";
    if(it != mst.end()) cout << "Found" << endl;
    else cout << "Not Found" << endl;

    // erase an element from a multiset
    if(mst.find(4) != mst.end()) mst.erase(4);  // 1 element: O(logn); 1+ element: O(logn + k)
    cout << "mst.erase(4): ";
    for(auto it : mst) cout << it << " ";
    cout << endl;

    // erase only 1 element
    it = mst.find(2);
    mst.erase(it);  // O(logn + logn) == O(2logn)
    cout << "mst.erase(2): ";
    for(auto it : mst) cout << it << " ";
    cout << endl;

    // return how many times a elemnet exists
    cout << "Count(2): " << mst.count(2) << endl;  // 1 element: O(logn); 1+ element: O(logn + k)

    // Lower bound: return exact or imediate upper value
    it = mst.lower_bound(3);
    if(it != mst.end()) cout << "Lower bound(3): " << *it << endl;
    else cout << "Not found" << endl;

    // Lower bound: return imediate upper value
    it = mst.upper_bound(4);
    if(it != mst.end()) cout << "Upper bound(4): " << *it << endl;
    else cout << "Not found" << endl;

    return 0;
}