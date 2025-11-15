#include <iostream>
#include <algorithm>
using namespace std;

int main() {

  freopen("D:/Sublime file/input.txt", "r", stdin);
  freopen("D:/Sublime file/output.txt", "w", stdout);

   int a, b; cin >> a >> b;

   cout << "Min: " << min(a, b) << endl;
   cout << "Min(many): " << min({4, 2, 6, 1, 6 , 4, 7, 3}) << endl;
   cout << "Max: " << max(a, b) << endl;
   cout << "Max(many): " << max({4, 2, 6, 1, 6 , 4, 7, 3}) << endl;

   cout << "Before swap: " << a << " " << b << endl;
   swap(a, b);
   cout << "After swap: " << a << " " << b << endl;

  return 0;
}