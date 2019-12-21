#include<bits/stdc++.h>

using namespace std;

int main()
{
	int t ; 
	cin >> t;
	
	while(t--)
	{
		double P, S;	// P: Perimeter, S: Surface Area
		cin >> P >> S;


		double a, b, c;
		// We get optimal solution when two are equal.
		a = b = ( P - sqrt( pow(P,2) - 24 * S ) ) / 12;
		c = P / 4 - 2 * a;

		cout << fixed << setprecision(2) << a*b*c << '\n';
	}

	return 0;
}