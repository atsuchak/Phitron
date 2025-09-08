#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int a, b; cin >> a >> b;

	(a % b == 0 || b % a == 0) ? cout << "Multiples" : cout << "No Multiples";

	return 0;
}