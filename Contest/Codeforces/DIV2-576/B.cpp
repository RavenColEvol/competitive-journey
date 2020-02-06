#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	int n, positive = 0, negative = 0, pmin = 0, nmax = 0;
	cin >> n;
	vector<ll> arr(n);
	for(int i =0; i < n; i++)
	{
		cin >> arr[i];
	}

	for(int i = 0; i< n; i++)
	{
		if(arr[i] >= 0){
			pmin = i;
			break;
		}
	}

	for(int i = 0; i< n; i++)
	{
		if(arr[i] < 0 && arr[i] != -1){
			nmax = i;
			break;
		}
	}


	for(int i = 0 ; i < n ; i++){
		if( arr[i] >= 0 ){
			positive++;
			if(arr[pmin] > arr[i]){
				pmin = i;
			}
		}
		else if(arr[i] < 0) {
			negative++;
			if(arr[nmax] < arr[i] && arr[i] != -1){
				nmax = i;
			}
		}
	}

	for(int i = 0; i < n; i++){
		if(arr[i] >= 0)
			arr[i] = -arr[i] - 1;
	}
	
		
	if(positive % 2 == 1 && negative % 2 == 0) {
		arr[pmin] = -arr[pmin] - 1;
	}
	else if(positive % 2 == 0 && negative % 2 == 1) {
		arr[nmax] = -arr[nmax] - 1;
	}


	for(ll i : arr)
		cout << i << ' ';
	return 0;
}