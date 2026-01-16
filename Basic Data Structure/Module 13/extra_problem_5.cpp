//Problem link: https://www.naukri.com/code360/problems/kevin-s-stack-problem_1169465

#include <bits/stdc++.h>
using namespace std;

string kevinStackProblem(string &s)
{
	// Write your code here.
    stack<char> st;
    for(int i = 0; i < s.size(); i++) 
        st.push(s[i]);

    s = "";
    while(!st.empty()) {
        s.push_back(st.top());
        st.pop();
    }

    return s;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    //main code

    return 0;
}