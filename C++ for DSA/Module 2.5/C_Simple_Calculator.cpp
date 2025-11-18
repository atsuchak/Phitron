#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);

    int t_case = 1;
    //cin >> t_case;

    while(t_case--) {
      long long a, b; cin >> a >> b;

      cout << a << " + " << b << " = " << a+b << endl;
      cout << a << " * " << b << " = " << a*b << endl;
      cout << a << " - " << b << " = " << a-b << endl;
    }

    return 0;
}