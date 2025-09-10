#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++) cin >> a[i];

	cout << *max_element(a.begin(), a.end());

	return 0;
}