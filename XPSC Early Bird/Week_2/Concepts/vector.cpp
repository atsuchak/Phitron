#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);

#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    int n; cin >> n;
    vector<int> vec;
    for(int i = 0; i < n; i++) {
        int x; cin >> x; 
        vec.push_back(x);  // insert element from last
    }

    vec.pop_back();  // remove last from last
    cout << "Print: ";
    for(int i = 0; i < vec.size(); i++) cout << vec[i] << " "; cout << endl;

    // print using iterator
    cout << "Print using iterator: ";
    for(auto it = vec.begin(); it != vec.end(); it++) 
        cout << *it << " "; cout << endl;

    // print using reverse iterator
    cout << "Print reverse iterator: ";
    for(auto it = vec.rbegin(); it != vec.rend(); it++) 
        cout << *it << " "; cout << endl;

    cout << "Front: " << vec.front() << endl;  // return 1st value of the vector
    cout << "Back: " << vec.back() << endl;  // return lst value of the vector

    cout << "Last ele(iterator): ";
    auto lastEl = vec.end()-1;
    cout << *lastEl << endl;

    reverse(vec.begin(), vec.end());
    cout << "Reverse: ";
    for(auto it : vec) cout << it << " "; cout << endl;

    sort(vec.begin(), vec.end());
    cout << "Sort: ";
    for(auto it: vec) cout << it << " "; cout << endl;

    cout << "Min element: ";
    cout << *min_element(vec.begin(), vec.end()) << endl;
    
    cout << "Max element: ";
    cout << *max_element(vec.begin(), vec.end()) << endl;

    cout << "Empty: " << vec.empty() << endl;  // return 0 or 1

    vec.clear(); // remove all element form vec

    vector<int> a(n, 10);  // initially assign vector with value 10
    a.assign(n, 4);  // assign later
    
    a.resize(8);  // resize the vector


    return 0;
}