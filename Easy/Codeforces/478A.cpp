#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define test while(t--)
#define MOD 1000000007

using namespace std;

int main()
{
	lli sum = 0;
	for(int i = 0;i<5;i++)
	{
		int temp ; cin>>temp;
		sum += temp;
	}
	if(sum>0&&sum%5==0) cout<<sum/5;
	else cout<<-1;
	return 0;
}