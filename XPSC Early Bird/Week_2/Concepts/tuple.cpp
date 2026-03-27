#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    tuple<string, int, string> student = {"Rahim", 23, "Mirpur"};

    // auto [name, roll, address] = student;
    // cout << name << " " << roll << " " << address << endl;

    cout << get<0>(student) << " " << get<1>(student) << " " << get<2>(student) << endl;

    return 0;
}