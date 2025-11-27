#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    string st; cin >> st;

    cout << "Using index: " << st[1] << endl;
    cout << "Using at: " << st.at(2) << endl;
    cout << "Using front: " << st.front() << endl;
    cout << "Using back: " << st.back() << endl;

    return 0;
}