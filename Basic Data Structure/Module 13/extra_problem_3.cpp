//Problem link: https://www.naukri.com/code360/problems/reverse-first-k-elements-of-queue_982771

#include <bits/stdc++.h>
using namespace std;

queue<int> reverseElements(queue<int> q, int k)
{
    // Write your code here.
    queue<int> qTmp;
    while(k--) {
        qTmp.push(q.front());
        q.pop();
    }

    stack<int> sTmp;
    while(!qTmp.empty()) {
        sTmp.push(qTmp.front());
        qTmp.pop();
    }

    while(!sTmp.empty()) {
        qTmp.push(sTmp.top());
        sTmp.pop();
    }

    while(!q.empty()) {
        qTmp.push(q.front());
        q.pop();
    }

    return qTmp;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    //main code

    return 0;
}