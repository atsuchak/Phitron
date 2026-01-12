#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    stack<int> st;

    int n; cin >> n;
    while(n--) {
        int x; cin >> x;
        st.push(x);
    }

    cout << "Stack: " << endl;
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}