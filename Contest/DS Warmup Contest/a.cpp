#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int a, b; cin >> a >> b;
    
    cout << a/b << " " << a%b << " " << fixed << setprecision(1) << (double)a/b << endl;

    return 0;
}