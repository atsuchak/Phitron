#include <bits/stdc++.h>
using namespace std;

class Student {

    public:
    string name;
    int roll, marks;
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;

    Student st[n];
    for(int i = 0; i < n; i++) cin >> st[i].name >> st[i].roll >> st[i].marks;

    Student mn;
    mn.marks = INT_MAX;

    for(int i = 0; i < n; i++) 
        if(st[i].marks < mn.marks) mn = st[i];
    
    cout << mn.name << " " << mn.roll << " " << mn.marks << endl;

    return 0;
}