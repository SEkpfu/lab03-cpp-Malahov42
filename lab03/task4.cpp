/* 4 a)
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	int n; double x;
	bool p = false;
	int a = 0;
	cout << "Введите целое число:"; cin >> n;
	cout << "Введите вещественное число:"; cin >> x;
	double r = cos(x);
	for (int i = 0; i < n; i++) {
		r = cos(x + r * a);
		if (p == false) {
			p == true;
			a = 1;
		}
	}
	cout << r;
	return 0;
}
*/

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(0, "");
	int n; double x;
	bool p = false;
	int a = 0;
	cout << "Введите целое число:"; cin >> n;
	cout << "Введите вещественное число:"; cin >> x;
	double r = sqrt(x);
	for (int i = 0; i < n; i++) {
		r = sqrt(x + r * a);
		if (p == false) {
			p == true;
			a = 1;
		}
	}
	cout << r;
	return 0;
}
