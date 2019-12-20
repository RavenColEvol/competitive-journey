#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define test while(t--)
#define MOD 1000000007

using namespace std;

int main()
{
	ll n; 
	cin >> n;

	lli sum = 0;

	for(int i = 0;i<n;i++)
	{
		ll temp ; 
		cin >> temp;
		sum += temp;
	}

	if((n*(n+1)/2) == sum) cout<<"YES"<<'\n';
	else cout<<"NO"<<'\n';

	return 0;
}