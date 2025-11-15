#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	cout << "Hello world!" << endl;

	int a = 8;

	if(a%2 == 0) {
		cout << "Even" << endl;
	}else {
		cout << "Odd" << endl;
	}

	return 0;
}