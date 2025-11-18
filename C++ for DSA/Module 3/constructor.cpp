#include <bits/stdc++.h>
using namespace std;

class Student {

    public:
    int age, roll;
    double cgpa;

    Student(int a, int r, double gpa) {
        age = a;
        roll = r;
        cgpa = gpa;
    }
};

void solve() {
    Student rahim(25, 2, 3.4);

    int age, roll, gpa;
    cin >> age >> roll >> gpa;
    Student karim(age, roll, gpa);

    cout << "Rahim age: " << rahim.age << endl;
    cout << "Rahim roll: " << rahim.roll << endl;
    cout << "Rahim gpa: " << rahim.cgpa << endl << endl;

    cout << "Karim age: " << karim.age << endl;
    cout << "Karim roll: " << karim.roll << endl;
    cout << "Karim gpa: " << karim.cgpa << endl << endl;

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