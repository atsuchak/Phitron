#include <bits/stdc++.h>
using namespace std;

class myStack {

    public:
    list<int> ll;

    void push(int val) {
        ll.push_back(val);
    }

    void pop() {
        ll.pop_back();
    }

    int top() {
        return ll.back();
    }

    int size() {
        return ll.size();
    }

    bool empty() {
        return ll.empty();
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