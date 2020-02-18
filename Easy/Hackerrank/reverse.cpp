#include<bits/stdc++.h>
#define in cin >>
using namespace std;

int main()
{
	int t; in t;
	while(t--) {

		int n, q;
		cin >> n >> q;
		int mid = n / 2;
		if(q < mid) cout << (1 + 2*q) << endl;
		else cout << (n - 1 - 2*(q - mid)) - !(n&1) << endl;
	}
	return 0;
}