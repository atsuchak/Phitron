#include <bits/stdc++.h>
using namespace std;

class Student {

    public:
    string name;
    int roll, math, eng;

    Student(string name, int roll, int math, int eng) {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->eng = eng;
    }

    void hello() {
        cout << "Hello from " << name << endl;
    }

    void total() {
        cout << "Total mark of " << name << ": " << math+eng << endl;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Student sakib("Sakib noob", 32, 65, 34);
    sakib.hello();
    sakib.total();

    Student rakib("Rakib pro", 23, 87, 99);
    rakib.hello();
    rakib.total();

    return 0;
}