#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define test while(t--)
#define MOD 1000000007

using namespace std;

int main()
{
	ios_base::sync_with_stdio(false); 
	cin.tie(NULL); 
	cout.tie(NULL);

	ll arr[3];
	for(ll& i:arr) cin>>i;

	sort(arr,arr+3);
	cout<<(arr[2] - arr[0]);
	return 0;
}