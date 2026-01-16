//Problem link: https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/description/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        // st.push(s[0]);

        for(int i = 0; i < s.size(); i++){
            if(st.empty()) st.push(s[i]);
            else if(s[i] == st.top()) st.pop();
            else st.push(s[i]);    
        }

        stack<char> tmp;
        while(!st.empty()) {
            tmp.push(st.top());
            st.pop();
        }

        s = "";
        while(!tmp.empty()) {
            s.push_back(tmp.top());
            tmp.pop();
        }

        return s;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    //main code

    return 0;
}