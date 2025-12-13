#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n = 5;  // tc -> O(1)
    int sum = 10 + n;  // tc -> O(1)

    for(int i = 0; i < n; i++)  // tc -> O(n+1) 
        cout << "Ohe" << endl;  // tc -> O(n)

    cout << endl;  // tc -> O(1)

    for(int i = 0; i < sum/2; i += 2)  // tc -> O(n/2 + 1)
        cout << "Hmm" << endl;   // tc -> O(n/2)

    /*
        Total tc -> O(n);
    */

    return 0;
}