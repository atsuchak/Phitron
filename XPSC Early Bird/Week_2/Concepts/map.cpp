#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    map<int, int> mp;  // map<key, value>
    mp.insert({10, 20});
    mp.insert({11, 32});
    cout << "key 10 value: " << mp[10] << endl;

    mp[40] = 32;  // efficient insert
    mp[12] = 62;
    mp[40] = 4;  // doesn't store duplicate
    cout << "key 40 value: " << mp[40] << endl;

    cout << "Print mp: " << endl;
    for(auto it : mp) cout << it.first << " => " << it.second << endl;

    auto it = mp.find(11);
    if(it != mp.end()) cout << "Value of 11: " << it->second << endl;
    else cout << "Value not found" << endl;

    cout << endl;

    it = mp.find(12);
    if(it != mp.end()) {mp.erase(it); cout << "Erase 12" << endl; }
    else cout << "Key not found" << endl;

    cout << "map size: " << mp.size() << endl;
    cout << "map empty: " << mp.empty() << endl;

    it = mp.begin();  
    it++;  // itterator at 2nd position
    cout << it->first << " -> " << it->second << endl;

    it = mp.lower_bound(10);  // return greater or equal key of 20
    cout << "Lower bound: " << it->first << " -> " << it->second << endl;

    
    it = mp.upper_bound(10);  // return greater key of 20
    cout << "Upper bound: " << it->first << " -> " << it->second << endl;

    return 0;
}