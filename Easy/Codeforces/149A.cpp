#include<bits/stdc++.h>
#define ll long long
#define lli long long int
#define ull unsigned long long
#define test while(t--)
#define MOD 1000000007

using namespace std;

int main()
{
	int k ;
	cin >> k;
	
	int arr[12];
	for(int& i:arr) cin >> i;


	sort(arr,arr+12, greater<int>());
	int count = 0;
	for(int i = 0;k>0&&i<12;i++)
	{
		k -= arr[i];
		count++;
	}
	if(k>0) cout<<-1;
	else cout<<count;

	return 0;
}