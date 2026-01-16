//Problem link: https://leetcode.com/problems/min-stack/description/

#include <bits/stdc++.h>
using namespace std;

class MinStack {
public:

    stack<int> st;
    stack<int> tmp;
    MinStack() {

    }
    
    void push(int val) {
        st.push(val);
        if(tmp.empty()) tmp.push(val);
        else if(val <= tmp.top()) tmp.push(val);
    }
    
    void pop() {
        if(tmp.top() == st.top()) tmp.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return tmp.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    //main code

    return 0;
}