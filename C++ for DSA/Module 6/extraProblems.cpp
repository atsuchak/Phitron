// //1
// #include <bits/stdc++.h>
// using namespace std;

// int main() {
// #ifndef ONLINE_JUDGE
//     // freopen("D:/File/input.txt", "r", stdin);
//     // freopen("D:/File/output.txt", "w", stdout);
// #endif

//     string st; cin >> st;
//     reverse(st.begin(), st.end());
//     cout << st;

//     while(cin >> st) {
//         reverse(st.begin(), st.end());
//         cout << " " << st;
//     }

//     return 0;
// }

// 2
#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    int t; cin >> t;
    while (t--) {
        string s1, s2; cin >> s1 >> s2;

        int i = 0;
        string st;
        while (i < s1.size() || i < s2.size()) {
            if (i < s1.size()) st += s1[i];
            if (i < s2.size()) st += s2[i];
            i++;
        }

        cout << st << endl;
    }

    return 0;
}
