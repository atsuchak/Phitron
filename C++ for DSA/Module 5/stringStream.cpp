#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    string st; 
    getline(cin, st);

    stringstream ss(st);
    string word;
    int cnt = 0;
    while(ss >> word) {
        cout << word << endl;
        cnt++;
    }

    cout << "Total word: " << cnt << endl;

    return 0;
}