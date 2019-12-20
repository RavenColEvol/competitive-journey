#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define test while(t--)
#define MOD 1000000007

using namespace std;

int main()
{
	int n; 
	cin >> n;

	int r = 1;
	while(r * 5 < n)
	{
		n -= r*5;
		r *= 2;
	}

	string names[] = {"Sheldon","Leonard","Penny","Rajesh","Howard"};
	cout<<names[(n-1)/r]<<endl;

	return 0;
}