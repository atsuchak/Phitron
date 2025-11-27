#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    string st = "Hello Bangladesh";

    cout << "Begin it: " << *st.begin() << endl;
    cout << "End it: " << *(st.end()-1) << endl;

    cout << "Traverse using it: " << endl;
    for(auto it = st.begin(); it < st.end(); it++) 
        cout << *it << " ";

    

    return 0;
}