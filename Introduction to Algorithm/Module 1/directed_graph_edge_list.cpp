#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n, e; cin >> n >> e;

    vector<pair<int,int>> edgeList;
    for(int i = 0; i < e; i++) {
        int a, b; cin >> a >> b;

        edgeList.push_back(make_pair(a, b));
    }

    for(auto it : edgeList) cout << it.first << " -> " << it.second << endl;

    return 0;
}