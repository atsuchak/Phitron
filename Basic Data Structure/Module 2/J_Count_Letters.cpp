#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    // freopen("D:/File/input.txt", "r", stdin);
    // freopen("D:/File/output.txt", "w", stdout);
#endif

    string st; cin >> st;

    vector<int> str(26, 0);
    for(auto it : st)
        str[it-97]++;

    
    // for(auto &it : str)
    //     if(it != 0) cout << char(it+97) << " : " << it << endl;

    for(int i = 0; i < str.size(); i++)
        if(str[i] != 0) cout << char(i+97) << " : " << str[i] << endl;

    return 0;
}