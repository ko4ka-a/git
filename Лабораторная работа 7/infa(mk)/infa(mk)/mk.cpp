#include <iostream>
#include <cmath>
using namespace std;
const double E = 1e-6;
double f(double x) {
	double d;
	d = 3.6 * x;
	return x - (1 / (3 + sin(d)));
}
double f_1(double x) {
	double h;
	h = 3.6 * x;
	return 1 + ((18 * cos(h)) / 5 * ((sin(h) + 3) * (sin(h) + 3)));
}
double x_1(double x) {
	return x - f(x) / f_1(x);
}
int main (){
	double b = 0.85;
	while (abs(x_1(b) - b) > E) {
		b = x_1(b);
	}
	cout << x_1(b);
	return 0;
}