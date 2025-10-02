/* 1 a)
#include <iostream>
using namespace std;
int main() {
	double tC = 0;
	while (tC < 101) {
		cout << "tC=" << tC<<endl;
		cout << "tF=" << 9.0 / 5.0 * tC + 32.0<<endl;
		tC += 10;
	}
	return 0;
}
*/

/* 1 b)
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double x = 0, y = 0;
	do {
		y = log(x + 1) * sin(x);
		cout << "y=" << y << endl;
		x += 0.5;
	} while (x <= 5);
	return 0;
}
*/


/* 1 c)
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double step = M_PI / 6;
	for (double x = 0; x <= 2 * M_PI; x += step) {
		double y=cos(x);
		cout << x << "          " << y<<endl;
	}
	return 0;
}
*/

/* 1 d)
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	double y;
	for (double x = -1.5; x >= -1.5 && x <= 1.5; x += 0.25) {
		if (x < 0.5) {
			y = 1 + sqrt(abs(cos(x)));
		}
		else if (x > 1) {
			y = 1 - (x * x);
		}
		else {
			y = x + 1;
		}
		cout << x << "        " << y << endl;
	}
	return 0;
}
*/