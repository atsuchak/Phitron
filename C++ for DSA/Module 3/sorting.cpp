#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Ascending to n-2: ";
    sort(arr, arr + n - 2);  // sort upto n-2 element
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    sort(arr, arr + n);  // ascending
    cout << "Ascending: ";
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;

    cout << "Descending: ";
    sort(arr, arr + n, greater<int>());  // descending order sort
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
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