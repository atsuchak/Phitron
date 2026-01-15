#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    queue<int> qu; 

    int n; cin >> n;
    while(n--) {
        int x; cin >> x;
        qu.push(x);
    }
    
    cout << "Queue front: " << qu.front() << endl;
    cout << "Queue back: " << qu.back() << endl;
    cout << "Queue size: " << qu.size() << endl;
    
    cout << "Queue: " << endl; 
    while(!qu.empty()) {
        cout << qu.front() << " ";
        qu.pop();
    }
    cout << endl;


    return 0;
}