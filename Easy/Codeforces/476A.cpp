#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define test while(t--)
#define MOD 1000000007

using namespace std;

int main()
{
	int n,m;
	cin >> n >> m;

	int lower_limit = n&1?(n+1)/2:n/2;	

	for(int i = m; i <= n; i+=m )
	{
		if(i>=lower_limit){
			cout<<i;
			return 0;
		}
	}

	cout<<-1;

	return 0;
}