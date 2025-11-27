#include <bits/stdc++.h>
using namespace std;

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    string st = "Hello";
    string st2 = "Gello";

    st2.append(st);
    cout << "Append: " << st2 << endl;

    st[1] = 'o';
    st.back() = 'a'; 
    cout << "Chng idx(1, 4): " << st << endl;

    st += "siuuu";
    cout << "Concate: " << st << endl;

    st.push_back('A');
    cout << "Push back: " << st << endl;

    st.pop_back();
    cout << "Pop back: " << st << endl;

    st.erase(5, 5);
    cout << "Erase: " << st << endl;

    st.replace(1, 4, "i Bangladesh");
    cout << "Replace: " << st << endl;

    st.insert(13, ", Bye");
    cout << "Insert: " << st << endl;

    return 0;
}