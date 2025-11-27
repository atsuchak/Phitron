#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    string st = "Hello";
    st = "Gello";

    cout << st << endl;

    string st2 = "Mello";

    if(st == st2) cout << "Same" << endl;
    else cout << "Not same" << endl;

    return 0;
}