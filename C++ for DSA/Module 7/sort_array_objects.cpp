#include <bits/stdc++.h>
using namespace std;

class Student {

    public:
    string name;
    int roll, marks;
};

bool name (Student l, Student r) {
    return l.name < r.name;
}

bool roll (Student l, Student r) {
    return l.roll < r.roll;
}

bool marks (Student l, Student r) {
    return l.marks < r.marks;
}

bool cmp(Student l, Student r) {
    return (l.marks == r.marks)? l.roll < r.roll : l.marks > r.marks;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;

    Student st[n];
    for(int i = 0; i < n; i++) cin >> st[i].name >> st[i].roll >> st[i].marks;

    // sort(st, st+n, name);
    // cout << "According to name: " << endl;
    // for(int i = 0; i < n; i++) cout << st[i].name << " " << st[i].roll << " " << st[i].marks << endl;
    // cout << endl;

    // sort(st, st+n, roll);
    // cout << "According to roll: " << endl;
    // for(int i = 0; i < n; i++) cout << st[i].name << " " << st[i].roll << " " << st[i].marks << endl;
    // cout << endl;

    // sort(st, st+n, marks);
    // cout << "According to marks: " << endl;
    // for(int i = 0; i < n; i++) cout << st[i].name << " " << st[i].roll << " " << st[i].marks << endl;
    // cout << endl;

    sort(st, st+n, cmp);
    for(int i = 0; i < n; i++) cout << st[i].name << " " << st[i].roll << " " << st[i].marks << endl;
    cout << endl;

    return 0;
}