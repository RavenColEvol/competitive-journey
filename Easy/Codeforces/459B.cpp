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

	ll n ; 
	cin >> n ;
	ll arr[n];
	for( ll& i:arr ) cin >> i;

	sort(arr, arr + n);
	
	ll max_diff = arr[n-1] - arr[0];

	cout<< max_diff << " ";

	int flag = 0;
	for(int i = 0;i<n-1;i++)
		if(arr[i]!=arr[i+1])
			flag = 1;
	if(!flag){
		cout<<(n*(n-1))/2<<endl;
	}
	else{
		ll m = 1,l = 1;
		for(int i = 1;i<n;i++)
			if(arr[i]==arr[i-1]) ++m;
			else break;
		for(int i = n-2 ;i>=0;i--)
			if(arr[i]==arr[i+1]) ++l;
			else break;

		cout << (l*m);
	}
	return 0;
}