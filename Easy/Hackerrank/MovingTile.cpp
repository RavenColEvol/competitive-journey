#include<bits/stdc++.h>
using namespace std ;

int main()
{
	long long l, s[2], q, a;
	cin >> l >> s[0] >> s[1] >> q;
	for(long long i = 0; i < q; i++) {
		cin >> a;
		cout << fixed << setprecision(50);
		cout << (float)(sqrt(2)*(l - sqrt(a)))/abs(s[0]-s[1]) << endl;
	}
	return 0;
}