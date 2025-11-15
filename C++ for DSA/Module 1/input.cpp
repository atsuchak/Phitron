#include <iostream>

int main() {

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	std::cout << "Hello world!" << std::endl;

	int a; std::cin >> a;
	char ch; std::cin >> ch;
	double db; std::cin >> db;

	std::cout << a << " " << ch << std::endl;
	std::cout << db << std::endl;

	return 0;
}