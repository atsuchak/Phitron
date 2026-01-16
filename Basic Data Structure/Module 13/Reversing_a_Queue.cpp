//Problem link: https://www.naukri.com/code360/problems/reversing-a-queue_982934

#include <bits/stdc++.h>
using namespace std;

queue<int> reverseQueue(queue<int> q)
{
    // Write your code here.
    stack<int> st;
    while(!q.empty()) {
        st.push(q.front());
        q.pop();
    }

    while(!st.empty()) {
        q.push(st.top());
        st.pop();
    }
    return q;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    //main code

    return 0;
}