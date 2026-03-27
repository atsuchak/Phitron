#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    string st; cin >> st;

    cout << "Front: " << st.front() << endl;
    cout << "Back: " << st.back() << endl;

    st.pop_back();  // remove last char from st

    for(auto it: st) cout << it << " "; cout << endl;

    cout << "Sub string: ";
    cout << st.substr(0, 4) << endl;

    return 0;
}