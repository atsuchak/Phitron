#include <bits/stdc++.h>
using namespace std;

class Student {

    public: 
    int id;
    char name[100];
    char sec;
    int mrk; 
};

void solve() {

    Student a, b, c;

    cin >> a.id >> a.name >> a.sec >> a.mrk;
    cin >> b.id >> b.name >> b.sec >> b.mrk;
    cin >> c.id >> c.name >> c.sec >> c.mrk;

    int mx = max(max(a.mrk, b.mrk), c.mrk);

    if(mx == a.mrk) cout << a.id << " " << a.name << " " << a.sec << " " << a.mrk << endl;
    else if(mx == b.mrk) cout << b.id << " " << b.name << " " << b.sec << " " << b.mrk << endl;
    else cout << c.id << " " << c.name << " " << c.sec << " " << c.mrk << endl;

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int t_case = 1;
    cin >> t_case;

    while (t_case--) {
        solve();
    }

    return 0;
}