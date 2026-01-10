#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    list<int> ll;

    while(1) {
        int val; cin >> val;
        if(val == -1) break;

        ll.push_back(val);
    }

    auto left = ll.begin();
    auto right = ll.end();
    right--;

    bool isPalindrome = 1;
    while(left != right) {
        if(*left != *right) {
            isPalindrome = 0;
            break;
        }

        left++;
        if(left == right) break;
        right--;
    }

    (isPalindrome)? cout << "YES" << endl : cout << "NO" << endl;

    return 0;
}