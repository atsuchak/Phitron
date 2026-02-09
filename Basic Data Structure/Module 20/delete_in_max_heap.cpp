#include <bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &a, int val) {
    a.push_back(val);

    int curr_idx = a.size()-1; 

    while(curr_idx != 0) {
        int par_idx = (curr_idx-1)/2; 

        if(a[par_idx] < a[curr_idx]) swap(a[par_idx], a[curr_idx]);
        else break;

        curr_idx = par_idx;
    }
}

void print_heap(vector<int> a) {
    for(int it : a) cout << it << " ";
    cout << endl;
}

void delete_head(vector<int> &a) {
    cout << a[0] << " deleted" << endl;

    a[0] = a.back();
    a.pop_back();
 
    int curIdx = 0;
    while(1) {
        int leftIdx = curIdx*2 + 1;
        int rightIdx = curIdx*2 + 2;

        int leftVal = INT_MIN, rightVal = INT_MIN;
        if(leftIdx < a.size()) leftVal = a[leftIdx];
        if(rightIdx < a.size()) rightVal = a[rightIdx];

        if(leftVal >= rightVal && leftVal > a[curIdx]) {
            swap(a[leftIdx], a[curIdx]);
            curIdx = leftIdx;
        }else if(leftVal > leftVal && rightVal > a[curIdx]) {
            swap(a[rightIdx], a[curIdx]);
            curIdx = rightIdx;
        }else break;
    }
}

int main() {
#ifndef ONLINE_JUDGE
    freopen("D:/File/input.txt", "r", stdin);
    freopen("D:/File/output.txt", "w", stdout);
#endif

    vector<int> a;

    int n; cin >> n;
    for(int i = 0; i < n; i++) {
        int val; cin >> val; 
        insert_heap(a, val);
    }

    cout << "Before delete: ";
    print_heap(a);

    delete_head(a);
    cout << "After delete: ";
    print_heap(a);
    
    delete_head(a);
    cout << "After delete: ";
    print_heap(a);
    
    delete_head(a);
    cout << "After delete: ";
    print_heap(a);
    
    delete_head(a);
    cout << "After delete: ";
    print_heap(a);

    return 0;
}