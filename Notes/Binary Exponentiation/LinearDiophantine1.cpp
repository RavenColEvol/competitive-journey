#include<iostream>

using namespace std;

int gcd(int a, int b, int& x, int& y)
{
	if(a == 0)
	{
		x = 0;
		y = 1;
		return b;
	}
	int x1, y1;
	int d = gcd(b%a, a, x1, y1 );
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}

bool find_any_solution( int a, int b, int c, int& x, int& y, int& g)
{
	g = gcd(abs(a), abs(b), x , y);
	if(c % g)
		return false;

	x *= c / g;
	y *= c / g;

	if(a < 0) x = -x;
	if(b < 0) y = -y;
	return true;
}

int main()
{
	int x, y ,g;
	cout << find_any_solution(3, 5, 10, x, y , g) << endl;
	cout << x << y << g << endl;
	return 0;
}