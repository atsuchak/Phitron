#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;

    deque<int> dq(n);  // take 2x space then vector
    for(int i = 0; i < n; i++) {
        cin >> dq[i];
    }

    dq.push_front(98);  // insert at 0th idx
    dq.push_front(38);
    
    dq.pop_front();  // delete element from 0th idx

    for(auto it : dq) cout << it << " "; cout << endl;

    cout << "Front: " << dq.front() << endl;
    cout << "Back: " << dq.back() << endl;

    return 0;
}