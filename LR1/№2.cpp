#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x = 2.444, y = 0.869 * pow(10, -2), z = -0.13 * pow(10, 3), h, pi = 3.1415926;
	h = (pow(x, y + 1) + exp(y - 1)) / (1 + x * fabs(y - tan(z))) * (1 + fabs(y - x)) + (pow(fabs(y - x), 2) / 2) - (pow(fabs(y - x), 3) / 3);
	cout << "h = " << h << endl;
	//задание 2 (1)
	double x1 = 3.251, y1 = 0.325, z1 = 0.466 * pow(10, -4), c;
	c = (pow(2, pow(y1, x1)) + pow(3, x1 * y1)) - (y1 * (atan(z1) - pi / 6)) / (fabs(x1) + (1 / (pow(y1, 2) + 1)));
	cout << "c = " << c;
	//задание 2 (2)
}
