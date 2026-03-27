#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    pair<string, int> student = {"Rahim", 10};
    // pair<string, int> student = make_pair("Rahim", 10);  // using make pair function

    cout << student.first << " " << student.second << endl;
    
    // auto [name, id] = student;
    // cout << name << " " << id << endl;  // using auto key word(only for g++ 17 or more)
    
    student.first = "Karim";  // modify value
    cout << student.first << " " << student.second << endl;
    cout << endl;

    // nested pair
    pair <string, pair<int, string>> stu = {"Balbu", {15, "Mirpur"}};
    cout << "Nested pair: " << endl;
    cout << stu.first << " " << stu.second.first << " " << stu.second.second << endl << endl;

    int n; cin >> n;
    pair<string, int> students[n];
    for(int i = 0; i < n; i++) cin >> students[i].first >> students[i].second;
    
    for(int i = 0; i < n; i++) cout << students[i].first << " " << students[i].second << endl;
    cout << endl;

    // ranged base for loop
    cout << "Range base loop: " << endl;
    for(auto it : students) cout << it.first << " " << it.second << endl;
    

    return 0;
}