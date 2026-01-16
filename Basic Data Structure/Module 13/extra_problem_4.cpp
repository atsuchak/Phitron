//Problem link: https://www.naukri.com/code360/problems/min-stack_3843991

#include <bits/stdc++.h>
using namespace std;

class minStack
{
	// Write your code here.
	
	public:
		
		// Constructor
        stack<int> stk;
        stack<int> tmp;
		minStack() 
		{ 
			// Write your code here.
		}
		
		// Function to add another element equal to num at the top of stack.
		void push(int num)
		{
			// Write your code here.
            stk.push(num);
            if(tmp.empty()) tmp.push(num);
            else if(tmp.top() >= num) tmp.push(num);
		}
		
		// Function to remove the top element of the stack.
		int pop()
		{
			// Write your code here.
            if(stk.empty()) return -1;
            if(stk.top() == tmp.top()) tmp.pop();
            
            int str = stk.top();
            stk.pop();
            return str;
		}
		
		// Function to return the top element of stack if it is present. Otherwise return -1.
		int top()
		{
			// Write your code here.
            if(stk.empty()) return -1;
            return stk.top();
		}
		
		// Function to return minimum element of stack if it is present. Otherwise return -1.
		int getMin()
		{
			// Write your code here.
            if(tmp.empty()) return -1;
            return tmp.top();
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