#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n = 63;
	// n = a^2 - b^2
	// step 1 : guess a.
	int a = ceil(sqrt(n));
	int b2 = a*a - n;
	int b = round(sqrt(b2));

	while(b*b != b2)
	{
		a = a + 1;
		b2 = a*a - n;
        b = round(sqrt(b2));
	}
	cout << a - b << a + b << endl;
	return 0;
}