#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	double s = 0;
	for (int i = 2; i <= 2 * n; i += 2) {
		s += 1.0 /i;
	}
	cout << s;
	return 0;
}