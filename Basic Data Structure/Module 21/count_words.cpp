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

    map<string, int> mp;
    while(ss >> word) mp[word]++;  // O(nlogn)

    for(auto it : mp) cout << it.first << " " << it.second << endl;  // O(nlogn)

    return 0;
}