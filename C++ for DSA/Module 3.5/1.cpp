#include <bits/stdc++.h>
using namespace std;

class Student {

    public:
    char name[100];
    int roll, math_marks, cls;
    char section;
    
};

void solve() {
    Student a, b, c;

    cin >> a.name >> a.roll >> a.section >> a.math_marks >> a.cls;
    cin >> b.name >> b.roll >> b.section >> b.math_marks >> b.cls;
    cin >> c.name >> c.roll >> c.section >> c.math_marks >> c.cls;

    int mx = max(max(a.math_marks, b.math_marks), c.math_marks);

    if(a.math_marks == mx) cout << a.name << endl;
    else if(b.math_marks == mx) cout << b.name << endl;
    else cout << c.name << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int t_case = 1;
    // cin >> t_case;

    while (t_case--) {
        solve();
    }

    return 0;
}