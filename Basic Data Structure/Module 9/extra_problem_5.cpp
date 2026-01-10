#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    list<int> ll;

    while(1) {
        int val; cin >> val;
        if(val == -1) break;

        ll.push_back(val);
    }

    ll.sort();
    for(auto it : ll) cout << it << " ";
    cout << endl;

    return 0;
}