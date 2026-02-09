#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> anotherPq;  //minimum priority queue
    
    pq.push(10);
    pq.push(6);
    pq.push(30);
    cout << pq.top() << endl;

    pq.push(100);
    cout << pq.top() << endl;

    pq.pop(); //100
    pq.pop(); //30

    cout << pq.top() << endl;

    return 0;
}