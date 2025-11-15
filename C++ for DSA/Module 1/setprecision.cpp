#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	cout << "Hello world!" << endl;

	double db = 3.252352;

	cout << fixed << setprecision(2) << db << endl;

	return 0;
}