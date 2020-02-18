#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long r, c; cin >> r >> c;
	long long temp = ( r / 2 - !(r&1))*10;
	cout << temp + (r&1 ? 2*(c-1) : 2*c - 1) << endl;
	return 0;
}