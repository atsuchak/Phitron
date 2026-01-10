#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    list<int> ll;

    int n; cin >> n;
    while(n--) {
        int idx, val; cin >> idx >> val;

        if(idx > ll.size()) {
            cout << "Invalid" << endl;
            continue;
        }
        
        ll.insert(next(ll.begin(), idx), val);

        for(auto it : ll) cout << it << " ";
        cout << endl;

        ll.reverse();
        for(auto it : ll) cout << it << " ";
        cout << endl;

        ll.reverse();
    }

    return 0;
}