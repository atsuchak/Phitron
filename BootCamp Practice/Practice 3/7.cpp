#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int x; cin >> x;

	for (int i = 1; i <= 12; i++) cout << x << " * " << i << " = " << x*i << endl;

	return 0;
}