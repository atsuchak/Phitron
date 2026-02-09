#include <bits/stdc++.h>
using namespace std;

class Student {
    public:
        string name; 
        int roll;
        int marks;

        Student(string name, int roll, int marks) {
            this->name = name;
            this->roll = roll;
            this->marks = marks;
        }
};

class cmp {
    public:
        bool operator()(Student left, Student right) {
            if(left.marks == right.marks) return left.roll > right.roll;
            return left.marks > right.marks;
        }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    priority_queue<Student, vector<Student>, cmp> pq;
    int n; cin >> n; 
    while(n--) {
        string name; cin >> name;
        int roll, marks; cin >> roll >> marks;

        Student obj(name, roll, marks);
        pq.push(obj);
    }

    while(!pq.empty()) {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }

    return 0;
}