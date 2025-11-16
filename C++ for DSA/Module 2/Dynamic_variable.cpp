#include <bits/stdc++.h>
using namespace std;

int* add;

void static_var() {
    int a = 10;
    add = &a;

    cout << "Static func: " << *add << endl;
    return;
}

void dynamic_var() {
    int* a = new int;
    *a = 10;
    add = a;

    cout << "Dynamic func: " << *add << endl;
    return;
}

int main() {
    
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);

    static_var();
    cout << "Main func(satic): " << *add << endl;

    dynamic_var();
    cout << "Main func(dynamic): " << *add << endl;

    return 0;
}