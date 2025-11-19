#include <bits/stdc++.h>
using namespace std;

class Cricketer {

    public: 
    int jersey_no;
    char country[100];
};

void solve() {
    Cricketer* dhoni = new Cricketer;
    dhoni->jersey_no = 07;
    char temp[100] = "India";
    strcpy(dhoni->country, temp);

    Cricketer* kohli = new Cricketer;
    // kohli = dhoni;
    
    kohli->jersey_no = dhoni->jersey_no; 
    strcpy(kohli->country, dhoni->country);

    delete dhoni;
    cout << kohli->jersey_no << " " << kohli->country << endl;
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