#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t, a, b, side;
	cin >> t;
	while(t--) {
		cin >> a >> b;
		side = __gcd(a,b);
		cout << (a*b)/(side*side) << endl;
	}
	return 0;
}