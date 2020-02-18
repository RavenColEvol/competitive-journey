#include<bits/stdc++.h>
using namespace std;


int main()
{
	vector<int> arr = {1,2,3,4,5,6};
	int n = 3;
	int k = 0;
	int size = arr.size();
	for(int b = size / 2; b >= 1; b /= 2) {
		while( k + b < size && arr[k+b] <= n) k += b;
	}
	if(arr[k]==n) {
		cout << k << endl;
	}
	return 0;
}