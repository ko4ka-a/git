#include <iostream>
using namespace std;
template <typename x1,typename x2>
auto f(x1 a, x2 b) 
{
	return (a + b);
}
int zn(int b,int d)
{
	int zn = b * d;
	return zn;
}
int ch(int a, int b, int c, int d)
{
	int ch = (a * d) + (b * c);
	return ch;
}
int main() 
{
	setlocale(LC_ALL, "RU");
	cout <<"Сложение десятичных дробей: "<< f(0.33, 0.41)<<endl;
	cout <<"Сложение обыкновенных дробей: " << ch(6,2,3,9)<<"/"<<zn(7,3);
	return 0;
}

