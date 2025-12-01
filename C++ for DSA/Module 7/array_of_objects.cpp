#include <bits/stdc++.h>
using namespace std;

class Student {

    public: 
    string name;
    int marks, roll;
 
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;
    cin.ignore();

    Student a[n];
    for(int i = 0; i < n; i++) {
        getline(cin, a[i].name); 
        cin >> a[i].marks >> a[i].roll;
        cin.ignore();
    }

    for(int i = 0; i < n; i++) cout << a[i].name << " " << a[i].marks << " " << a[i].roll << endl;

    return 0;
}