#include <bits/stdc++.h>
using namespace std;

class myQueue {
    
    public: 
    list<int> ll;

    void push(int val) {  //O(1)
        ll.push_back(val);
    }

    void pop() {  //O(1)
        ll.pop_front();
    }

    int front() {  //O(1)
        return ll.front();
    }
    
    int back() {  //O(1)
        return ll.back();
    }

    int size() {
        return ll.size();
    }

    bool empty() {
        return ll.empty();
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    myQueue qu;

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

    return 0;
}