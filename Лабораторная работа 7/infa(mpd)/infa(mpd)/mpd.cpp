#include <iostream>
#include <cmath>
using namespace std;
const double E = 1e-6;
double f(double x) {
	double d;
	d = 3.6 * x;
	return x - (1 / (3 + sin(d)));
}
int main() {
	double a, b, c;
	cin >> a >> b;
	while (abs(a - b) > E) {
		c = (b + a) / 2;
		if (f(a) * f(c) < 0) {
			b = c;
		}
		else {
			a = c;
		}
		cout << b;
		cout << endl;
	}
	cout << (a + b) / 2;
	return 0;
}