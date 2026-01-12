#include <bits/stdc++.h>
using namespace std;

class myStack {

    public:
    vector<int> v;

    void push(int val) {
        v.push_back(val);
    }

    void pop() {
        v.pop_back();
    }

    int top() {
        return v.back();
    }

    int size() {
        return v.size();
    }

    bool empty() {
        return v.empty();
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    myStack st;

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