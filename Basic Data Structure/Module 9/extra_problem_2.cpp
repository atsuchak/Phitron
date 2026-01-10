#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    list<int> ll;

    int val;
    while(1) {
        cin >> val;
        if(val == -1) break;

        ll.push_back(val);
    }    

    ll.reverse();
    for(int it : ll) cout << it << " ";

    return 0;
}