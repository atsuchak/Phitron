#include <bits/stdc++.h>
using namespace std;

class Student {
    
    public: 
    char name[100];
    int age;
    double gpa;
};

void solve() {
    Student a, b, c;
    
    char temp[100] = "murgi";
    strcpy(a.name, temp);
    a.age = 14;
    a.gpa = 3.45;

    cin.getline(b.name, 100);
    cin >> b.age >> b.gpa;
    cin.ignore();

    cin.getline(c.name, 100);
    cin >> c.age >> c.gpa;
    cin.ignore();

    cout << "Student a name: " << a.name << endl;
    cout << "Student a age: " << a.age << endl;
    cout << "Student a gpa: " << a.gpa << endl << endl;

    cout << "Student b name: " << b.name << endl;
    cout << "Student b age: " << b.age << endl;
    cout << "Student b gpa: " << b.gpa << endl << endl;

    cout << "Student c name: " << c.name << endl;
    cout << "Student c age: " << c.age << endl;
    cout << "Student c gpa: " << c.gpa << endl << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif  

    int t_case = 1;
    // cin >> t_case;

    while (t_case--) {
        solve();
    }

    return 0;
}