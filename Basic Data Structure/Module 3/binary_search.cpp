#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;

    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];

    int x; cin >> x; 

    int l = 0, r = n-1;
    
    bool flag = 0;
    while(l <= r)  {
        int mid = (l+r)/2;
        
        if(a[mid] == x) {
            flag = 1;
            break;
        }
        else if(a[mid] > x) r = mid - 1;
        else l = mid + 1;
    }

    if(flag) cout << "Found" << endl;
    else cout << "Not found" << endl;

    return 0;
}