#include <bits/stdc++.h>
using namespace std;

class Cricketer {

    public: 
    int jersey;
    string country;

    Cricketer(int jersey, string country) {
        this->jersey = jersey;
        this->country = country;
    }
};

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    Cricketer* dhoni = new Cricketer(100, "India");
    Cricketer* kohli = new Cricketer(60, "India");

    *kohli = *dhoni;

    delete dhoni;
    cout << kohli->jersey << " " << kohli->country << endl;

    return 0;
}