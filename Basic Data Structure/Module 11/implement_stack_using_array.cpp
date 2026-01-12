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

    st.push(10);
    st.push(40);
    st.push(30);

    cout << "Stack top: " << st.top() << endl;

    st.pop();
    if(st.empty() == 0)
        cout << "Stack top(after pop): " << st.top() << endl;

    return 0;
}