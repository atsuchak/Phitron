//Problem link: https://www.naukri.com/code360/problems/insert-an-element-at-its-bottom-in-a-given-stack_1171166

#include <bits/stdc++.h>
using namespace std;

stack<int> pushAtBottom(stack<int>& myStack, int x) 
{
    // Write your code here.
    stack<int> temp;
    while(!myStack.empty()) {
        temp.push(myStack.top());
        myStack.pop();
    }

    myStack.push(x);
    while(!temp.empty()) {
        myStack.push(temp.top());
        temp.pop();
    }

    return myStack;
}


int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    //main code

    return 0;
}