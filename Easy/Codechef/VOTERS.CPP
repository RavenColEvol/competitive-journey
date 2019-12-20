#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define test while(t--)
#define MOD 1000000007

using namespace std;

int main()
{
	map<int,int> mp;
	int l,m,n;
	cin>>l>>m>>n;
	int voters = 0;
	for(int i = 0;i<l;i++)
	{
		int temp ; cin>>temp;
		mp[temp] = 1;
	}
	for(int i = 0;i<m;i++)
	{
		int temp ; cin>>temp;
		if(mp[temp]==0){
			mp[temp] = 1;
		}
		else mp[temp]++;
	}
	for(int i = 0;i<n;i++)
	{
		int temp ; cin>>temp;
		if(mp[temp]==0){
			mp[temp] = 1;
		}
		else mp[temp]++;
	}

	for(auto i:mp)
	{
		if(i.second>1) voters++;
	}
	cout<<voters<<endl;
	for(auto i:mp)
	{
		if(i.second>1) cout<<i.first<<endl;
	}
	return 0;
}