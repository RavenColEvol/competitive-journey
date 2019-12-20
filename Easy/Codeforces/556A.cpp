#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define test while(t--)
#define MOD 1000000007

using namespace std;

int main()
{
	int n; cin>>n;
	int zeros = 0, ones = 0;
	string s;
	cin >> s;

	// return abs(zeros,ones)
	for(int i = 0; s[i] ; i++ )
		s[i]=='0'?++zeros:++ones;

	cout<<abs(zeros-ones);
	return 0;
}