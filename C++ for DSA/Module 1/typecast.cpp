#include <iostream>
using namespace std;

int main() {

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	cout << "Hello world!" << endl;

	int a; cin >> a;
	char ch; cin >> ch;
	double db; cin >> db;

	cout << a << " " << ch << std::endl;
	cout << db << std::endl;
	cout << "With typecase: " << endl;
	cout << (char)a << " " << (int)ch << std::endl;

	return 0;
}