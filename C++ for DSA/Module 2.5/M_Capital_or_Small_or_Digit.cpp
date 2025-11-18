#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);

    int t_case = 1;
    // cin >> t_case;

    while (t_case--) {
        char ch;
        cin >> ch;

        if (ch >= '0' && ch <= '9')
            cout << "IS DIGIT" << endl;
        else if (ch >= 'A' && ch <= 'Z')
            cout << "ALPHA\n"
                 << "IS CAPITAL" << endl;
        else
            cout << "ALPHA\n"
                 << "IS SMALL" << endl;
    }

    return 0;
}