#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n; cin >> n;
    
    priority_queue<int> pq; // Non increasing
    priority_queue<int, vector<int>, greater<int>>  nonDecQue; // Non decreasing
 
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        pq.push(x);  // O(logn)
        nonDecQue.push(x);
    }

    cout << "Size: " << pq.size() << endl;

    cout << "Non increasing: ";
    while(!pq.empty()) {
        cout << pq.top() << " ";  // O(1)
        pq.pop();  // O(logn)
    }
    cout << endl;

    // empty? 1 : 0
    cout << "Empty: " << pq.empty() << endl;

    cout << "Non decreasing: ";
    while(!nonDecQue.empty()) {
        cout << nonDecQue.top() << " ";
        nonDecQue.pop();
    }
    cout << endl;


    return 0;
}