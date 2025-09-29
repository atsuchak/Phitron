#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define all(x) (x).begin(), (x).end()

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n; cin >> n;
	bool check = 0;

	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0) {
			cout << i << endl;
			check = 1;
		}
	}

	if (!check) cout << -1 << endl;


	return 0;
}