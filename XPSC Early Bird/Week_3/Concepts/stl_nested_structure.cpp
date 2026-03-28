#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n; cin >> n;

    map<vector<int>, int> mp;

    vector<int> a(n);
    vector<int> b(n);
    vector<int> c(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    for(int i = 0; i < n; i++) cin >> c[i];
    
    mp[a] = 5;
    mp[b] = 12;
    mp[c] = 65;

    for(auto it : mp) {
        vector<int> v = it.first;
        for(auto val : v) cout << val << " ";
        
        cout << " =>  " << it.second << endl;
    }


    map<int, set<int>> mp_set;

    set<int> s1;
    s1.insert(5);
    s1.insert(2);
    s1.insert(2);
    
    set<int> s2;
    s2.insert(4);
    s2.insert(9);
    s2.insert(5);
    
    set<int> s3;
    s3.insert(1);
    s3.insert(6);
    s3.insert(8);
    s3.insert(12);

    mp_set[5] = s1;
    mp_set[7] = s2;
    mp_set[10] = s3;

    for(auto it : mp_set) {
        cout << it.first << " -> ";
        for(auto it : it.second) 
            cout << it << " ";
        cout << endl;
    }

    // lowerbound of a lowerbound
    int x = 6, y = 8;
    auto LB1 = mp_set.lower_bound(x);
    if(LB1 != mp_set.end()) {
        int ans = LB1->first;
        auto LB2 = mp_set[ans].lower_bound(y);
        cout << ans << endl;

        if(LB2 != mp_set[ans].end()) {cout << *LB2 << endl; cout << "Found" << endl;}
        else cout << "Not found" << endl;
    }else cout << "Not exists" << endl;

    return 0;
}