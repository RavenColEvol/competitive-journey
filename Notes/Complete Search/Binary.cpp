#include<bits/stdc++.h>
using namespace std;

int main()
{
	vector<int> arr = {3,2,6,1,352};
	sort(arr.begin(), arr.end());
	int a = 0, b = arr.size()-1;
	int n = 3;
	while(a <= b) {
		int mid = ( a + b )/2;
		if(arr[mid] == n ) {
			cout << mid << endl;
			break;
		}
		if( n > arr[mid]) a = mid + 1;
		else b = mid - 1;
	}
	return 0;
}