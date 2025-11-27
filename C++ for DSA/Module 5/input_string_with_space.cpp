#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;
    cin.ignore();

    string st;
    getline(cin, st);

    cout << "Int: " << n << endl;
    cout << "String: " << st << endl;

    return 0;
}