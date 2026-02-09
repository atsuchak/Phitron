#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    map<string, int> mp;
    mp["alpha"] = 2;
    mp["bita"] = 20;
    mp["gamma"] = 33;

    for(auto it : mp) cout << it.first << " " << it.second << endl;  //TC: O(NlogN)

    mp.count("hello")? cout << "Present" << endl : cout << "Not present" << endl;

    return 0;
}