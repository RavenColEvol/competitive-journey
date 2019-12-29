#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
	int t , size;
	cin >> t >> size ;
	ll sum = 0;
	int arr[t];
	
	for(int i = 0;i<t ; i++)
	{
		int prev;
		cin >> prev >> arr[i];
		arr[i] = prev - arr[i];
		sum += prev ;
	}

	if( sum <= size )
		cout << 0 << endl;
	else {
		sort(arr,arr+t);
		int count = 0;
		for(int i = t-1; i >= 0; i--)
		{
			if(sum > size)
				sum -= arr[i], ++count;
			else
				break;
		}
		if(sum > size) cout << -1 << endl;
		else
		cout << count << endl ;
	}

	return 0;
}