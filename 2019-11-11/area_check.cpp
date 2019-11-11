#include <iostream>
#include <cmath>
using namespace std;
bool isBelowFunction(double n, double m)
{
	if (n + m <= 6)
		return true;
	else
		return false;
}
bool isInSquare(double n, double m)
{
	if ((n >= 2 && m <= 7) && (m >= 2 && m <= 7))
		return true;
	else
		return false;
}
bool isInTriangle(double n, double m)
{
	if (isInSquare(n, m) && isBelowFunction(n, m))
		return true;
	else
		return false;
}
double line(double a,double b,double n, double m)
{
//a - x of the center
//b - y of the center
//n - x of the line
//m - y of the line
	n = n - a;
	m = m - b;
	return sqrt((n * n) + (m * m));

}

int main()
{
	double a=4, b=0, n, m;
	cout << "n= ";
	cin >> n;
	cout << "m= ";
	cin >> m;

	
	
	if ((line(a, b, n, m) <= 2 && line(a, b, n, m) >= 1) || isInTriangle(n, m))
	{
		cout << "YES!" << endl;
	}
	else {
		cout << "No!" << endl;
	}
	return 0;
}
