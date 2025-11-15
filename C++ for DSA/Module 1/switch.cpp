#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	freopen("D:/Sublime file/input.txt", "r", stdin);
	freopen("D:/Sublime file/output.txt", "w", stdout);

	cout << "Hello world!" << endl;

	int a; cin >> a;
	char ch; cin >> ch;

	cout << "Day " << a << ": ";
	switch(a) {
	case 1:
		cout << "Saturday" << endl;
		break;
	case 2:
		cout << "Sunday" << endl;
		break;
	case 3:
		cout << "Monday" << endl;
		break;
	case 4:
		cout << "Tuesday" << endl;
		break;
	case 5:
		cout << "Wednesday" << endl;
		break;
	case 6:
		cout << "Thursday" << endl;
		break;
	case 7:
		cout << "Friday" << endl;
		break;
	default: 
		cout << "Wrong input" << endl;
		break;
	}

	cout << "Check num " << a << ": ";
	switch(a%2) {
	case 0:
		cout << "Even" << endl; 
		break;
	case 1: 
		cout << "Odd" << endl;
		break;
	default:
		cout << "Wrong input" << endl;
		break;
	}

	cout << "Alphabet " << ch << ": ";
	switch(ch) {
	case 'a':
		cout << "Vowel" << endl;
		break;
	case 'e':
		cout << "Vowel" << endl;
		break;
	case 'i':
		cout << "Vowel" << endl;
		break;
	case 'o':
		cout << "Vowel" << endl;
		break;
	case 'u':
		cout << "Vowel" << endl;
		break;
	default: 
		cout << "Consonent" << endl;
		break;
	}

	return 0;
}