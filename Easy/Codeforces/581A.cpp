#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define test while(t--)
#define MOD 1000000007

using namespace std;

int main()
{
	lli a,b ; 
	cin >> a >> b;
	cout<<min(a,b)<<" "<<(max(a,b)-min(a,b))/2;
	return 0;
}