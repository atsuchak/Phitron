#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    string st = "Hello wrold";

    cout << "Size: " << st.size() << endl;
    cout << "Max size: " << st.max_size() << endl;
    cout << "Capacity: " << st.capacity() << endl;
    
    // st.clear();
    cout << "Clear: " << st << endl;

    if(st.empty()) cout << "Empty" << endl;
    else cout << "Not empty" << endl;

    st.resize(17, 's');  //declare extra space with char
    // st.resize(17);  //declare extra space without char
    cout << "Resize: " << st << endl;

    return 0;
}