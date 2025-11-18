#include <bits/stdc++.h>
using namespace std;

class Student {
   public:
    int age, roll;
    double cgpa;

    Student(int age, int roll, double cgpa) {
        this->age = age;
        this->roll = roll;
        this->cgpa = cgpa;
    }
};

Student* func() {
    Student* rahim = new Student(25, 45, 4.4);
    return rahim;
}

void solve() {
    Student* temp = func();

    cout << "Rahim age: " << temp->age << endl;
    cout << "Rahim roll: " << temp->roll << endl;
    cout << "Rahim gpa: " << temp->cgpa << endl;
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