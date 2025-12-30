#include <bits/stdc++.h>
using namespace std;

int func_without_ref(int* p) {  //p changed if it address to a new value
    int y = 200;
    p = &y;

    cout << "In func: " << *p << endl;
}

int func_with_ref(int* &p) {  //p not changed as it is pass by refference
    int y = 200;
    p = &y;

    cout << "In func: " << *p << endl;
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int x = 10;
    int* p = &x;
    
    func_without_ref(p);
    cout << "In main(without): " << *p << endl;
    
    // func_with_ref(p);
    // cout << "In main(with): " << *p << endl;

    return 0;
}


/*
    both p are not same because when the y's address assign to the p in function that time the p is not addressing to the x
*/