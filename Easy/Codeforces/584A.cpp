#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define test while(t--)
#define MOD 1000000007

using namespace std;

int main()
{
	int n, t;
	cin >> n >> t;

	if(t==10){
		if(n==1) cout<<-1;
		else {
			cout<<1;
			for(int i = 1;i<n;i++)
			{
				cout<<0;
			}
		}
	}
	else {
		for(int i = 0 ;i < n;i++)
			cout<<t;
	}

	return 0;
}