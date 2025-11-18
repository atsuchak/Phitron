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

Student func() {
    Student rahim(25, 2, 3.4);
    return rahim;
}

void solve() {
    Student ans = func();

    cout << "Rahim age: " << ans.age << endl;
    cout << "Rahim roll: " << ans.roll << endl;
    cout << "Rahim gpa: " << ans.cgpa << endl;
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